#include <stdio.h>

int *selection(int list[6]);

int main(void)
{
    int list[6] = {4, 3, 2, 6, 5, 1};
    int *sorted = selection(list);
    for (int i = 0; i < 6; i++)
    {
        printf("%i", sorted[i]);
    }
    printf("\n");
}

int *selection(int list[6])
{
    for (int i = 0; i < 5; i++)
    {
        int small = i;
        for (int j = i + 1; j < 6; j++)
        {
            if (list[small] > list[j])
            {
                small = j;
            }
        }
        int a = list[small];
        int b = list[i];
        list[small] = b;
        list[i] = a;
    }
    return list;
}