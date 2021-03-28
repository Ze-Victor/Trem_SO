#include <string>
#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria o trem com seu (ID, posição X, posição Y)
    trem1 = new Trem(1,60,90);
    trem2 = new Trem(2,230,90);
    trem3 = new Trem(3,400,90);
    trem4 = new Trem(4,150,220);
    trem5 = new Trem(5,320,220);

    /*
     * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
     * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
     * Os 3 parâmetros INT do sinal serão utilizados na função.
     * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
     * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
     */
    connect(trem1,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem2,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem3,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem4,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem5,SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));


}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(int id, int x, int y){
    std::string text = "rc1: " + std::to_string(Trem::regiaoCritica[0]) + "\n rc2: " + std::to_string(Trem::regiaoCritica[1]) + "\n rc3: " + std::to_string(Trem::regiaoCritica[2]) + "\n rc4: "
+ std::to_string(Trem::regiaoCritica[3]) + "\n rc5: " + std::to_string(Trem::regiaoCritica[4]) + "\n rc6: " + std::to_string(Trem::regiaoCritica[5]) + "\n rc7: " + std::to_string(Trem::regiaoCritica[6]);
    switch(id){
    case 1: //Atualiza a posição do objeto da tela (quadrado) que representa o trem1
        ui->label_trem1->setGeometry(x,y,30,25);
        break;
    case 2: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem2->setGeometry(x,y,30,25);
        break;
    case 3: //Atualiza a posição do objeto da tela (quadrado) que representa o trem3
        ui->label_trem3->setGeometry(x,y,30,25);
        break;
    case 4: //Atualiza a posição do objeto da tela (quadrado) que representa o trem4
        ui->label_trem4->setGeometry(x,y,30,25);
        break;
    case 5: //Atualiza a posição do objeto da tela (quadrado) que representa o trem4
        ui->label_trem5->setGeometry(x,y,30,25);
        break;
    default:
        break;
    }
    ui->textEdit->setPlainText(QString::fromStdString(text));
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Ao clicar, trens começam execução
 */
void MainWindow::on_pushButton_clicked()
{
    trem1->start();
    trem2->start();
    trem3->start();
    trem4->start();
    trem5->start();
}

/*
 * Ao clicar, trens param execução
 */
void MainWindow::on_pushButton_2_clicked()
{
    trem1->terminate();
    trem2->terminate();
    trem3->terminate();
    trem4->terminate();
    trem5->terminate();
}


void MainWindow::on_sliderTrem1_sliderMoved(int position)
{
 /*
    if(position>=100){
        position = 200-position;
    }
    else {
        position +=200;
    }
 */
     trem1->setVelocidade(position);
}

void MainWindow::on_sliderTrem2_sliderMoved(int position)
{
 /*
    if(position>=100){
        position = 200-position;
    }
    else {
        position +=200;
    }
 */
    trem2->setVelocidade(position);
}

void MainWindow::on_sliderTrem3_sliderMoved(int position)
{
    /*
       if(position>=100){
           position = 200-position;
       }
       else {
           position +=200;
       }
    */
    trem3->setVelocidade(position);
}

void MainWindow::on_sliderTrem4_sliderMoved(int position)
{
    /*
       if(position>=100){
           position = 200-position;
       }
       else {
           position +=200;
       }
    */
    trem4->setVelocidade(position);
}

void MainWindow::on_sliderTrem5_sliderMoved(int position)
{
    /*
       if(position>=100){
           position = 200-position;
       }
       else {
           position +=200;
       }
    */
    trem5->setVelocidade(position);
}
