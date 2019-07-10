#include<iostream>
#include "io.cpp"
using namespace std;

void merge(int x[],int n,int y[],int m, int z[]){
	int i,j,k;
	i=j=k=0;
	while(i<n && j<m){
		if(x[i]<y[j]){
			z[k]=x[i];
			i++;
			k++;
		}
		else{
			z[k]=y[j];
			j++;
			k++;
		}
	}
	while(i<n){
		z[k]=x[i];
		i++;
		k++;
	}
	while(j<m){
		z[k]=y[j];
			j++;
			k++;
	}
}

int main(){
	int x[5],y[10],z[15];
	cout<<"\n Enter Element of first Array ";
	input(x,5);
	cout<<"\n Enter element of second array ";
	input(y,10);
	
	merge(x,5,y,10,z);
	
	cout<<"\nFirst Array :";
	output(x,5);
	cout<<"\n Second Array :";
	output(y,10);
	cout<<"\n Concatenated Array :";
	output(z,15);
	return 0;
}
