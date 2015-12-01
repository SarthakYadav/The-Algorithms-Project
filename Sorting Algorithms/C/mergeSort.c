/*
	Program : Implementation of Merge Sort Algorithm in C
	Author : Sarthak Yadav
	
	Principles: 
		- Merge Sort is a divide-and-conquer sorting algorithm with a complexity of O(n log n) in all cases
		- For more details about Merge Sort visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/sorting/
				 https://www.khanacademy.org/computing/computer-science/algorithms/merge-sort/a/divide-and-conquer-algorithms
		
	Instructions:
		- This is just the sole mergeSort.c file. Compile it using command line with the provided program.c file
		  see program.c file for more details
*/


void merge(int arr[],int temp[],int left,int mid,int right)
{
	/*
		this is the merge function and as the name suggests, it merges the two subarrays
	*/
	int i,left_end,size,temp_pos;
	left_end=mid-1;
	temp_pos=left;
	size=right-left+1;
	while((left<=left_end)&&(mid<=right))
	{
		if(arr[left]<=arr[mid])
		{
			temp[temp_pos]=arr[left];
			temp_pos=temp_pos+1;
			left=left+1;
		}
		else
		{
			temp[temp_pos]=arr[mid];
			temp_pos=temp_pos+1;
			mid=mid+1;
		}
	}
	while(left<=left_end)
	{
		temp[temp_pos]=arr[left];
		left=left+1;
		temp_pos=temp_pos+1;
	}
	while(mid<=right)
	{
		temp[temp_pos]=arr[mid];
		mid=mid+1;
		temp_pos=temp_pos+1;
	}
	
	for(i=0;i<=size;++i)
	{
		arr[right]=temp[right];
		right=right-1;
	}
}
void merge_sort(int arr[],int temp[],int left,int right)
{
	/*
		Recursive algorithms reduce large problems into smaller ones. A recursive approach
		to sorting involves partitioning the elements into two groups, sorting each of the
		smaller problems recursively, and then interleaving the two sorted lists to totally
		order the elements. This algorithm is called mergesort, recognizing the importance
		of the interleaving operation:
	*/
	int mid;
	if(right>left)
	{
		mid=(left+right)/2;
		merge_sort(arr,temp,left,mid);
		merge_sort(arr,temp,mid+1,right);
		merge(arr,temp,left,mid+1,right);
	}
}