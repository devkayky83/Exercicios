#include <iostream>
#include <windows.h>
#include <conio.h>


using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char aux[20];
    char nome[3][20];

    for (int i = 0; i < 3; i++)
    {
        cout << "\n Insira um nome: ";
        cin >> nome[i];
        system ("cls");
    }
    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            if (strcmp(nome[j - 1], nome[j]) > 0)
            {
                strcpy(aux, nome[j - 1]);
                strcpy(nome[j - 1], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }

       cout << "\n Nomes em ordem alfabética: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n " << nome[i] << endl;
    }
    cout << endl;
    return 0;
}