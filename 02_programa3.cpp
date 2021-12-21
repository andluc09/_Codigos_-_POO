// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    int number1;
	int number2;
	int sum;
	
	cout<<"Entre o primeiro numero: ";
	cin>>number1;
	cout<<"Entre com o segundo numero: ";
	cin>> number2;
	sum=number1+number2;
	cout<<"Soma = "<<sum<<endl;
      
    return 0; 
} 