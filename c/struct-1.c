#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(void)
{
    student students[STUDENTS];

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student's name: ");
        students[i].name = GetString();

        printf("Student's dorm: ");
        students[i].dorm = GetString();
    }
    FILE* file= fopen("student.csv","w"); //Сохраняет файл со всей введенной пользователем информацией. //буква "w" пишет файл если хотим просто прочитать файл то пишем "r"
    if (file !=NULL) //null обычная проверка на ошибки
    {
        for (int i = 0; i < STUDENTS; i++)
        {
            fprintf(file,"%s","s\n", students[i].name, students[i].dorm);//Напечатать в файле
        }
        fclose(file);//Закрыть файл
    }
    for (int i = 0; i < STUDENTS; i++)
    {
        free(students[i].name);
        free(students[i].dorm);
    }
}
