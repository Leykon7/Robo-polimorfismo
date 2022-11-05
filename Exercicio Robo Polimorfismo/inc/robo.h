#ifndef ROBO_H
#define ROBO_H

class MobileRobot
{
    private:
        bool tipo;
        double PosicaoAtual[3];
    public:
        double getPosicaoAtual(char coordenada);
        void setPosicaoAtual(double X, double Y, double Z);
        bool getTipo();
        void setTipo(bool tipo);
        virtual void Mover(double Xvel, double Yvel, double Zvel, double tempo)=0;     
};

class RoboTerrestre : public MobileRobot
{  
    public:
        RoboTerrestre(double X, double Y, bool tipoEntrada);
        void Mover(double Xvel, double Yvel, double Zvel, double tempo);
};

class Quadrotor : public MobileRobot
{   
    public:
        Quadrotor(double X, double Y, double Z, bool tipoEntrada);
        void Mover(double Xvel, double Yvel, double Zvel, double tempo);
};

#endif
