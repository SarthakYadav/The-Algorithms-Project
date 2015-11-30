/*
	Program : Implementation of Insertion Sort Algorithm in C
	Author : Sarthak Yadav
	
	Principles: 
		- Quick Sort is a sorting algorithm that works on RANDOMISATION technique and has an average case complexity of O(n.log n) and worst case O(n^2)
		- For more details about Insertion Sort visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/sorting/
				 https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort
				 
	Instructions:
		- This is just the sole quickSort.c file. Compile it using command line with the provided program.c file
		  see program.c file for more details
*/

#include <stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int _lowerIndex,int _upperIndex)
{
	/*
		This is the crux of the QuickSort algorithm , i.e the partition methodology
		
		We can partition the array in one linear scan for a particular pivot element
		by maintaining three sections of the array: less than the pivot (to the left of
		firsthigh), greater than or equal to the pivot (between firsthigh and i), and
		unexplored (to the right of i), as implemented below:
	*/
	int i;
	int p;									//this is the pivot element index
	int firstHigh;							//divider position for pivot element
	p=_upperIndex;
	firstHigh=_lowerIndex;
	for(i=_lowerIndex;i<_upperIndex;i++)
	{
		if(arr[i]<arr[p])
		{
			swap(&arr[i],&arr[firstHigh]);
			firstHigh++;
		}
	}
	swap(&arr[p],&arr[firstHigh]);
	
	return(firstHigh);
}

void quick_sort(int arr[],int _lowerIndex,int _upperIndex)
{
	/*
		the main sort method to be called by you in your main() block
		
		the call should be as quick_sort(array_name,0,array_size-1); 
	*/
	int p;									//the index which stores the value from partition func
	
	if((_upperIndex-_lowerIndex)>0)
	{
		p=partition(arr,_lowerIndex,_upperIndex);
		quick_sort(arr,_lowerIndex,p-1);
		quick_sort(arr,p+1,_upperIndex);
	}
}