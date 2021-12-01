//25th November 2021
//AUTHOR:_GAUTHAM_KRISHNA_
//IMPLEMENTATION OF TIME AND SPACE COMPLEXITY FOR BUBBLE SORT AND SELECTION SORT
//AIM:TO CALCULATE TIME AND SPACE COMPLEXITY OF SELECTION AND BUBBLE SORT USING C PROGRAMMING
//-------------------------------BUBBLE SORT-------------------------------------------------


//-----PROGRAM----------
#include<stdio.h>
int main()
{

	int array[100],n;
	int i,j,temporary;
	int count=0;
//ARRAY INPUT
	printf("Enter the number of elements:\n");count++;
	scanf("%d",&n);count++;
	printf("Enter the elements of the array: \n");count++;
	for(i=0;i<n;i++)
	{	
		count++;
		scanf("%d",&array[i]);
	}
	count++;
	
//SORTING OF ELEMENTS	
	for(i=0;i<n-1;i++)
	{
		count++;
		for(j=0;j<n-1-i;j++)
		{
			count++;
			if(array[j]<array[j+1])
			{
				temporary=array[j];count++;
				array[j]=array[j+1];count++;
				array[j+1]=temporary;count++;
			}
		}
	}
	
//PRINTING SORTED ARRAY
	printf("The Sorted Array is: \n");count++;
	for(j=0;j<n;j++)
	{
	printf("%d\n",array[j]);count++;
	}	
	count++;
	printf("The number of steps are: %d\n",count);
	return 0;
}	
