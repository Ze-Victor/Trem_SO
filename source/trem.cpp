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
}

void Trem::checarRegiao(){
    for(int i=0;i<7;++i){
        if(Trem::regiaoCritica[i]==this->ID)
            Trem::regiaoCritica[i]=0;
    }
    if(this->x == 230 && this->y < 150){
        Trem::regiaoCritica[RC1] = this->ID;
    }
    else if(this->x == 400 && this->y < 150){
        Trem::regiaoCritica[RC2] = this->ID;
    }
    else if(this->x < 230 && this->y == 150){
        Trem::regiaoCritica[RC3] = this->ID;
    }
    else if(this->x < 320 && this->y == 150){
        Trem::regiaoCritica[RC4] = this->ID;
    }
    else if(this->x < 400 && this->y == 150){
        Trem::regiaoCritica[RC5] = this->ID;
    }
    else if(this->x < 490 && this->y == 150){
        Trem::regiaoCritica[RC6] = this->ID;
    }
    else if(this->x == 320 && this->y<280){
        Trem::regiaoCritica[RC7] = this->ID;
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
                if (y == 20 && x <230)
                    x+=10;
                else if (x == 230 && y < 150)
                    y+=10;
                else if (x > 60 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 2: //Trem 2
                if (y == 20 && x <400)
                    x+=10;
                else if (x == 400 && y < 150)
                    y+=10;
                else if (x > 230 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
             case 3: //Trem 3
                if (y == 20 && x <570)
                    x+=10;
                else if (x == 570 && y < 150)
                    y+=10;
                else if (x > 400 && y == 150)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 4: //Trem 4
                if (y == 150 && x <320)
                    x+=10;
                else if (x == 320 && y < 280)
                    y+=10;
                else if (x > 150 && y == 280)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            case 5: //Trem 5
                if (y == 150 && x <490)
                    x+=10;
                else if (x == 490 && y < 280)
                    y+=10;
                else if (x > 320 && y == 280)
                    x-=10;
                else
                    y-=10;
                emit updateGUI(ID, x,y);    //Emite um sinal
                break;
            default:
                break;
        }
        msleep(velocidade);
    }
}




