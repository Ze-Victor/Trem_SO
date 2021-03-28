#include "trem.h"
#include <QtCore>

#define RC1 0
#define RC2 1
#define RC3 2
#define RC4 3
#define RC5 4
#define RC6 5
#define RC7 6

int Trem::regiaoCritica[7]{0};

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
    this->rc = -1;
}

void Trem::setRC(int rc){
    if(this->rc==rc)return;
    Trem::regiaoCritica[rc] = this->ID;
    if(this->rc!=-1)Trem::regiaoCritica[this->rc] = 0;
    this->rc = rc;
}

void Trem::checarRegiao(){
    if(this->x == 230 && this->y < 150){
        this->setRC(RC1);
    }
    else if(this->x == 400 && this->y < 150){
        this->setRC(RC2);
    }
    else if(this->x < 230 && this->y == 150){
        this->setRC(RC3);
    }
    else if(this->x < 320 && this->y == 150){
        this->setRC(RC4);
    }
    else if(this->x < 400 && this->y == 150){
        this->setRC(RC5);
    }
    else if(this->x < 490 && this->y == 150){
        this->setRC(RC6);
    }
    else if(this->x == 320 && this->y<280){
        this->setRC(RC7);
    }
    else{
        Trem::regiaoCritica[this->rc] = 0;
        this->rc=-1;
    }

}

void Trem::setVelocidade(int posicao){
    this->velocidade =  200 - posicao;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        checarRegiao();
        if(velocidade==200)continue;
        switch(ID){
            case 1:     //Trem 1
                if (y == 20 && x <230){
                    if(x >= 220 && (Trem::regiaoCritica[RC1]!=0 || Trem::regiaoCritica[RC3]!=0 || Trem::regiaoCritica[RC4]!=0) && Trem::regiaoCritica[RC1]!=this->ID)continue;
                    x+=10;
                }
                else if (x == 230 && y < 150){
                    if(y >= 140 && Trem::regiaoCritica[RC3]!=0 && Trem::regiaoCritica[RC3]!=this->ID)continue;
                    y+=10;
                }
                else if (x > 60 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 2: //Trem 2
                if (y == 20 && x <400){
                    if(x >= 390 && Trem::regiaoCritica[RC2]!=0 && Trem::regiaoCritica[RC2]!=this->ID)continue;
                    x+=10;
                }
                else if (x == 400 && y < 150){
                    if(y >= 140 && Trem::regiaoCritica[RC5]!=0 && Trem::regiaoCritica[RC5]!=this->ID)continue;
                    y+=10;
                }
                else if (x > 230 && y == 150){
                    if(x <= 410 && Trem::regiaoCritica[RC4]!=0 && Trem::regiaoCritica[RC4]!=this->ID)continue;
                    if(x <= 240 && Trem::regiaoCritica[RC1]!=0 && Trem::regiaoCritica[RC1]!=this->ID)continue;
                    x-=10;
                }
                else{
                    y-=10;
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
             case 3: //Trem 3
                if (y == 20 && x <570)
                    x+=10;
                else if (x == 570 && y < 150)
                    y+=10;
                else if (x > 400 && y == 150){
                    if(x <= 500 && (Trem::regiaoCritica[RC6]!=0 || Trem::regiaoCritica[RC2]!=0 || Trem::regiaoCritica[RC5]!=0) && Trem::regiaoCritica[RC6]!=this->ID)continue;
                    if(x <= 410 && Trem::regiaoCritica[RC2]!=0 && Trem::regiaoCritica[RC2]!=this->ID)continue;
                    x-=10;
                }
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 4: //Trem 4
                if (y == 150 && x <320){
                    if(x <= 220 && Trem::regiaoCritica[RC4]!=0 && Trem::regiaoCritica[RC4]!=this->ID)continue;
                    if(x <= 310 && Trem::regiaoCritica[RC7]!=0 && Trem::regiaoCritica[RC7]!=this->ID)continue;
                    x+=10;
                }
                else if (x == 320 && y < 280)
                    y+=10;
                else if (x > 150 && y == 280)
                    x-=10;
                else{
                    if(y <= 160 && (Trem::regiaoCritica[RC3]!=0 || Trem::regiaoCritica[RC4]!=0 || Trem::regiaoCritica[RC1]!=0) && Trem::regiaoCritica[RC3]!=this->ID)continue;
                    y-=10;
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 5: //Trem 5
                if (y == 150 && x <490){
                    if(x >= 380 && Trem::regiaoCritica[RC6]!=0 && Trem::regiaoCritica[RC6]!=this->ID)continue;
                    x+=10;
                }
                else if (x == 490 && y < 280)
                    y+=10;
                else if (x > 320 && y == 280){
                    if(x <= 330 && (Trem::regiaoCritica[RC7]!=0 || Trem::regiaoCritica[RC4]!=0 || Trem::regiaoCritica[RC5]!=0) && Trem::regiaoCritica[RC7]!=this->ID)continue;
                    x-=10;
                }
                else{
                    if(y <= 160 && Trem::regiaoCritica[RC5]!=0 && Trem::regiaoCritica[RC5]!=this->ID)continue;
                    y-=10;
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            default:
                break;
        }
        msleep(velocidade);
    }
}




