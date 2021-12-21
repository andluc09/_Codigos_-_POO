// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream> 
#include<iomanip> 
#include<math.h>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    float raio, diametro, area, circunferencia;
	
	cout << fixed;
    cout.precision(2);
    cout<<"Digite o raio de um circulo: ";
	cin>>raio;
	
	diametro = 2*raio;
	cout<<"Diametro = "<<diametro<<endl;
	
	area = 3.14159*pow(raio,2);
    cout<<"Area = "<<area<<endl;

	circunferencia = 2*3.14159*raio;
	cout<<"Circunferencia = "<<circunferencia<<endl;
	
		
    return 0; 
} 