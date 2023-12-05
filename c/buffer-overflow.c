#include <string.h>
void f(char* bar)
{
    char c [12]; // выделяем 12 байт для 12-ти символов
    strncpy(c, bar, strlen(bar)); //strncpy- функция копирования строки её цель копировать второй аргумент в первый аргумент до определенного кол-ва байтов
}
int main(int argc, char* argv[])
{
    f(argv[1]);
}
