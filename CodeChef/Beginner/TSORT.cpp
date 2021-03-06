/* C program for Merge Sort */
#include<stdlib.h>
#include<stdio.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(unsigned long long arr[], unsigned long long l, unsigned long long m, unsigned long long r)
{
    unsigned long long i, j, k;
    unsigned long long n1 = m - l + 1;
    unsigned long long n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(unsigned long long arr[], unsigned long long l, unsigned long long r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        unsigned long long m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(unsigned long long A[], unsigned long long size)
{
    unsigned long long i;
    for (i=0; i < size; i++)
        printf("%d\n", A[i]);
}

/* Driver program to test above functions */
int main()
{
    unsigned long long t, i;

    scanf("%llu", &t);

    unsigned long long arr[t];

    for(i = 0; i < t; i++){
        scanf("%llu", &arr[i]);
    }

    unsigned long long arr_size = sizeof(arr)/sizeof(arr[0]);

    //printf("Given array is \n");
    //printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    //printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
