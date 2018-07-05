#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string1[100]="vinay";
	char string2[100]="amit";
	int n;
	
	n = strcmp(string1,string1);
    if(n>0)	{
    	cout<<"String 1 is greater than string 2";
	}
	if(n<0){
		cout<<"String 2 is greater than string 1";
	}
	if(n==0){
		cout<<"\n Both are equal";
	}
	return 0;
}
