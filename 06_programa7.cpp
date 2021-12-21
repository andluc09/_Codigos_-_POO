// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
	int n;
	int& a=n;
	n=15;
	cout<<n<<endl;
	cout<<a<<endl;
	a=0;
	cout<<n<<endl;
	cout<<a<<endl;
	
    return 0; 
} 