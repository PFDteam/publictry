#include <stdio.h>
int main(void)
{
    typedef struct node
    {
        int n;
        struct node* next;
    }
    node;

    //....
    bool search(int n, node* list)
    {
        node* ptr = list; // ptr - поинтер (указатель)
        while (ptr != NULL)
        {
            if (ptr->n == n)
            {
                return true;
            }
            ptr = ptr-> next;
        }
        return false;

    }
}
