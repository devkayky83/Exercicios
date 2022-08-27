#include <iostream>
#include <windows.h>
 
using namespace std;

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x - 1;
    c.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
 
int main() {
  UINT CPAGE_UTF8 = 65001;
  UINT CPAGE_DEFAULT = GetConsoleOutputCP();
  SetConsoleOutputCP(CPAGE_UTF8);
 
    char user[20], pass[20], pass_2[20];

    gotoxy(47, 12);
    cout << "System Authentication";
    gotoxy(47, 15);
    cout << "User: ";
    cin >> user;
    gotoxy(47, 16);
    cout << "Password: ";
    cin >> pass;
    gotoxy(47, 17);
    cout << "Confirm Password: ";
    cin >> pass_2;

    gotoxy(47, 19);
    if (strcmp(pass, pass_2) == 0)
    {
        cout << "Password Confirmed!\n\n"
             << endl;
    }
    else
    {
        cout << "Password Not Confirmed!\n\n"
             << endl;
    }
 
 
  cout << endl;
  return 0;
}