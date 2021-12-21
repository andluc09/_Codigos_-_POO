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
    int numero1, numero2;
	
	cout << fixed;
    cout.precision(2);
    cout<<"\nDigite um número: ";
	cin>>numero1;
	cout<<"\nDigite outro número: ";
	cin>>numero2;
	
	
	if (numero1%numero2 == 0)
		
		cout<<"\nO número "<<numero1<<" é múltiplo do número "<<numero2<<endl;
	
	else
		cout<<"\nO número "<<numero1<<" não é múltiplo do número "<<numero2<<endl;
	
	
    return 0; 
} 