#include <stdio.h>

void merge(int list[], int start, int mid, int end);
void sort(int list[], int start, int end);

int main(void)
{
    int numbers[] = {23, 12, 44, 17, 37, 14, 47, 98, 27, 21, 67, 88, 29, 17};

    int l = sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, 0, l - 1);
    
    for(int i = 0; i < 14; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}

void sort(int list[], int start, int end)
{
    if (start < end)
    {
    int mid = (start + end) / 2;
    sort(list, start, mid);
    sort(list, mid + 1, end);
    merge(list, start, mid, end);
    }
}

void merge(int list[], int start, int mid, int end)
{
    int lm = mid - start + 1;
    int rm = end - mid;

    int left[lm];
    int right[rm];

    for (int i = 0; i < lm; i++)
    {
        left[i] = list[start + i];
    }
    for (int j = 0; j < rm; j++)
    {
        right[j] = list[mid + 1 + j];
    }

    int cl = 0; 
    int cr = 0;
    int index = start;

    while (cl != lm && cr != rm)
    {
        if (left[cl] <= right[cr])
        {
            list[index] = left[cl];
            cl++;
        }
        else
        {
            list[index] = right[cr];
            cr++;
        }
        index++;
    }
    while (cl != lm)
    {
        list[index] = left[cl];
        cl++;
        index++;
    }
    while(cr != rm)
    {
        list[index] = right[cr];
        cr++;
        index++;
    }

}