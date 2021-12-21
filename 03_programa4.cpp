// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    float lapis, borracha, caneta;
	cin>>lapis>>borracha>>caneta;
	cout<<"Lapis"<<setw(12)<<lapis<<endl;
	cout<<"Borracha"<<setw(12)<<borracha<<endl;
	cout<<"Caneta"<<setw(12)<<caneta<<endl;
      
    return 0; 
} 