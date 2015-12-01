/*
	Program : Implementation of Insertion Sort Algorithm in C
	Author : Sarthak Yadav
	
	Principles: 
		- Insertion Sort is a sorting algorithm with a average case complexity of O(n^2)
		- For more details about Insertion Sort visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/sorting/
				 https://www.khanacademy.org/computing/computer-science/algorithms/insertion-sort/a/insertion-sort
		
	Instructions:
		- This is just the sole insertionSort.c file. Compile it using command line with the provided program.c file
		  see program.c file for more details
*/

#include <stdio.h>

void insertion_sort(int arr[],int _arraySize)
{
	int j,i,key;
	for(j=1;j<=_arraySize-1;j++)							//iterates from the 2nd element of the array (index no: 1)
	{
		key=arr[j];											//sets key as the value on the current index
		i=j-1;
		while(i>=0 && arr[i]>key)							//keeps check if i is non negative
		{
			arr[i+1]=arr[i];
			i-=1;
		}
		arr[i+1]=key;
	}
}
