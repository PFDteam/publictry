#include <stdlib.h>
void f(void)
{
    int* x = malloc(10 * sizeof(int));
    x[9] = 0; // используем 10 целых чисел, от 0 до 9
    free(x); //Высвобождаем запрошенную память
}
int main(void)
{
    f();
    return 0;
}
