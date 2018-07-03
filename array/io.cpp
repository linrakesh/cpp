#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

void output(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<setw(10)<<a[i];
}

void input(int x[],int n){
	for(int i=0;i<n;i++)
	  {
	  	cout<<"Enter x["<<i+1<<"] number : ";
	  	cin>>x[i];
	  }
}


