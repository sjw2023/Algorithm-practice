#include <stdio.h>
//Assumtion
//1. Input array is A[1..n] thus A.length = n
//2. 
int countArray[] = {0,};
int countingSort( int arrayInput, int arrayOutput, int numOfElements  );

int main ()
{
  printf("%d", 10);
  return 0;
}

int countingSort( int arrayInput, int arrayOutput, int largestNumber, int arraySize )
{
	//initiallizing temp array with 0.
	int countingArray[largestNumber] = {0,};
	//Count each integers in the arrayInput
	for( int i = 0; i < arraySize; i++)
	{
		countingArray[arrayInput[i]] += 1;
	}
	//countinArray[0] + countingArray[1] = number of elements which is less than equal to interger 1, in next step countingArray[1] indicates number of elements which is less than equal to 1, so countingArray[1] + countingArray[2] will be the number of elements which is less than equal to 2. and so on.
	//for this we need to start index from 1.
	for( int i = 1; i < largestNumber; i++)
	{
		countingArray[i] += countingArray[i-1]; 
	}
	//Now is the time to sroting.
	//I didn't get this part yet, Gotta review it.
	for( int j = arraySize; j >= 1 ;j++)
	{
		arrayOutput[countingArray[arrayInput[j]]] = arrayInput[j];
		countingArray[arrayInput[j]] -= 1;
	}
}