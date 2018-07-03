/*  selection sort algorithm
	made by			:
*/
#include<iostream>
#include "io.cpp"
using namespace std;
void selection_sort(int x[] ,int n)
{
	int i,j,low,pos,temp;
	for(i=0;i<n;i++)
	 {
	 	low = x[i];
	 	pos = i;
	 	for(j=i+1;j<n;j++){
	 		if(x[j]>low)
	 		 {
	 		 	low = x[j];
	 		 	pos= j;
			  }
		}
		temp = x[i];
		x[i]= x[pos];
		x[pos]= temp;
		
	}
}


int main()
{
	int x[10];
	input(x,10);
	selection_sort(x,10);
	cout<<"\n sorted Array :";
	output(x,10);
	return 0; 
}

