#include <iostream>
#include "robo.h"

using namespace std;

void ExecutaMovimento(MobileRobot* ptr)
{
    bool op = 1;
    while (op)
    {
        double x, y, z, t;
        cout<<"Digite a velocidade em X: ";
        cin>>x;
        cout<<"Digite a velocidade em Y: ";
        cin>>y;
        if (ptr->getTipo())
        {
            cout<<"Digite a velocidade em Z: ";
            cin>>z;
        }
        cout<<"Digite o tempo: ";
        cin>>t;
        ptr->Mover(x,y,z,t);
        cout<<"Deseja move-lo novamente?(0 - nao | 1 - sim: ";
        cin>>op;
    }
    
    
}

int main()
{
    RoboTerrestre r1(10, 10, false);
    Quadrotor q1(0, 0, 0, true);
    MobileRobot* armazenaRobo[2] = {&q1, &r1};
    ExecutaMovimento(armazenaRobo[0]);
    ExecutaMovimento(armazenaRobo[1]);
    return 0;
}
