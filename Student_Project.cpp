/* 	Program to generate student information project Demo
	Made by 		: rakesh kumar
	Last update		: 22- Oct-2018
*/
#include<fstream>
#include<iostream>
#include<iomanip>
#include<ctime>
#include<conio.h>
#include<string.h>

using namespace std;

struct name{
	char first[10];
	char middle[10];
	char last[10];
};

struct address{
	int house_no;
	char society[30];
	char area[30];
	char post_office[30];
	char city[30];
	char state[30];
	char country[50];
};

void line(int n=120, char ch='_')
{
	for(int i=0;i<n;i++)
		cout<<ch;
}
// class definition of student info

class studentinfo{
	private:
		char 	admno[20];
		name 	student_name;
		name 	father_name;
		address student_address;
		char 	phone_no[15];
		char 	email[80];
		char 	website[100];
		char 	std[15];
		char 	section[20];
		char 	session[30];
		int 	status;		//1 - current  2. Pass out   3. Pass and promoted  4. Suspended 5. Terminated
		char 	updated_on[30];
		char 	updated_by[30];
	public:
		studentinfo();       // constructor function to initialise object
		void read_data();   // functiton to read required data members from keyboard
		void show_data();   // member function to show required data members
		void main_menu();
		void search_menu();
			void search_admno();
			void search_name();
			void search_phone();
			void search_email();
			void search_website();
			void search_class_section();
		void report_menu();
			void report_session();
			void report_class_section();
			void report_phone();
			void report_email();
			void report_website();
		void append_file(); 	// member functiont to add a new record in file
		void edit_record();		// member function to change existing record
		void delete_record();	// member function to delete a record from file
		void change_status();	// member function to change the student status
		int count_record();		// member function to count total number of records
};

/*	function name				: count_record()
	purpose						: Count total number of records available in student.dat file
	developed by				: rakesh kumar
*/

int studentinfo::count_record(){
	int count=0;
	ifstream fin;
	fin.open("student.dat",ios::in|ios::binary);
	while(fin.read((char*)this,sizeof(studentinfo)))
		count++;
	fin.close();
	return count;
}

/*		function name			: search_admno()
		purpose					: search admission no and display its details
		developed by			: rakesh kumar
*/

void studentinfo::search_admno()
{
	char tadmno[30];
	int found=0;
	ifstream fin;
	fin.open("student.dat",ios::in|ios::binary);
	system("cls");
	cout<<"\n\n\n\t\t\t\t  Search Student Details \n";
	cout<<"Admno :";
	fflush(stdin);
	cin.getline(tadmno,30);
	while(fin.read((char*)this,sizeof(studentinfo)))
	  {
	  	if (strcmp(admno,tadmno)==0)
	  		{
				show_data();
				getch();
	  			found =1;
	  		}
	  }
	fin.close();
	if(found==0)
		{
			cout<<"\n Admission No. "<<tadmno<<"does not exists in our database";
			getch();
		}
	return;
}

void studentinfo::search_name(){
	cout<<"\n function to search data using student name";
}

void studentinfo::search_email()
{
	cout<<"\n search function using email id";
}

void studentinfo::search_phone(){
	cout<<"\n search function using phone no";
}

void studentinfo::search_website(){
	cout<<"\n search function using website details";
}
void studentinfo::search_class_section()
{
	cout<<"\n search function using class and section";
}
/* 	function Name		: studentinfo()
	Purpose				: Constructor function to intialise data member of the class  
	developed my 		: rakesh kumar   
*/
studentinfo::studentinfo(){
	strcpy(admno,"");
	
	strcpy(student_name.first,"");
	strcpy(student_name.middle,"");
	strcpy(student_name.last,"");
	
	student_address.house_no=0;
	strcpy(student_address.society,"");
	strcpy(student_address.area,"");
	strcpy(student_address.post_office,"0");
	strcpy(student_address.city,"");
	strcpy(student_address.state,"");
	strcpy(student_address.country,"");
	
	strcpy(phone_no,"0");
	strcpy(email,"");
	strcpy(website,"");
	
	strcpy(std,"XII");
	strcpy(section,"A");
	
	strcpy(session,"2018-19");
	status =1 ;
	strcpy(updated_on,"2018-10-23");
	strcpy(updated_by,"rakesh kumar");
	
}


/*	function Name		: read_date()
	Purpose				: Member function to read data from keyboard 
	Developed by		: rakesh kumar	
*/
void studentinfo::read_data(){
	system("cls");
	cout<<"\n\t\t\t\t Add Studnet Data\n";
	cout<<"\n Admno			:";
	fflush(stdin);
	cin.getline(admno,30);
	cout<<"Enter Student Name \n";
	cout<<"First Name :";
	fflush(stdin);
	cin.getline(student_name.first,10);
	cout<<"Middle Name :";
		fflush(stdin);
	cin.getline(student_name.middle,10);
	cout<<"Last Name ";
		fflush(stdin);
	cin.getline(student_name.last,10);
	
	cout<<"\n Father Name 		:";
		fflush(stdin);
	cin.getline(father_name.first,10);
		fflush(stdin);
	cin.getline(father_name.middle,10);
		fflush(stdin);
	cin.getline(father_name.last,10);
	
	
	cout<<"\n Address       :";
	cout<<"House No :";
		fflush(stdin);
	cin>>student_address.house_no;
	cout<<"Society :";
		fflush(stdin);
	cin.getline(student_address.society,30);
	cout<<"Area :";
		fflush(stdin);
	cin.getline(student_address.area,30);
	cout<<"Post Office :";
		fflush(stdin);
	cin.getline(student_address.post_office,20);
	cout<<"city :";
		fflush(stdin);
	cin.getline(student_address.city,30);
	cout<<"State :";
		fflush(stdin);
	cin.getline(student_address.state,30);
	cout<<"Country :";
		fflush(stdin);
	cin.getline(student_address.country,30);
	cout<<"\n Class :";
		fflush(stdin);
	cin.getline(std,20);
	cout<<"Section :";
		fflush(stdin);
	cin.getline(section,20);
	cout<<"Phone No :";
		fflush(stdin);
	cin.getline(phone_no,15);
	cout<<"Email Id : ";
		fflush(stdin);
	cin.getline(email,60);
	cout<<"Website :";
		fflush(stdin);
	cin.getline(website,100);
	cout<<"\n Session (ie -2018-19 ) :";
		fflush(stdin);
	cin.getline(session,30);
}

/*	function name			: show_data()
	purpose					: member function to show data members
	developed by			: rakesh kumar
*/
void studentinfo::show_data(){
	cout<<"\n\n\n Student Information\n";
	line();
	cout<<"\n	Admno		:"<<admno;
	cout<<"\n	Name		:"<<student_name.first<<" "<<student_name.middle<<" "<<student_name.last;
	cout<<"\n	father Name	:"<<father_name.first<<" "<<father_name.middle<<" "<<father_name.last;
	cout<<"\n	Address		:"<<student_address.house_no<<","<<student_address.area<<" ,"<<student_address.society;
	cout<<"\n\t\t\t Post office:"<<student_address.post_office<<" City :"<<student_address.city<<","<<student_address.state;
	cout<<"\n	Phone No	:"<<phone_no;
	cout<<"\n	Email		:"<<email;
	cout<<"\n	Website		:"<<website;
	cout<<"\n	Class		:"<<std<<"-"<<section;
	cout<<"\n 	Session		"<<session;
	cout<<"\n";
	line();
}



/* 	function Name			: append file
	purpose					: Member function to add new record  
	developed by			: rakesh kumar
*/
void studentinfo::append_file(){
	ofstream fout;
	fout.open("student.dat",ios::app|ios::binary);
	read_data();
	fout.write((char *)this, sizeof(studentinfo));
	fout.close();
}

void studentinfo::delete_record(){
	cout<<"\n Program to be written here to delete a record";
}

void studentinfo::change_status(){
	cout<<"\n Funcion to change student status";
}

/*	function name		: report_phone()
	purpose				: Make a report to display all the available phone nos
	developed by		: rakesh kumar
*/

void studentinfo::report_phone(){
	ifstream fin;
	
	time_t tt; 
	struct tm * ti; 
	time (&tt); 
	
	ti = localtime(&tt); 
	
	int row=6;
	
	int record = count_record();
	int pages = record/6;     // pages means total number of pages required
	int page=1;				  // page means current page number
	if(record%6 !=0)
		pages++;
	
	fin.open("student.dat",ios::in|ios::binary);
	
	system("cls");
	cout<<"\n\t\t\t\t Phone Nos						Page :"<<page<<"/"<<pages<<endl;;
	line();
	cout<<"\nAdmno\t\t\t Name\t\t\t\t\tClass \t\t\t Phone No\n";
	line();
	while(fin.read((char*)this,sizeof(studentinfo)))
	  {
	  	cout<<"\n"<<admno<<"\t\t\t"<<student_name.first<<" "<<student_name.middle<<" "<<student_name.last<<"\t\t\t"<<std<<"-"<<section<<"\t\t\t"<<phone_no<<endl;
		row++;
		if(row>=12)	  	
		  {
		  	cout<<"\n\n Press any key to continue.....";
		  	getch();
		  	page++;
		  	row = 6;
		  	system("cls");
			cout<<"\n\t\t\t\t Phone Nos						Page :"<<page<<"/"<<pages<<endl;;
			line();
			cout<<"\nAdmno\t\t\t Name\t\t\t\t\tClass \t\t\t Phone No\n";
			line();
		  }
	  }
	fin.close();
	cout<<"\n";
	line();
	cout<<"\nReport Printed on:"<<asctime(ti);
	line();
	getch();
	return;
}

void studentinfo::report_session(){
	cout<<"\n function to show session wise report";
}

void studentinfo::report_class_section(){
	cout<<"\n function to display class wise report";
}

void studentinfo::report_email(){
	cout<<"\n function to display emails report";
}

void studentinfo::report_website(){
	cout<<"\n function to display website reports";
}


/*	function name			: report menu
	purpose					: Member function to display reporting menu 
	developed by			: rakesh kumar
*/

void studentinfo::report_menu(){
	int choice;
	do{
		system("cls");
		cout<<"\n\n\t\t R E P O R T    M E N U ";
		cout<<"\n\n\t\t1. Session";
		cout<<"\n\n\t\t2. Class";
		cout<<"\n\n\t\t3. Phone Nos";
		cout<<"\n\n\t\t4. Emails";
		cout<<"\n\n\t\t5. Websites";
		cout<<"\n\n\t\t6. Exit";
		cout<<"\n\n\n\n\t\t Enter your choice(1..6) :";
		cin>>choice;
		switch(choice)
		{
			case 1:	
					report_session();
					break;
			case 2:	
					report_class_section();
					break;
			case 3:
					report_phone();
					break;
			case 4:
					report_email();
					break;
			case 5:
					report_website();
					break;
			case 6:
					break;
			default:
					cout<<"\n\n Wrong Choice.....Try again";
					getch();
		}
	}while(choice!=6);
}

/*	function Name		: main_menu
	Purpose				: Member function to show main menu on the screen 
	developed by		: rakesh kumar
*/
void studentinfo::main_menu(){
	int choice;
	do{
		system("cls");
		cout<<"\n\n\t\t M A I N   M E N U ";
		cout<<"\n\n\t\t1. Add New Record";
		cout<<"\n\n\t\t2. Delete record";
		cout<<"\n\n\t\t3. Change Status";
		cout<<"\n\n\t\t4. Searc Records";
		cout<<"\n\n\t\t5. Reports";
		cout<<"\n\n\t\t6. Exit";
		cout<<"\n\n\n\n\t\t Enter your choice(1..6) :";
		cin>>choice;
		switch(choice)
		{
			case 1:	
					append_file();
					break;
			case 2:	
					delete_record();
					break;
			case 3:
					change_status();
					break;
			case 4:
					search_menu();
					break;
			case 5:
					report_menu();
					break;
			case 6:
					break;
			default:
					cout<<"\n\n Wrong Choice.....Try again";
					getch();
		}
	}while(choice!=6);
}


/*	function Name		: search_menu
	Purpose				: Member function to show search menu option  
	developed by		: rakesh kumar
*/
void studentinfo::search_menu(){
	int choice;
	do{
		system("cls");
		cout<<"\n\n\t\t\t SEARCH MENU";
		cout<<"\n\n\t\t1.	Admno";
		cout<<"\n\n\t\t2.	Phone No";
		cout<<"\n\n\t\t3.	Email";
		cout<<"\n\n\t\t4.	Website";
		cout<<"\n\n\t\t5.	Name";
		cout<<"\n\n\t\t6.	Class";
		cout<<"\n\n\t\t7.	Exit";
		cout<<"\n\n\n\t\t	Enter your choice(1..7) :";
		cin>>choice;
		switch(choice)
		{
			case 1:	
					search_admno();
					break;
			case 2:	
					search_phone();
					break;
			case 3:
					search_email();
					break;
			case 4:
					search_website();
					break;
			case 5:
					search_name();
					break;
			case 6:
					search_class_section();
					break;
			case 7:
					break;
			default:
					cout<<"\n\n Wrong Choice.....Try again";
					getch();
		}
	}while(choice!=7);
}

int main(){
	studentinfo s;
	s.main_menu();
	return 0;
}
