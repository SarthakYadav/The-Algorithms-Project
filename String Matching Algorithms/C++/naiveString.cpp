/*
	Program : Implementation of Naive String Matching Algorithm in C
	Author : Sarthak Yadav
	
	Principles: 
        - Naive String Matching is a comparison based sorting technique based on Binary Heap data structure.
		- For more details about Naive String Matching visit
				 https://www.topcoder.com/community/data-science/data-science-tutorials/introduction-to-string-searching-algorithms/

	Instructions:
		- This is just the sole naiveString.cpp file. Compile it using command line with the provided program.c file in the same directory
		  see program.cpp file for more details
*/

#include <iostream>
#include <string>

void NaiveStringMatcher(std::string text,std::string pattern)
{
	int text_len=text.length();								//finds the effective length of the text char array 
	int pattern_len=pattern.length();						// finds that of pattern
	int s=0,i=0;
	
	for(s=0;s<=(text_len-pattern_len);s++)
	{
		for(i=0;i<pattern_len;i++)
		{
			if(text[s+i]!=pattern[i])
				break;
		}
		
		if(i==pattern_len)
			std::cout<<"\nPattern occurs at shift : "<<s<<std::endl;
	}
}