#include<iostream>
using namespace std;
int main()
{
	char string[100];
	int i;
	for(i=0;i<10;i++)
		cin>>string[i];
	string[10]='\0';
	cout<<"\n Entered String :"<<string;
	return 0;
}
