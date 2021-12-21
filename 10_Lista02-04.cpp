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
    char x;
		
	cout << fixed;
    cout.precision(2);
    
	cout<<"\nDigite uma (1) letra, número ou símbolo: ";
	cin>>x;
	
	
	cout<<"Caractere digitado "<<x<<" na tabela ASCII: "<<static_cast<int>(x)<<endl;
	
	
    return 0; 
} 