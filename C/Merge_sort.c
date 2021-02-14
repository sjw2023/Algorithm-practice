#include <stdio.h>


void merge(int * array, int p, int q, int r);
void mergeSort(int * array, int p, int r);


int main()
{
    int a [] = {4,3,2,7,1,6,8,9,0,5};
    mergeSort( a, 0, 9 );

    int k = 0;
    for(k = 0; k<10; k++)
    {
        printf( "%d", a[k] );
    }
    return 0;
}

void mergeSort( int * array, int p, int r )
{
    //p is index of first element
    //r is index of last element
    if( p < r )//return when subarray has 1 element
    {
        int q = (p + r) /2; //get index of middle element
        printf("%d\n", q);
        mergeSort( array, p, q );
        mergeSort( array, q + 1, r );
        merge( array, p, q, r );
    }
}

void merge( int * array, int p, int q, int r )
{
    //p = index of first element
    //q = index of middle element
    //r = index of last element
    int n = q - p + 1;
    int m = r - q;
    int L[n+1], R[m+1];

    int i;
    for ( i = 0; i < n; i++ )
        L[i] = array[p+i];

    int j;
    for( j = 0; j < m; j++)
        R[j] = array[q+j+1];

    L[n] = 999999;
    R[m] = 999999;

    i = 0; j =0;
    int k;
    for(k = p ; k <= r; k++)
    {
        if( L[i] <= R[j] )
        {
            array[k] = L[i];
            i = i + 1;
        }
        else
        {
            array[k] = R[j];
            j = j+1;
        }
    }
}
