#include<iostream>
using namespace std;
struct student{
	int roll;       //10
	char name[30];  // anupam gulati 
	int marks;      // 90
	char grade;     // A
};
int main(){
	student s;
	cout<<"\n Enter roll no :";
	cin>>s.roll;
	cout<<"\n Enter name :";
	fflush(stdin);
	cin.getline(s.name,30);
	cout<<"\n Enter marks (100) :";
	cin>>s.marks;
	cout<<"\n Enter grade :";
	cin>>s.grade;
	
	// output phase
	
	cout<<"\n Roll No :"<<s.roll;
	cout<<"\n Name    :"<<s.name;
	cout<<"\n Marks   :"<<s.marks;
	cout<<"\n Grade   :"<<s.grade;
	
	return 0;
}
