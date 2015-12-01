/*
	Program : Implementation of Binary Search Algorithm in Java
	Author : Sarthak Yadav
	
	Principles: 
		- Binary Search is a searching algorithm with a worst case complexity of O(log n)
		- For more details about Binary Search visit https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/

	Prerequites:
		- The Array must be pre-sorted. So kindly use one of the suitable sorting algorithms provided , in case 
		  you are going to enter a non sorted array
		   
	Instructions:
		- Just compile this file using the command line
*/


import java.util.Scanner;

public class BinarySearchDemo 
{

	public static int binary_search(int[] arr,int key,int low,int high)
	{
		if (low>high)
			return -1;
		
		int middle=(low+high)/2;
		
		if(arr[middle]==key)
			return middle;
		
		else if(arr[middle]>key)
			return binary_search(arr, key, low,middle-1);
		
		else
			return binary_search(arr, key, middle+1, high);
		
	}
	public static void main(String[] args) 
	{
		//Binary Search Demo Program
		Scanner scan=new Scanner(System.in);											//to take input from console
		
		System.out.println("----- Binary Search Demo -----");
		System.out.println("Enter the no of elements in the array : ");
		
		int n=scan.nextInt();															//to read the next Integer which is input
		int[] arr=new int[n];
		
		System.out.println("Now enter the array (please make sure it is sorted)");
		for (int i = 0; i < arr.length; i++) 
		{
			arr[i]=scan.nextInt();
		}
		
		System.out.println("Enter the key value you wish to search for : ");
		int key=scan.nextInt();
		int res=binary_search(arr, key, 0, arr.length-1);
		if(res!=-1)
			System.out.println("The given element exists at index "+ res);
		else
			System.out.println("No such index exists!\n\n");
			
			
		System.out.println("\n---- End ---- \n\n")
		scan.close();
		
	}

}
