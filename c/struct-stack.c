#include <stdio.h>
int main(void)
typedef struct
{
    int numbers[CAPACITY];
    int size;
}
stack;      //I вариант - жестко прописанный массив


typedef struct
{
    int* numbers;
    int size;
}
stack; // II вариант - теперь можно перераспределять память и хранить там адресса (мы добились динамичности и сохранили непрерывность)

