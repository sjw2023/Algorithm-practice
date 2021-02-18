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
    int x = a[last];// set pivot
    int i = first-1;// in the loop we add +1 before swap.
    int j = 0;
    int temp;

    // find the place of a[last] where left side is all less then a[last] and the values on the right side of a[last] is all greater than a[last]
    // While scaning from the first element ( j ) if a[j] is less then a[last], swap with a[i+1]
    for(j = first; j <= last-1; j++)//Looping from the first element to the last element.
    {
        if( a[j] <= x )//if elements is smaller than the pivot
        {
            i += 1; //i+1
            temp = a[i];//swap a[i]and a[j], a[i] indicating the biggest number among the smaller numbers.
            a[i] = a[j];
            a[j] = temp;
        }
    }
    //at the end of loop, a[p ... i] is all less than pivot x, and a[i+2 ... r] is all greater than the pivot x
    //and place pivot x ( a[last] ) at the right place which satisfy above.(a[i+1])
    // and return its index.
    temp = a[i+1];
    a[i+1] = a[last];
    a[last] = temp;
    return i+1;
}
