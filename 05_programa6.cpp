// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    float soma=0;
	for(int i=0;i<10;i++)
	{
		int nota;
		cin>>nota;
		soma+=nota;
	}
	cout<<soma/10<<endl;
    return 0; 
} 