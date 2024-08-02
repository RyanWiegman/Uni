#include <stdio.h>

#define SIZE 6

void insertion_Sort(int A[], int size);

int main()
{
    int A[SIZE] = {3, 7, 2, 9, 0, 1};

    insertion_Sort(A, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}

void insertion_Sort(int A[], int size)
{
    int i, j, temp;
 

    for(i = 0; i < size; i++)
    {
        // Insert A[i] in the subarray to the left
        temp = A[i];

        for(j = i-1; j >= 0; j--)
        {
            if(A[j] > temp)
            {
                // Move it to right by 1 spot
                A[j+1] = A[j];
            }

            else 
                break;
        }

        A[j+1] = temp;
        
    }

    return;
}
