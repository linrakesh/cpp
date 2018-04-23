#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream object;
	char ch;
	object.open("sameer.txt");  // member function of ofstream class
	while(!object.eof())
		{
		  object.get(ch);
		  cout<<ch;
		}
	object.close();  //member function of ofstream class
	return 0;
	
}
