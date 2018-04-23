/*  array declaration + initialization from keyboard
*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;
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
	int sum =0;
	for(i=0;i<10;i++)
		sum = sum+a[i];
	
	// output phase
	cout<<"\n Entered array :";
	for(i=0;i<10;i++)
		cout<<setw(10)<<a[i];
	cout<<"\n Sum of all elements :"<<sum;
	return 0;
}
