// read student record

#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
struct student{
	int roll;
	char name[30];
	char address[100];
};

int main(){
	ifstream fin("student.dat");
	ofstream fout("temp.dat");
	int troll;
	student s;
//	receive roll that you want to remove
	cout<<"Enter Roll no( Delete ) :";
	cin>>troll;
	while(fin.read((char*)&s,sizeof(student)))
	  {
	  	if(troll !=s.roll)
	  		fout.write((char*)&s,sizeof(student));
	  }
	fout.close();
	fin.close();
	// rename temp.dat in to student.dat file
	remove("student.dat");
	rename("temp.dat","student.dat");
	cout<<"\n Record Removed";
	return 0;
}
