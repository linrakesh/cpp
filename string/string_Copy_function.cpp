#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char string1[100]="This is me";
	char string2[100];
	
	//string2 = string1;
	
	strcpy(string2, string1);
	cout<<"Copied String :"<<string2;
	return 0;
}
