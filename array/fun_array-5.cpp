/*  array declaration + initialization from keyboard
*/

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

void fun_add(int a[],int n){
	int i;
	for(i=0;i<n;i++)
		a[i] = a[i]+10;
}

int main(){
	int a[10];
	
	
	//input phase
	input(a,10);
	
	//processing phase
	
	fun_add(a,10);
	
	// output phase
	
	cout<<"\n Modified array :";
	output(a,10);
	return 0;
}
