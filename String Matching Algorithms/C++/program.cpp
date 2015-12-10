/*
	Program : program to run any of the given String Matching algorithms
	Author : Sarthak Yadav
	
	Details:
		- Null as such
	Instructions:
		- This is just the main execution program , and contains no algorithms in itself
		- To run an algo , just compile this program.c with the given algorithm's respective source file 
		  (eg naiveString.c for insertion_sort algorithm
		  as follows
		 - add function definition for the respective functions found in either of the algorithm_SourceFile in program.cpp
		  
		  g++ program.cpp algorithm_SourceFile.cpp -o choice_of_executable_name
		  
*/

#include <iostream>
#include <time.h>												//for performance analysis of the Sorting Algorithms
#include <string>
#include "naive.h"
using namespace std;

void NaiveStringMatcher(std::string text,std::string pattern);


int main()
{
	clock_t start_t,end_t;										//inbuilt clock for measuring performance
	double total_t;
	string txt="AABAACAADAABAAABAA";							//the text , You can input the pattern yourself to. Here I just illustrated
	string pat="AABA";											//the pattern
	
	cout<<"---- Implementing String Matching Algorithms ----\n";
	cout<<"Enter the text : "<<endl;
	getline(cin,txt);
	
	cout<<"Now enter the pattern : "<<endl;
	getline(cin,pat);
	start_t=clock();
	NaiveStringMatcher(txt,pat);										//use your desired String Matching algorithm's function here
	end_t=clock();
	total_t=(double)(end_t-start_t)/CLOCKS_PER_SEC;
	
	printf("\n\n Time taken for the execution is : %lf",total_t);
	printf("\n\n------------ End ------------ \n\n");
	return 0;
}
	