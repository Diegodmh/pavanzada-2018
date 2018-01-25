#include <stdio.h>

int a[] = {1, 2, 3, 4, 3, 100000, 7, 8, 9, 0};
int b[] = {9, 0, 8, 7, 100000, 3, 4, 3, 2, 1};
int p[10];

void kata1()
{
    int number;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        number = a[i];
        for (int j = 0; j < sizeof(a) / sizeof(a[0]); j++)
        {
            if (number == b[j])
            {
                p[i] = j;
                b[j] = -1;
                break;
            }
        }
    }
}

int main()
{
    kata1();
    printf("[");
    for (int i = 0; i < sizeof(p) / sizeof(p[0]); i++)
    {
        printf("%d,", p[i]);
    }
    printf("]\n");
    return 0;
}