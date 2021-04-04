#include "trem.h"
#include <QtCore>

#define RC1 0
#define RC2 1
#define RC3 2
#define RC4 3
#define RC5 4
#define RC6 5
#define RC7 6

QMutex Trem::regiaoCritica[7];

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
    this->rc = -1;
}

void Trem::setVelocidade(int posicao){
    this->velocidade =  200 - posicao;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        if(velocidade==200)continue;
        switch(ID){
            case 1:     //Trem 1
                if (y == 20 && x <230){
                    if(x == 220)Trem::regiaoCritica[RC1].lock();
                    x+=10;
                }
                else if (x == 230 && y < 150){
                    if(y == 140)Trem::regiaoCritica[RC3].lock();
                    y+=10;
                }
                else if (x > 60 && y == 150){
                    if(x == 220)Trem::regiaoCritica[RC1].unlock();
                    if(x == 140)Trem::regiaoCritica[RC3].unlock();
                    x-=10;
                }
                else{
                    y-=10;
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 2: //Trem 2
                if (y == 20 && x <400){
                    if(x == 390)Trem::regiaoCritica[RC2].lock();
                    x+=10;
                    if(x == 240)Trem::regiaoCritica[RC1].unlock();
                }
                else if (x == 400 && y < 150){
                    if(y == 140)Trem::regiaoCritica[RC5].lock();
                    y+=10;
                }
                else if (x > 230 && y == 150){
                    if(x == 330)Trem::regiaoCritica[RC4].lock();
                    if(x == 240)Trem::regiaoCritica[RC1].lock();
                    x-=10;
                    if(x == 390)Trem::regiaoCritica[RC2].unlock();
                    if(x == 310)Trem::regiaoCritica[RC5].unlock();
                }
                else{
                    y-=10;
                    if(y == 140)Trem::regiaoCritica[RC4].unlock();
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
             case 3: //Trem 3
                if (y == 20 && x <570){
                    x+=10;
                    if(x == 410)Trem::regiaoCritica[RC2].unlock();
                }
                else if (x == 570 && y < 150)
                    y+=10;
                else if (x > 400 && y == 150){
                    if(x == 500)Trem::regiaoCritica[RC6].lock();
                    if(x == 410)Trem::regiaoCritica[RC2].lock();
                    x-=10;
                }
                else{
                    y-=10;
                    if(y == 140)Trem::regiaoCritica[RC6].unlock();
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 4: //Trem 4
                if (y == 150 && x <320){
                    if(x == 220)Trem::regiaoCritica[RC4].lock();
                    if(x == 310)Trem::regiaoCritica[RC7].lock();
                    x+=10;
                    if(x == 240)Trem::regiaoCritica[RC3].unlock();
                }
                else if (x == 320 && y < 280){
                    y+=10;
                    if(y == 160)Trem::regiaoCritica[RC4].unlock();
                }
                else if (x > 150 && y == 280){
                    x-=10;
                    if(x == 310)Trem::regiaoCritica[RC7].unlock();
                }
                else{
                    if(y == 160)Trem::regiaoCritica[RC3].lock();
                    y-=10;
                }
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 5: //Trem 5
                if (y == 150 && x <490){
                    if(x == 380)Trem::regiaoCritica[RC6].lock();
                    x+=10;
                    if(x == 330)Trem::regiaoCritica[RC7].unlock();
                    if(x == 410)Trem::regiaoCritica[RC5].unlock();
                }
                else if (x == 490 && y < 280){
                    y+=10;
                    if(y == 160)Trem::regiaoCritica[RC6].unlock();
                }
                else if (x > 320 && y == 280){
                    if(x == 330)Trem::regiaoCritica[RC7].lock();
                    x-=10;
                }
                else{
                    if(y == 160)Trem::regiaoCritica[RC5].lock();
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




