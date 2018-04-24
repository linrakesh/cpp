/*  Bubble sort program using function and array
*/
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include "io.cpp"
using namespace std;
void bubble(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++)   // steps
	  {
	  	for(j=0;j<n-1-i;j++)
	  	  if(a[j]>a[j+1]) 
	  	    {
	  	    	temp = a[j];
	  	    	a[j]= a[j+1];
	  	    	a[j+1]=temp;
			  }
	  }
}

int main(){
	int a[10];
	//input phase
	input(a,10);
	//processing phase
	bubble(a,10);
	// output phase
	cout<<"\n Sorted array :";
	output(a,10);
	return 0;
}
