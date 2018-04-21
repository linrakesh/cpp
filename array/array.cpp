#include<iostream>
#include<stdlib.h>

#define random(num)   rand()%100

using namespace std;
int main(){
	int a[10],i;
	//input phase 
	for(i=0;i<10;i++)
		a[i] = random(100);
	// output phase
	for(i=0;i<10;i++)
		cout<<setw(10)<<a[i];
	return 0;
}
