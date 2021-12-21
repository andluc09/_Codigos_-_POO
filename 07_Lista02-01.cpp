// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream> 
#include<iomanip> 
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    int numero1, numero2, numero3, soma, produto, maior, menor;
	float media;
	
	cout << fixed;
    cout.precision(2);
    cout<<"Entre o primeiro numero: ";
	cin>>numero1;
	cout<<"Entre com o segundo numero: ";
	cin>> numero2;
	cout<<"Entre com o terceiro numero: ";
	cin>> numero3;
	
	//Soma
	soma=numero1+numero2+numero3;
	cout<<"Soma = "<<soma<<endl;
	
	//Media
	media=(soma/3);
	cout<<"Media = "<<media<<endl;
	
	//Produto
	produto=numero1*numero2*numero3;
	cout<<"Produto = "<<produto<<endl;
	
	//Maior
	if(numero1 > numero2 && numero1 > numero3)
		maior = numero1;
	else
		if(numero2 > numero3)
			maior = numero2;
	else
		maior = numero3;
	cout<<"Maior = "<<maior<<endl;
	
	//Menor
	if (numero1 < numero2 && numero1 < numero3)
		menor = numero1;
	else
		if(numero2 < numero3)
			menor = numero2;
	else
		menor = numero3;
	cout<<"Menor = "<<menor<<endl;
      
    return 0; 
} 