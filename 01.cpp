// 01.cpp -- Функция меняющая местами значение двух переменных типа int без использования временной переменной
#define _CRT_SECURE_NO_WARNINGS   // добавление для отключения блокировки стандартных функций "СИ"

#include <stdio.h>                // ввод-вывод
#include <windows.h>              // ввод на русской кириллице
#include <string.h>               // строки
#include <math.h>                 // fabs(float)
#include <stdbool.h>              // bool,true,false
#include <ctype.h>                // для анализа символов
#include <iso646.h>               // &&-and, ||-or, !-not
#include <inttypes.h>             // int8_t, uint8_t, int16_t, int32_t, int64_t 
#include <time.h>                 // time()
#include <stdlib.h>               // atoi(), atol(), atof(), strtol(), strtoul(), strtod()
                                  // rand(), srand(), exit()
                                  // malloc(), free()

void shift(int*, int*);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 5;
    int b = 7;
    puts("До:");
    printf("a = %d, b = %d\n", a, b);

    shift(&a, &b);

    puts("После:");
    printf("a = %d, b = %d\n", a, b);
    getchar();
    getchar();
    return 0;
}

void shift(int* pa, int* pb)
{
    (*pa) = (*pa) + (*pb);
    (*pb) = (*pa) - (*pb);
    (*pa) = (*pa) - (*pb);
    return;
}