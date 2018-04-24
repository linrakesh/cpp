/*  array declaration + initialization from keyboard
*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

void fun_add(int a[],int n){
	int i;
	for(i=0;i<n;i++)
		a[i] = a[i]+10;
}

int main(){
	int a[10];
	int i;
	
	//input phase
	for(i=0;i<10;i++)
	{
		cout<<"\n Enter a["<<i+1<<"] number ";
		cin>>a[i];
	}
	
	//processing phase
	
	fun_add(a,5);
	
	// output phase
	
	cout<<"\n Modified array :";
	for(i=0;i<10;i++)
		cout<<setw(10)<<a[i];

	return 0;
}
