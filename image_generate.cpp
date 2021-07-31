#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
    fstream newfile;
    string str;

    newfile.open("input.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            str += tp;
            str += '\n';
        }
        newfile.close();
    }

    cout << "Nhap enter de bat dau chay: ";
    getch();
    cout << endl;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str.at(i);
//        Sleep(10);
    }

    return 0;
}
