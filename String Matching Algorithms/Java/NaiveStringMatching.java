/*
	Program : Implementation of Naive String Matching Algorithm in C
	Author : Sarthak Yadav
	
	Principles: 
        - Naive String Matching is a comparison based sorting technique based on Binary Heap data structure.
		- For more details about Naive String Matching visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/introduction-to-string-searching-algorithms/

	Instructions:
		- Just compile and run
*/
import java.util.Scanner;

public class NaiveStringMatching 
{
	public static void NaiveStringMatcher(String text,String pattern)
	{
		/*
			Its idea is straightforward — for every position in the text, 
			consider it a starting position of the pattern and see if you get a match.
		*/
		int n=text.length();
		int m=pattern.length();
		boolean flag=false;
		for(int s=0;s<=(n-m);s++)
		{
			for(int i=0;i<m;i++)
			{
				flag=false;
				if(pattern.charAt(i)==text.charAt(s+i))
				{
					flag=true;
					//continue;
				}
				else
					flag=false;
			}
			if(flag==true)
				System.out.println("Pattern occurs at shift "+s);
		}
	
	}
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("**** Naive String Matching Algorithm ****");
		System.out.println("Enter the Text : ");
		String text=sc.nextLine();
		System.out.println("Enter the pattern to be searched in the given Text : ");
		String pattern=sc.nextLine();
		sc.close();
		NaiveStringMatcher(text,pattern);	
	}
}
