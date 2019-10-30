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

void retorna_funcionario(Funcionario f[], int n, Data d, Funcionario funci[], int& tam);
void imprime_funcio_encontr(Funcionario f[], int n);

void le_data(Data& d);

int main()
{
    int n;
    cout << "Insira a quantidade de funcionarios: ";
    cin >> n;
    cin.ignore();

    Funcionario funcionarios[n];

    le_dados(funcionarios, n);

    Data data;

    cout << "\nInsira a data de busca" << endl;
    le_data(data);

    Funcionario funci[SMAX];
    int tam_funci;

    retorna_funcionario(funcionarios, n, data, funci, tam_funci);
    imprime_funcio_encontr(funci,tam_funci);

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

void retorna_funcionario(Funcionario f[], int n, Data d, Funcionario funci[], int& tam)
{
    tam = 0;
    for(int i=0; i<n;i++)
    {
        if(f[i].data_admissao.dia >= d.dia && f[i].data_admissao.mes >= d.mes && f[i].data_admissao.ano >= d.ano)
        {
            funci[tam] = f[i];
            tam++;
        }
    }
}

void imprime_funcio_encontr(Funcionario f[], int n)
{
    for(int i=0; i<n;i++)
    {
        cout << "\nNome: " << f[i].nome << endl;
        cout << "Data de admissao: " << f[i].data_admissao.dia << "/" << f[i].data_admissao.mes << "/" << f[i].data_admissao.ano << endl;
    }
}
void le_data(Data& d)
{
        cout << "Insira o dia de admissao: ";
        cin >> d.dia;
        cout << "Insira o mes de admissao: ";
        cin >> d.mes;
        cout << "Insira o ano de admissao: ";
        cin >> d.ano;
}
