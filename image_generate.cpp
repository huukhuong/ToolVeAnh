#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

void loading() {
    system("color 0A");
  
    char a = 177, b = 219;
  
    cout << "\n\t\t\t\t\t\tLoading...\n\n";
    cout << "\t\t\t\t\t";
  
    for (int i = 0; i < 26; i++)
        cout << a;
  
    cout << "\r";
    cout << "\t\t\t\t\t";
  
    for (int i = 0; i < 26; i++) {
        cout << b;
        Sleep(100);
    }
    cout << "\nDa load xong!!!";
    Sleep(500);
    system("cls");
	
	system("color F");
}

int main()
{
    fstream newfile;
    string str;

	cout << "Nhan phim Enter de bat dau...";
	cin.ignore();
    loading();
    cout << endl;
    
    newfile.open("input.txt", ios::in);
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            cout << tp << endl;
            Sleep(20);
        }
        newfile.close();
    }

    system("pause");
	cin.ignore();
    return 0;
}
