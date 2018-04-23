/*  array declaration + initialization from keyboard
*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int fun_add(int a){
	a = a+10;
	return(a);
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
	
	for(i=0;i<10;i++)
		a[i] = fun_add(a[i]);
	
	// output phase
	
	cout<<"\n Modified array :";
	for(i=0;i<10;i++)
		cout<<setw(10)<<a[i];

	return 0;
}
