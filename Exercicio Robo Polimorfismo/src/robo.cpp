#include "robo.h"
#include <iostream>

using namespace std;

double MobileRobot::getPosicaoAtual(char coordenada)
{
    if(coordenada == 'X')
    {
        return this->PosicaoAtual[0];
    }
    if (coordenada =='Y')
    {
        return this->PosicaoAtual[1];
    }
    if (coordenada =='Z')
    {
        return this->PosicaoAtual[2];
    }
    
}

void MobileRobot::setPosicaoAtual(double X, double Y, double Z)
{
    if(X>=0)
    {
        this->PosicaoAtual[0]=X;
    }
    else
    {
        this->PosicaoAtual[0]=0;
    }
    if(Y>=0)
    {
        this->PosicaoAtual[1]=Y;
    }
    else
    {
        this->PosicaoAtual[1]=0;
    }
    if(Z>=0)
    {
        this->PosicaoAtual[2]=Z;
    }
    else
    {
        this->PosicaoAtual[2]=0;
    }
}

RoboTerrestre::RoboTerrestre(double X, double Y)
{
    this->setPosicaoAtual(X,Y,0);
}

void RoboTerrestre::Mover(double Xvel, double Yvel, double Zvel, double tempo)
{
    cout<<"Acionando rodas..."<<endl<<endl;
    cout<<"Posicao anterior: "<<endl;
    cout<<"X: "<<this->getPosicaoAtual('X')<<endl;
    cout<<"Y: "<<this->getPosicaoAtual('Y')<<endl<<endl;

    this->setPosicaoAtual((getPosicaoAtual('X')+Xvel*tempo), (this->getPosicaoAtual('Y')+Yvel*tempo), 0 );

    cout<<"Posicao atual: "<<endl;
    cout<<"X: "<<this->getPosicaoAtual('X')<<endl;
    cout<<"Y: "<<this->getPosicaoAtual('Y')<<endl<<endl;
}

Quadrotor::Quadrotor(double X, double Y, double Z)
{
    this->setPosicaoAtual(X,Y,Z);
}

void Quadrotor::Mover(double Xvel, double Yvel, double Zvel, double tempo)
{
    cout<<"Acionando hélices..."<<endl<<endl;
    cout<<"Posicao anterior: "<<endl;
    cout<<"X: "<<this->getPosicaoAtual('X')<<endl;
    cout<<"Y: "<<this->getPosicaoAtual('Y')<<endl<<endl;
    cout<<"Z: "<<this->getPosicaoAtual('Z')<<endl<<endl;

    this->setPosicaoAtual((getPosicaoAtual('X')+Xvel*tempo), (this->getPosicaoAtual('Y')+Yvel*tempo), (this->getPosicaoAtual('Z')+Zvel*tempo));

    cout<<"Posicao atual: "<<endl;
    cout<<"X: "<<this->getPosicaoAtual('X')<<endl;
    cout<<"Y: "<<this->getPosicaoAtual('Y')<<endl<<endl;
    cout<<"Z: "<<this->getPosicaoAtual('Z')<<endl<<endl;
}