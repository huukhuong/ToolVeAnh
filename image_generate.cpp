#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <conio.h>

void loading()
{
    system("color 0A");

    char a = 177, b = 219;

    std::cout << "\n\t\t\t\t\t\tLoading...\n\n";
    std::cout << "\t\t\t\t\t";

    for (int i = 0; i < 26; i++)
        std::cout << a;

    std::cout << "\r";
    std::cout << "\t\t\t\t\t";

    for (int i = 0; i < 26; i++)
    {
        std::cout << b;
        Sleep(100);
    }
    std::cout << "\nDa load xong!!!";
    Sleep(500);

    system("cls");
    std::cout << std::endl;
    system("color F");
}

void question()
{
    std::fstream f;
    std::string question, correct, answer;

    f.open("question.txt", std::ios::in);
    if (f.is_open())
    {
        getline(f, question);
        getline(f, correct);
        f.close();
    }

    do
    {
        std::cout << question << " ";
        std::cin >> answer;
        if (answer != correct)
        {
            std::cout << "Cau tra loi khong dung! Vui long thu lai...\n";
        }
    } while (answer != correct);
    std::cout << "Ban da tra loi chinh xac!!!";
}

int main()
{
    question();
    loading();

    std::fstream f;
    f.open("input.txt", std::ios::in);
    if (f.is_open())
    {
        std::string tp;
        while (getline(f, tp))
        {
            std::cout << tp << std::endl;
            Sleep(20);
        }
        f.close();
    }

    std::string a;
    std::cin >> a;
    return 0;
}
