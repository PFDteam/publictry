#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name;
    string dorm;
    int id;
 // Самый простой способ записать данные одного студента

   string name2;
   string dorm2;
   int id2;
// Самый примитивный способ продолжать список

  string names[3];
  string dorms[3];
  int id[3];
// Способо чуть получше ^
  student s;
  student t;

  // еще более лучший способ

  student class[3];

  //Наиболее лучший способ - ввести структуру

   typedef struct //Вызов структуры
   {
    string name; //Сами данные которые мы вводим в структуру
    string dorm;
   }
   student; //за фигурными скобками указывается название нового типа данных
}
