#include "Estacionamento.h"
#include "Tempo.h"

using namespace std;

int mais(){

    float valor;

            Estacionamento listaCarros[23];

        listaCarros[0]setPlaca("FIR1468");
        listaCarros[0]setModelo("Chevrolet Classic");
        Tempo t1= Tempo(10:09:15);
        t1 toString();
        Tempo t2= Tempo(15:49:07);
        t2 toString();

    if(t1 < t2){
        t2.subtrair(t1);
        t1.toString();
    }

    valor = t1.hora*1,50;

    cout<<"\nValor a ser pago pelo estacionamento: "<<valor<<endl;

    if (t2 < t1)
    {
        t1.subtrair(t2);
        t1.toString();
    }

    valor = t1.hora*1,50;

    cout<<"\nValor a ser pago pelo estacionamento: "<<valor<<endl;    

    getchar();

    return 0;
}
