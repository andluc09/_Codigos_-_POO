#include "Aluno.h"

using namespace std;

int main()
{
    	Aluno listaAlunos[15];
	
	listaAlunos[0].setNome("André");
	listaAlunos[0].setSerie("Sexta Serie");
	listaAlunos[0].setGrau("Setimo");
    cout<<listaAlunos[0].getNome()<<" esta em "<< listaAlunos[0].getSerie() << " do "<< listaAlunos[0].getGrau()<< " grau." << endl;
    
	Aluno a1;
	a1.setNome("André");
	a1.setSerie("Sexta Serie");
	a1.setGrau("Setimo");
	cout<<a1.getNome()<<" esta em "<< a1.getSerie() << " do "<< a1.getGrau()<< " grau." << endl;
	cout<<a1.quantidade<<endl;
	
	Aluno a2;
	a2.setNome("Letícia");
	a2.setSerie("Terceira Serie");
	a2.setGrau("Quarto");
	cout<<a2.getNome()<<" esta em "<< a2.getSerie() << " do "<< a2.getGrau()<< " grau." << endl;
	cout<<a2.quantidade<<endl;
	
	Aluno a3;
	a3.setNome("Camila");
	a3.setSerie("Setima Serie");
	a3.setGrau("Oitavo");
	cout<<a3.getNome()<<" esta em "<< a3.getSerie() << " do "<< a3.getGrau()<< " grau." << endl;
	cout<<a1.quantidade<<endl;
	
	delete &a1;
	cout<<a2.quantidade<<endl;
	
	getchar();
	
	return 0;
}