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
	fstream file("stduent.dat",ios::in|ios::out|ios::app|ios::binary);
	student s;
	int troll;
	// receive roll that you want to update
	cout<<"Enter Roll No (Update ) : ";
	cin>>troll;
	//relocate reading head
	//file.seekg(0);
	long n = file.tellg();
	n = -1*n;
	file.seekg(n,ios::end);
	
	while(file.read((char*)&s,sizeof(student)))
	 {
	 	if(troll==s.roll){
	 		cout<<"Enter New Name :";
	 		cin>>s.name;
	 		cout<<"Enter New address :";
	 		cin>>s.address;
	 		file.seekp(-1*sizeof(student),ios::cur);
	 		file.write((char*)&s,sizeof(student));	
		}
	 }
	file.close();
	cout<<"\n Record modified successfully";
	return 0;
}
