// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    int lapis = 45, borracha=2345, caneta=420;
	cout<<"Lapis"<<setw(12)<<lapis<<endl;
	cout<<"Borracha"<<setw(12)<<borracha<<endl;
	cout<<"Caneta"<<setw(12)<<caneta<<endl;
      
    return 0; 
} 