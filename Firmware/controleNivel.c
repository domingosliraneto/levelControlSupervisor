#include <uRTOS_2.21.h>
#include <serialInt_1.2.h>

char __code Tit1[13]=
        "p    i    d ";
char __code Tit2[13]=
        "Setp    Dist";

__sbit __at (0x92) TrigPin;
unsigned int Echo=0x00;
unsigned char TrigCont=100;
unsigned char pid[3]={0,0,0};
unsigned char pwm=0;
unsigned char malha = 1;
__bit sensor=1;

void RTproc_1(){
    if(cnt200==pwm) P1_3=1;
}
void RTproc_2(){
    P1_3=0;
    if(cnt100==99){
        sensor=1;
        REN=0;
        TMOD=0x92;
        IT1=1;
        EX1=1;
        TL1=0x00;
        TH1=0x00;

        TrigPin=1;
        TrigCont=4;
        while(TrigCont)TrigCont--;
        TrigPin=0;
        sensor=0;

    }

}

void ext_1 (void) __interrupt(2){

    Echo=TH1<<8;
    Echo=Echo+TL1;

    sensor=0;
    IE=0x93;
    TMOD=0x22;
    TL1=243;                /*conta 13*/
    TH1=243;                /*recarrega*/
    SCON=0xC8;              /*serial modo 3*/
    TR1=1;                  /*liga tc1*/
    EX1=0;
    REN=1;

}
void ajustPID(){
    unsigned char Kx=0;
    __bit ajust=1;
    pwm=0;
    while(ajust){
        if(S1==3){
            S1=0;
            pid[Kx]++;
        }
        if(S2==3){
            S2=0;
            pid[Kx]--;
        }
        if(Kx==0) char2LCD(0x81, pid[0], 2);
        if(Kx==1) char2LCD(0x86, pid[1], 2);
        if(Kx==2) char2LCD(0x8B, pid[2], 2);
        umSeg=0; cnt100=255;
        while(S1==2);
        if(umSeg){S1=0;
            umSeg=0; Kx++;
            if(Kx==3) Kx=0;
        }
        umSeg=0; cnt100=255;
        while(S2==2);
        if(umSeg){S2=0;
            umSeg=0; ajust=0;
        }
    }   }

void main (){
    unsigned char setup=25;
    unsigned char tempC=0;
    unsigned char tempD=0;
    signed char errAt=0;
    signed char erAnt=0;
    signed int ctrlAt=0;
    signed int ctlAnt=0;
    signed int P=0, I=0, D=0;
    unsigned int tempo=0;
    unsigned char i=0;
    unsigned char contSetup=0;
    unsigned char setupR[3]={0,0,0};
    unsigned char number=0;

    TrigPin=0;

    inic();
    TMOD=0x92;
    IT1=1;
    EX1=1;
    P1_3=0;

    wrLCD4(comand,0x80);
    for(i=0;i<12;i++){
        wrLCD4(letra, Tit1[i]);
    }
    wrLCD4(comand,0xC0);
    for(i=0;i<12;i++){
        wrLCD4(letra, Tit2[i]);
    }
    wrLCD4(comand,0xC4);
    wrLCD4(letra, setup);
    ajustPID();
    while(1){

        if(S1==3){
            S1=0; setup++;
        }
        if(S2==3){
            S2=0; setup--;
        }
        if((S1==2)&&(S2==2)){
            S1=0; S2=0; tempo=0;
            ajustPID();
        }

        char2LCD(0xCC, tempC, 3);

        if(!sensor){
            if(RxFlag){ RxFlag=0;
                contSetup++;
            }

            if(TxFlag){

                if(RxByte == 102){  /* Letra f */
                    wrLCD4(comand,0xCF);
                    wrLCD4(letra, 'F');
                    malha=1;
                    contSetup=0;
                }
                if(RxByte == 97){  /* Letra a */
                    wrLCD4(comand,0xCF);
                    wrLCD4(letra, 'A');
                    malha=0;
                    contSetup=0;
                }

                /* Se RxByte == espaÃ§o, p, i, d, m */
                if(RxByte == 32 || RxByte == 112 || RxByte == 105 || RxByte == 100 || RxByte == 109){

                    if(contSetup-1 == 1){
                        number = setupR[0]-48;
                    }else if(contSetup-1 == 2){
                        number = ((setupR[0]-48)*10)+(setupR[1]-48);

                    }else if(contSetup-1 == 3){
                        number = ((setupR[0]-48)*100)+((setupR[1]-48)*10)+((setupR[2]-48));
                    }
                    if(RxByte == 109){ /* Se Rxbyte == m */
                        pwm = number;
                        contSetup = 0;
                    }
                    if(RxByte == 32){ /* Se RxByte == espaÃ§o */
                        setup = number;
                        contSetup = 0;
                        char2LCD(0xC4, setup, 3);
                    }
                    if(RxByte == 112 ){ /* Se RxByte == p */
                        pid[0] = number;
                        contSetup = 0;
                        char2LCD(0x81, pid[0], 2);
                    }
                    if(RxByte == 105){ /* Se RxByte == i */
                        pid[1] = number;
                        contSetup = 0;
                        char2LCD(0x86, pid[1], 2);
                    }
                    if(RxByte == 100){ /* Se RxByte == d */
                        pid[2] = number;
                        contSetup = 0;
                        char2LCD(0x8B, pid[2], 2);
                    }
                }else{
                    setupR[contSetup-1] = RxByte;
                }
            }
        }

        if(malha == 0){
            char2Ser(0,pwm,3);
            char2Ser(2,tempC,3);
            int2Ser(2, tempo,5);
        }
        if(malha == 1){
            char2Ser(0,errAt,3);
            int2Ser(2,ctrlAt,5);
            char2Ser(2,pwm,3);
            char2Ser(2,tempC,3);
            int2Ser(2, tempo,5);
        }
        while(!TxFlag); TxFlag=0;
        SBUF=13;
        sensor=0;
        tempC=Echo/58;

        tempD=30-tempC;

        if(malha == 1){

            erAnt=errAt;
            errAt=setup-tempD;

            P=errAt; I=erAnt; D=errAt-erAnt;
            P=(P*pid[0])/10; I=(I*pid[1])/10; D=(D*pid[2])/10;
            ctlAnt=ctrlAt;
            ctrlAt=ctlAnt+P+I+D;
            if(ctrlAt>255) ctrlAt=255;
            if(ctrlAt<0) ctrlAt=0;
            pwm=ctrlAt*199/255;
        }

        while(!umSeg); umSeg=0; tempo++;

    }

}
