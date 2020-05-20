// Подсчёт количества букв в тексте Погнаев Д.С.

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    char str[200];
    std::cout << "Введите строку: ";
    std::cin.get(str, 200);

    int schet = 0;
    int len = strlen(str);
    int a1 = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
            schet++;
        if (str[i] == 'r')
            a1++;
    }
    std::cout <<"Частота буквы r в тексте: "<< a1 << std::endl;
    std::cout << "Количество букв в тексте = " << schet << std::endl;

    return 0;
}