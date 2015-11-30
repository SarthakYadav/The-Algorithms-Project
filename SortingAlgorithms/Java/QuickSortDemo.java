/*
	Program : Implementation of Insertion Sort Algorithm in Java
	Author : Sarthak Yadav
	
	Principles: 
		- Quick Sort is a sorting algorithm that works on RANDOMISATION technique and has an average case complexity of O(n.log n) and worst case O(n^2)
		- For more details about Insertion Sort visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/sorting/
				 https://www.khanacademy.org/computing/computer-science/algorithms/quick-sort
				 
	Instructions:
		- Compile from Command line
*/

import java.util.Scanner;

public class QuickSortDemo {
	
	
	public static int partition(int[] arr,int _lowerIndex,int _upperIndex)
	{
		/*
			This is the crux of the QuickSort algorithm , i.e the partition methodology
		
			We can partition the array in one linear scan for a particular pivot element
			by maintaining three sections of the array: less than the pivot (to the left of
			firsthigh), greater than or equal to the pivot (between firsthigh and i), and
			unexplored (to the right of i), as implemented below:
		*/
		int p=_upperIndex;
		int firstHigh=_lowerIndex;
		for (int i = _lowerIndex; i <_upperIndex; i++) 
		{
			if(arr[i]<arr[p])
			{
				int temp=arr[i];
				arr[i]=arr[firstHigh];
				arr[firstHigh]=temp;
				
				firstHigh++;
			}
		}
		
		int temp1=arr[p];
		arr[p]=arr[firstHigh];
		arr[firstHigh]=temp1;
		
		return firstHigh;
	}
	
	public static void quick_sort(int[] arr,int _lowerIndex,int _upperIndex)
	{
		/*
			the main sort method to be called by you in your main() block
		
			the call should be as quick_sort(array_name,0,array_size-1); 
		*/
		
		if((_upperIndex-_lowerIndex)>0)
		{
			int p=partition(arr, _lowerIndex, _upperIndex);
			quick_sort(arr, _lowerIndex, p-1);
			quick_sort(arr, p+1, _upperIndex);
		}
	}
	
	public static void main(String[] args) 
	{
		// Main execution starts here
		
		
		Scanner scanner=new Scanner(System.in);
		System.out.println("---- Implementing Quick Sort Algorithm ----");
		
		System.out.println("Enter the num of elements in the array");
		
		
		int _num=scanner.nextInt();
		int[] arr=new int[_num];
		System.out.println("Now enter the elements in the array");
		for (int i = 0; i < arr.length; i++) 
		{
			arr[i]=scanner.nextInt();
		}
		scanner.close();
		System.out.println("Now we will print the sorted array \n");

		quick_sort(arr,0,arr.length-1);
		
		for (int q : arr) 
		{
			System.out.println(q);
		}
		System.out.println("\n\n------------ End ------------ \n\n");
		
	}
}
