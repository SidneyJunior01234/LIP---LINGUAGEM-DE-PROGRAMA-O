#include <iostream>
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
void imprime_dados(Funcionario f[], int n);

int main()
{
    int n;
    cout << "Insira a quantidade de funcionarios: ";
    cin >> n;
    cin.ignore();
    Funcionario funcionarios[n];
    le_dados(funcionarios, n);
    imprime_dados(funcionarios,n);

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
void imprime_dados(Funcionario f[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "\nNome: " << f[i].nome << endl;
        cout << "Data de admissao: " << f[i].data_admissao.dia << "/" << f[i].data_admissao.mes << "/" << f[i].data_admissao.ano << endl;
        cout << "Salario: " << f[i].salario << endl;
    }
}
