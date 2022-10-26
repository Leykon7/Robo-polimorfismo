#ifndef ROBO_H
#define ROBO_H

class MobileRobot
{
    private:
        double PosicaoAtual[3];
    public:
        double getPosicaoAtual(char coordenada);
        void setPosicaoAtual(double X, double Y, double Z);
        virtual void Mover(double Xvel, double Yvel, double Zvel, double tempo)=0;     
}

class RoboTerrestre : public MobileRobot
{

}

class Quadrotor : public Quadrotor
{
    
}

#endif
