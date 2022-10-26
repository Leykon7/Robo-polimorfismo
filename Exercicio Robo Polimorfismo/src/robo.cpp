#include "robo.h"

using namespace std;

double MobileRobot::getPosicaoAtual(char coordenada)
{
    switch(coordenada)
    {
        case "X":
            return this->PosicaoAtual[0];
        case "Y":
            return this->PosicaoAtual[1];
        case "Z":
            return this->PosicaoAtual[2];
        default:
            std::cout<<"posicao invalida"<<endl;
            return -100000000000000;
    }
}

void MobileRobot::setPosicaoAtual(double X, double Y, double Z)
{
    if(X>=0)
    {
        this->PosicaoAtual[0]=X;
    }
    if(Y>=0)
    {
        this->PosicaoAtual[1]=Y;
    }
    if(Z>=0)
    {
        this->PosicaoAtual[2]=Z;
    }
}

void RoboTerrestre::Mover(double Xvel, double Yvel, double Zvel, double tempo)
{
    cout<<"Acionando rodas..."<<endl<<endl;
    cout<<"Posicao anterior: "<<endl;
    cout<<"X: "<<this->getPosicaoAtual(X)<<endl;
    cout<<"Y: "<<this->getPosicaoAtual(Y)<<endl<<endl;
    cout<<"Posicao atual: "<<endl;
    cout<<"X: "<<this->getPosicaoAtual(X)<<endl;
    cout<<"Y: "<<this->getPosicaoAtual(Y)<<endl<<endl;
}

void Quadrotor::Mover(double Xvel, double Yvel, double Zvel, double tempo)
{

}