/*  array declaration + initialization method
*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

#define random(num)   rand()%num

using namespace std;
int main(){
	int a[10]={10,20,30,40,60};
	
	// output phase
	for(int i=0;i<10;i++)
		cout<<setw(10)<<a[i];
	return 0;
}
