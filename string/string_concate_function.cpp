#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string1[7]="vinay";
	char string2[100]="amit";
	strcat(string1,string2);
	cout<<"\n Concatenated string :"<<string1;
	return 0;
}
