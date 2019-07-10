#include<iostream>
#include "io.cpp"
using namespace std;

void concate(int x[],int n,int y[],int m, int z[]){
	int i;
	for(i=0;i<n;i++)
	   z[i]= x[i];
	
	for(i=0;i<m;i++)
	   z[n+i]= y[i];
}

int main(){
	int x[5],y[10],z[15];
	cout<<"\n Enter Element of first Array ";
	input(x,5);
	cout<<"\n Enter element of second array ";
	input(y,10);
	
	concate(x,5,y,10,z);
	
	cout<<"\nFirst Array :";
	output(x,5);
	cout<<"\n Second Array :";
	output(y,10);
	cout<<"\n Concatenated Array :";
	output(z,15);
	return 0;
}
