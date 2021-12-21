#include "Estacionamento.h"

using namespace std;

Estacionamento::Estacionamento(){
    placa = 0;
    modelo = 0;
}
string Estacionamento::getPlaca(){
    return placa;
}
string Estacionamento::getModelo(){
    return modelo;
}
void Estacionamento::setPlaca(){
    this->placa=placa;
}
void Estacionamento::setModelo(){
    this->modelo=modelo;
}
void Estacionamento::toString(){
	cout<<"\n"<<placa<<endl;
    cout<<modelo<<endl;
}