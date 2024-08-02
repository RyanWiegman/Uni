#include <stdio.h>

#define SIZE 6

void merge(int A[], int L1, int R1, int L2, int R2);
void merge_Sort(int A[], int left, int right);

int main()
{
    int A[SIZE] = {3, 7, 2, 9, 0, 1};

    merge_Sort(A, 0, SIZE-1);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}


// Merge sort involves an 0(n) algorithm
void merge_Sort(int A[], int left, int right)
{
    int L1, R1, L2, R2;

    if(left == right)
        return;

    L1 = left;
    R1 = (left+right)/2;

    L2 = R1 + 1;
    R2 = right;

    merge_Sort(A, L1, R1);
    merge_Sort(A, L2, R2);

    merge(A, L1, R1, L2, R2);

    return;
}

void merge(int A[], int L1, int R1, int L2, int R2)
{
    int i, j, k;

    int Temp[R2-L1+1];

    i = L1;
    j = L2;

    k = 0;

    // Both subarrays have data left
    while(i <= R1 && j <= R2)
    {
        if(A[i] < A[j])
        {
            Temp[k] = A[i];
            i++;
            k++;
        }

        else
        {
            Temp[k] = A[j];
            j++;
            k++;
        }
        
    }

    // If left subarray has data left
    while(i <= R1)
    {
        Temp[k] = A[i];

        i++;
        k++;
    }

    // If right subarray has data left
    while(j <= R2)
    {
        Temp[k] = A[j];

        j++;
        k++;
    }

    // Copy data to original array
    for(i = L1, k = 0; i <= R2; i++, k++)
    {
        A[i] = Temp[k];
    }

    return;
}
