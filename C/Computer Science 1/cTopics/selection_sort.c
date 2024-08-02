void selection_sort(int A[], int size);

#include <stdio.h>

#define SIZE 100000

int main()
{
    int A[SIZE] = {3,7,2,9,0,1};

    selection_sort(A, SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}

void selection_sort(int A[], int size)
{
    int i, j, temp;

    for(i=0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    return;
}

