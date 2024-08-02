#include <stdio.h>

void bubbleSort(int A[], int size);

int main()
{


    return 0;
}

void bubbleSort(int A[], int size)
{
    int i;
    int k ;
    int temp;

    // Big O notation(upperbound) O(n^2)
    // This bubble sort is O(n^2) can do

    // The best rate that you can do is O(nlog_2(n))


    for(k = 1; k <= size-1; k++)
    {
        for(i = 0; i <= size-2; i ++)
        {
            if(A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;

            }
        }
    }
    return;
}
