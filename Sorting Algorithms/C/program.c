/*
	Program : program to run any of the given Sorting algorithms
	Author : Sarthak Yadav
	
	Details:
		- we use random number generation in this program , rather than entering all elements of the array, 
		  so if you wish to enter the elements of the array manually , make your own program
	
	Instructions:
		- This is just the main execution program , and contains no algorithms in itself
		- To run an algo , just compile this program.c with the given algorithm's respective source file 
		  (eg insertionSort.c for insertion_sort algorithm
		  as follows
		  
		  gcc program.c algorithm_SourceFile.c -o choice_of_executable_name
		  
*/

#include <stdio.h>
#include <time.h>												//for performance analysis of the Sorting Algorithms
#define max_size 20000

void randomizer(int arr[],int _arraySize)						//initializes the array with random number with upper limit max_size
{
	int i;
	for(i=0;i<_arraySize;i++)
		*(arr+i)=rand()%max_size;
}

void print_array(int arr[],int _arraySize)						//array print function
{
	int i;
	for(i=0;i<_arraySize;i++)
		printf("%d\t",*(arr+i));
		
	printf("\n");
}

int main()
{
	int n,i,arr[max_size];
	int temp[max_size];
	clock_t start_t,end_t;										//inbuilt clock for measuring performance
	double total_t;
	printf("---- Implementing Sorting Algorithms ----\n");
	printf("\n Enter the number of elements you wish the array to contain. \n The array of that desired size would be auto initialised\n");
	scanf("%d",&n);
	
	randomizer(arr,n);
	
	start_t=clock();
	//merge_sort(arr,temp,0,n-1);											//use your desired sorting algorithm's function here
	quick_sort(arr,0,n-1);
	end_t=clock();
	total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
	
	print_array(arr,n);
	
	printf("\n\n Time taken for the execution is : %lf",total_t);
	printf("\n\n------------ End ------------ \n\n");
	return 0;
}
	