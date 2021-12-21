#include <iostream>
#include <string>
using namespace std;

class Aluno{
    public:
        
        Aluno(string nomeAluno, int serieAluno, int grauAluno){
            n++;
            this->nomeAluno=nomeAluno;
            this->serieAluno=serieAluno;
            this->grauAluno=grauAluno;
        }
        int getAluno(){
            return n;
        }
        string getNomeAluno(){
            return nomeAluno;
        }
        void setNomeAluno(){
            this->nomeAluno = nomeAluno;
        }
        int getSerieAluno(){
            return serieAluno;
        }
        void setSerieAluno(){
            this->serieAluno = serieAluno;
        }        
        int getGrauAluno(){
            return grauAluno;
        }
        void setNomeAluno(){
            this->grauAluno = grauAluno;
        }
        Aluno(string nomeAluno, int serieAluno, int grauAluno){
            n--;
            this->nomeAluno=nomeAluno;
            this->serieAluno=serieAluno;
            this->grauAluno=grauAluno;
        }

    private:
        static int n;
        string nomeAluno;
        int serieAluno;
        int grauAluno;
}

int main(){
    
}