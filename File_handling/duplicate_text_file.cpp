// program to create duplicate of sameer.txt file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream object;
	ofstream object1;
	char ch;
	object.open("sameer.txt");  // member function of ofstream class
	object1.open("PRN");
	while(!object.eof())
		{
		  object.get(ch);
		  object1<<ch;
		}
	object.close();  //member function of ofstream class
	object1.close();
	
	return 0;
	
}
