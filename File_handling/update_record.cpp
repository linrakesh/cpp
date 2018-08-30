// read student record

#include<fstream>
#include<iostream>
using namespace std;
struct student{
	int roll;
	char name[30];
	char address[100];
};

int main(){
	ifstream fin("student.dat");
	ofstream fout("temp.dat");
	student s;
	int troll;
	// receive roll that you want to update
	cin>>troll;
	while(fin.read((char*)&s,sizeof(student)))
	 {
	 	if(troll==s.roll){
	 		cout<<"Enter New Name :";
	 		cin>>s.name;
	 		cout<<"Enter New address :";
	 		cin>>s.address;
		 }
		fout.write((char*)&s,sizeof(student));
	 }
	fout.close();
	fin.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	cout<<"\n Record modified successfully";
	return 0;
}
