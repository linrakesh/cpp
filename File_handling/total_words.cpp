// program to find out total no of words in a text file
#include<fstream>
#include<iostream>
using namespace std;
int main(){
	ifstream fin;
	fin.open("demo.txt");
	char word[100];
	int count=0;
	while(fin){
		fin>>word;
		count++;
	}
	fin.close();
	cout<<"\nTotal words :"<<count;
	return 0;
}
