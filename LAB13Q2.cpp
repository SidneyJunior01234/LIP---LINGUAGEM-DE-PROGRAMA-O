#include <iostream>
#include <cstring>

using namespace std;

const int SMAX = 100;

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Funcionario
{
    char nome[SMAX];
    Data data_admissao;
    float salario;
};

void le_dados(Funcionario f[], int n);
int retorna_funcionario(Funcionario f[], int n, char nome[]);
void imprime_funcio_encontr(Funcionario f[], int pos);

int main()
{
    int n;
    cout << "Insira a quantidade de funcionarios: ";
    cin >> n;
    cin.ignore();
    Funcionario funcionarios[n];
    le_dados(funcionarios, n);
    char nome[SMAX];
    cout << "\nInsira o nome de busca do funcionario: ";
    cin.getline(nome, SMAX);
    imprime_funcio_encontr(funcionarios, retorna_funcionario(funcionarios,n,nome));

    return 0;
}

void le_dados(Funcionario f[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "\nInsira o nome: ";
        cin.getline(f[i].nome,SMAX);
        cout << "Insira o dia de admissao: ";
        cin >> f[i].data_admissao.dia;
        cout << "Insira o mes de admissao: ";
        cin >> f[i].data_admissao.mes;
        cout << "Insira o ano de admissao: ";
        cin >> f[i].data_admissao.ano;
        cout << "Insira o salario do funcionario: ";
        cin >> f[i].salario;
        cin.ignore();
    }
}
int retorna_funcionario(Funcionario f[], int n, char nome[])
{
    for(int i=0; i<n;i++)
    {
        if(strcmp(f[i].nome,nome) == 0)
        {
            return i;
        }
    }
    return -1;
}

void imprime_funcio_encontr(Funcionario f[], int pos)
{
    if(pos != -1)
    {
        cout << "\nNome: " << f[pos].nome << endl;
        cout << "Salario: " << f[pos].salario << endl;
    }
    else
    {
        cout << "\nFuncionario nao encontrado!" << endl;
    }
}
