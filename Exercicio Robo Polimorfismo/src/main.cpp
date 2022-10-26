#include <iostream>
#include "robo.h"

using namespace std;

void ExecutaMovimento(MobileRobot* ptr)
{
    double x, y, z, t;
    cout<<"Digite a velocidade em X: ";
    cin>>x;
    cout<<"Digite a velocidade em Y: ";
    cin>>y;
    cout<<"Digite a velocidade em Z: ";
    cin>>z;
    cout<<"Digite o tempo: ";
    cin>>t;
    ptr->Mover(x,y,z,t);
}

int main()
{
    RoboTerrestre r1(10, 10);
    Quadrotor q1(0, 0, 0);
    MobileRobot* armazenaRobo[2] = {&q1, &r1};
    ExecutaMovimento(armazenaRobo[0]);
    return 0;
}
