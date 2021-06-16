#include <stdio.h>

void insertionSort( int input [], int size);

int main()
{
    int a [10] = {5,3,6,0,9,7,4,1,2,8};
    insertionSort( a, sizeof(a)/sizeof(int) );
}

void insertionSort( int input [], int size )
{
    int n, j;
    int key;
    for( n = 1; n < size; n++ )
    {
        j = n;
        key = input[j];
        while( j > 0 && key < input[j-1] )
        {
            input[j] = input[j-1];
            j -= 1;
        }
        input[j] = key;
    }
    for(n = 0; n < size; n++)
    {
        printf( "%d, ", input[n] );
    }
}
