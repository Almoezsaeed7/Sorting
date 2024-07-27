#include <stdio.h>

int *bubble(int list[6]);

int main(void)
{
    int list[6] = {4, 3, 2, 6, 5, 1};
    int *sorted = bubble(list);
    for (int i = 0; i < 6; i++)
    {
        printf("%i", sorted[i]);
    }
    printf("\n");
}

int *bubble(int list[6])
{
    int counter = 1;
    while (counter != 0)
    {
        counter = 0;
        for (int i = 0; i < 5; i++)
        {
            if (list[i] > list[i + 1])
            {
                counter++;
                int a = list[i];
                int b = list[i + 1];
                list[i] = b;
                list[i + 1] = a;
            }
        }
    }
    return list;
}