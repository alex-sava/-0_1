// 01.cpp -- Функция меняющая местами значение двух переменных типа int без использования временной переменной
#define _CRT_SECURE_NO_WARNINGS   // добавление для отключения блокировки стандартных функций "СИ"

#include <stdio.h>                // ввод-вывод с
#include <iostream>               // ввод-вывод с++
#include <windows.h>              // ввод на русской кириллице

void shift(int &, int &);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 5;
    int b = 7;
    puts("До:"); 
    printf("a = %d, b = %d\n", a, b);

    shift(a, b);

    puts("После:");
    printf("a = %d, b = %d\n", a, b);
    getchar();
    getchar();
    return 0;
}

void shift(int &pa, int &pb)
{
    pa = pa + pb;
    pb = pa - pb;
    pa = pa - pb;
    return;
}