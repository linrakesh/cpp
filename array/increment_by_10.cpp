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
	
	for(i=0;i<10;i++)
		a[i]+=10;    //shortand operator a[i] = a[i]+10
		
	
	// output phase
	
	cout<<"\n Modified array :";
	for(i=0;i<10;i++)
		cout<<setw(10)<<a[i];

	return 0;
}
