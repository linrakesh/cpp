// program to remove multiple spaces from the text file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream object;
	char ch;
	int count =0;
	object.open("sameer.txt");  // member function of ofstream class
	while(!object.eof())
		{
		  object.get(ch);
		  if(ch==' ')
		  	count++;
		  else
		    count=0;
		 if(count<=1)   
		 	cout<<ch;
		}
	object.close();  //member function of ofstream class
	return 0;
	
}
