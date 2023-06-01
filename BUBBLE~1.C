/*The code below demonstrate the bubblesort algorithm to sort numbers in
ascending order */

#include<stdio.h>
#include<conio.h>

int temp, len, i, j, k, l;
int num[] = {9, 5, 1, 7, 2};

void main()
{
	// Clearing screen
	clrscr();
	// Finding the size of an array num
	len = sizeof(num) / sizeof(num[0]);

	printf("Number Before bubble sort : \n");
	for(k=0; k< len; k++)
	{
		printf("%d \t", num[k]);
	}

	/* Starting bubble sort algorithm. The outer loop denotes how many elements
	in the array needs to be compared, which is always 1 less than total elements in
	in the array. The inner loop represent how many times each elements needs to be
	compared. The first elements needs to be checked against all other element while the
	second element needs to be compared one less than the first element as it is already
	compared with the first element and so on.
	*/

	for(i=0; i < len-1; i++)
	{
	   printf("\n Pass %d \t", i);

	   for(j=0; j < len-i-1; j++)
	   {
	      if(num[j] > num[j+1])
	      {
		 temp = num[j];
		 num[j] = num[j+1];
		 num[j+1] = temp;
	      }
	   }
	}

	printf("\nNumber After bubble Sort : \n");
	for(l=0; l< len; l++)
	{
		printf("%d \t", num[l]);
	}
	getch();
}
