#include <iostream>
using namespace std;

class Carro
{
    public:
    
    string Cor;
    string Modelo;
    float VelMax;
    void Buzinar();
    
    Carro()
    {
        VelMax = 220.f;
        Modelo = "Camaro";
        Cor = "Amarelo";
    }
};
int main() 
{
    Carro MeuCarro;
    Carro Carro2;
    
    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f;
    
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
    
    Carro2.Buzinar();
    cout << Carro2.Cor << endl;
    cout << Carro2.VelMax << endl;
    cout << Carro2.Modelo << endl;
}

void Carro::Buzinar (){
    cout << "Bi,Bi!!!" << endl;
}
