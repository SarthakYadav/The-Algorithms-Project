/*
	Program : Implementation of Insertion Sort Algorithm in Java
	Author : Sarthak Yadav
	
	Principles: 
		- Insertion Sort is a sorting algorithm with a average case complexity of O(n^2)
		- For more details about Insertion Sort visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/sorting/
				 https://www.khanacademy.org/computing/computer-science/algorithms/insertion-sort/a/insertion-sort
		
	Instructions:
		- just compile from command line
*/

import java.util.Scanner;

public class InsertionSortDemo {

	public static void insertion_sort(int[] arr)
	{
		for(int j=1;j<=arr.length-1;j++)
		{
			int key=arr[j];
			int i=j-1;
			while(i>=0 && arr[i]>key)
			{
				arr[i+1]=arr[i];
				i-=1;
			}
			arr[i+1]=key;
		}
	}
	
	public static void main(String[] args) 
	{
		//implementation of insertion_sort in Java
		Scanner scanner=new Scanner(System.in);
		
		System.out.println("---- Implementing Sorting Algorithms ----\n");
		System.out.println("Enter the num of elements in the array");
		int _num=scanner.nextInt();
		int[] arr=new int[_num];
		System.out.println("Now enter the elements in the array");
		for (int i = 0; i < arr.length; i++) 
		{
		{
			arr[i]=scanner.nextInt();
		}
		
		System.out.println("Now we will print the sorted array ");
		insertion_sort(arr);
		
		for (int i : arr) 
			System.out.println(i);
		}
		
		scanner.close();
		System.out.println("\n\n------------ End ------------ \n\n");
	}

}
