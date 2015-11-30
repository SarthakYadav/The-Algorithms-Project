/*
	Program : Implementation of Binary Search Algorithm in C
	Author : Sarthak Yadav
	
	Principles: 
		- Binary Search is a searching algorithm with and a worst case complexity of O(log n)
		- For more details about Binary Search visit https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/

	Prerequites:
		- The Array must be pre-sorted. So kindly use one of the suitable sorting algorithms provided , in case 
		  you are going to enter a non sorted array
		   
	Instructions:
		- Just compile this file using the command line (gcc or clang compiler suites recommended)
*/

#include <stdio.h>
#define max_size 200							//to declare max array of size 200

int binary_search(int s[],int key,int low,int high)
{
	/*
		This is the binary_search search function.
		It accepts an integer array 's[]' , and returns a zero based index of the value 'key' in 
		the array.
		-the parameter 'low' refers to the starting index of the array , which is (usually) 0
		-the parameter 'high' refers to the upperBound index of the array , which is (usually) array_size-1
	*/
	
	int middle;						// index of the middle element (the proposed start of the algorithm
	
	if(low>high)					//for any point , if the value of low index becomes greater than high, 
		return -1;					//it means that we didnt find the any element which equals 'key' in the array
		
	middle=(low+high)/2;
	
	if(s[middle]==key)				//We start checking for the match of 'key' from this middle index 			
		return middle;
		
	else if(s[middle]>key)									//the value of s[middle] > key , which means that our required 'key' exists 
		return (binary_search(s,key,low,middle-1));			//in the part of array BEFORE the current middle index
	
	else													//only remaining condition is that s[middle]<key , hence 
		return (binary_search(s,key,middle+1,high));		//hence , 'key' exists in the sub array that starts AFTER the middle index
															
	
}

//here the execution begins
int main()
{
	//the program is just to illustrate the usage of the binary_search function
	
	
	int arr[max_size];
	int n,i,key,res_index;
	printf("----- Binary Search Demo -----");
	
	printf("\n Enter the size of the array : ");
	scanf("%d",&n);
	
	printf("\n Now enter the array (note:- must be pre-sorted )");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("\n Now enter the value you intend to find in the array : \n");
	scanf("%d",&key);
	
	res_index=binary_search(arr,key,0,n-1);
	
	if(res_index==-1)
		printf("\n No such element exists in the given array! \n\n");
		
	else
		printf("\n The element %d exists at index %d in the given array. \n\n",key,res_index);
	
	printf("\n------------ End ------------ \n\n");
	
	return 0;
}