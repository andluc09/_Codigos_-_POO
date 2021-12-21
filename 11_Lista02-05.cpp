// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream> 
#include<iomanip> 
#include<math.h>
#include <locale.h>

using namespace std; 

// main function - 
// where the execution of program begins 
int main() 
{ 	
	setlocale(LC_ALL, "Portuguese"); 
    float numero, maior1, maior2;
	float &num = maior1;
		
	cout << fixed;
    cout.precision(2);
	
	int cont = 1;
    while (cont <= 15) {
	cout<<"\nDigite quinze (15) números: ";
	cin>>numero;
	
	//Verifica se é o primeiro número digitado e define o valor das variáveis maior e igual ao número.
	if (cont == 1) {
		maior1 = numero;
		maior2 = numero;
		}
		
		else if (numero > maior1){ //Verifica se o número digitado é o primeiro maior do que o maior dos números digitados.
				if(maior1 > maior2){        
				maior2 = maior1; } 
		maior1 = numero;
		}
		
		else if (num > maior2){ //Verifica se o número digitado é o segundo maior dentre os números digitados.

		maior2 = numero;
		}
	cont++;
    }
	
	cout<<"\nPrimeiro maior número "<<maior1<<" e o segundo maior número "<<maior2<<"."<<endl;
	
	
    return 0; 
} 