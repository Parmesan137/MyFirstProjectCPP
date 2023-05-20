#include <iostream>
#include <ctime>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;
int searchjewels(char* jewels, char* stones) //объявляем функцию которая принимает два значения
{
    int schetchik = 0; //создаём счётчик для подсчёта драг.камушков
    int jewelsDlina = strlen(jewels); //определяем длинну строки jewels
    int stonesDlina = strlen(stones); //определяем длинну строки stones
    for(int i=0; i<stonesDlina; i++){ // создаём цикл где перебираем все камни
        for(int j=0; j<jewelsDlina; j++){ // создаём цикл где перебираем драгоценности(ну в нашем случае тут один камень, но ведь мы могли поставить вместо "b" какое-нибудь"Aa")
            if(stones[i] == jewels[j]) // если символ в stones равен символу в jewels
                schetchik++; //то плюс один в счётчик
        }
    }
    return schetchik; //выводим результат
}

int main()
{
    char jewels[] = "b"; //объявляем массив с драгоценностями
    char stones[] = "aAAbbbb"; //объявляем массив где будет солянка из обычных и драгоценных камней
    cout<<searchjewels(jewels, stones); //выводим то что получилось в функции
    return 0;
}