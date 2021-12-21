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
    
	cout << fixed;
    cout.precision(2);
	
	int n, *v, i, Salario;
	
    cout<<"\nEntre com a quantidade de vendas: ";
    cin>>n;
	
    v = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; ++i) {
		cout<<"\nPreencha com os valores totais de venda aredondados, sem as casas após a vírgula dos vendedores: ";
		cin>>v[i];
	}
    
	if(v[i] = -1){
		break;
	}
	
	for (i = 0; i < n; ++i) {
		cout<<"\nValor de vendas: "<<v[i]<<endl;
    }
	
	for (i = 0; i < n; ++i) {
		Salario=0.09*v[i]+200;
		cout<<"\nSalário do vendedor: "<<Salario<<endl;
    }
	
    cout<<"\n";
    free(v);
	
	
    return 0; 
} 