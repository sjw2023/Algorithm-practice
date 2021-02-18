#include <stdio.h>


void quickSort( int * a, int first, int last );
int partition( int * a, int first, int last );

int main(){

    int a[10] = {2,5,6,3,7,0,1,8,9,4};
    quickSort( a, 0, 9 );
    int i = 0;
    for( i = 0; i< 10; i++)
    {
        printf( "%d", a[i] );
    }
    return 0;
}

void quickSort( int * a, int first, int last )
{
    int q = 0;
    if(first < last)
    {
        q = partition( a, first, last );
        quickSort( a, first, q-1);
        quickSort( a, q+1, last );
    }
}
int partition( int * a, int first, int last )
{
    int x = a[last];

    int i =  first-1;
    int j = 0;
    int temp;

    for(j = first; j <= last-1; j++)
    {
        if( a[j] <= x )
        {
            i += 1;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[i+1];
    a[i+1] = a[last];
    a[last] = temp;
    return i+1;
}
