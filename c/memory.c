#include <stdlib.h>
void f(void)
{
    int* x = malloc(10 * sizeof(int)); //выделяет место равное размеру 10ти целых (40 байт)
    x[10] = 0; //x[10] неправильное значение т.к мы выделили место под 10 целых , но счет всегда ведется с нуля, соотв занять можно от 0 до 9
}
int main(void)
{
    f();
    return 0;
}
