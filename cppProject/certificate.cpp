/*  Program to register birth certificate 
    developed by                  : 
    name                          : Agnes richard
    Class                         : XII - A                     : 
    Sesssion                      : 2015-16
    roll No                       : 
*/

// Header files 
#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;

// class declaration 
void line()
{
    int i;
    for(i=0;i<80;i++)
       cout<<"-";
}        
class birth
{ 
   private:
      int rg_no;
      char DOB[21];
      char TOB[20];              
      char place_birth[60];
      char cname[30];
      char fname[31];
      char mname[33];
      char gender;
      char add[100];
      char ph_no[20];
      int status;    // 1 - applied    2 - under verification    3- issued 
      
  public: 
      void main_menu();
      void add_record();
      void delete_record();
      void modify_record();
      void modify_status();
      int record_count();
      
      void search_menu();
           void search_recordNo();
           void search_name();
           void search_address();
           void search_phone();
           
      void report_menu();      
           void report_complete();
           void report_gender();
           void report_applied();
           void report_issue_single();
           
            
      void input_data();
  
      };
  
  // membder funtion to receive data member from keyboard
  
  void birth:: input_data()
      {
           cout<<"\n Enter registration number:";                        
           cin>>rg_no;
           cout<<"\n Enter Date Of Birth:";
           //cin.getline(DOB,20);
           cin>>DOB;
           fflush(stdin);
           cout<<"\n Enter Time Of Birth:";
           //cin.getline(TOB,20);
           cin>>TOB;
           fflush(stdin);
           cout<<"\n Enter Gender of child ( M/F) :";
           cin>>gender;
           cout<<"\n Child's Name:";
           cin>>cname;
           cout<<"\n Enter Father's Name:";
           cin>>fname;
           cout<<"\n Enter Mother's Name:";
           cin>>mname;
           cout<<"\n Enter Permanent Address:";
           //cin.getline(add,100);
           cin>>add;
           fflush(stdin);
           cout<<"\n Enter phone number:";
           cin>>ph_no;
   }
// function to add new record in our Data file
void birth::add_record()
{
  ofstream fout;
  
  fout.open("agnes.dat",ios::app|ios::binary);
  
  input_data();
  fout.write((char *)this, sizeof(birth));
   
  fout.close();
  
 return ;
}
// funtion to dipslay main menu 

void birth::main_menu()
{
     int choice;
     do 
     {
         system("cls");
         cout<<"\n\n\t\t\t  MAIN MENU ";
         cout<<"\n\n\t\t\t 1. Apply for New Certificate ";
         cout<<"\n\n\t\t\t 2. Modify record ";
         cout<<"\n\n\t\t\t 3. Modify status (verification)";
         cout<<"\n\n\t\t\t 4. Search Record";
         cout<<"\n\n\t\t\t 5. Report ";
         cout<<"\n\n\t\t\t 6. Exit";
         cout<<"\n\n\n\t\t Enter your choice (1..6) :";
         cin>>choice;
         switch(choice)
         {
            case 1: 
                    add_record();
                    break;
            case 2: 
                    modify_record();
                    break;
            case 3: 
                    modify_status();
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
                    cout<<"\n Wrong choice ... Try again";
         }
         
     }while(choice!=6);
  return ;
 }


      void birth:: delete_record(){}
      void birth::modify_record(){}
      void birth::modify_status(){}


// function Name                   : search menu 
//   objective                     :  Produce search menu for easy navigation
           
void birth::search_menu()
{
     int choice;
     do 
     {
         system("cls");
         cout<<"\n\n\t\t\t  SEARCH MENU ";
         cout<<"\n\n\t\t\t 1. Record No ";
         cout<<"\n\n\t\t\t 2. Name ";
         cout<<"\n\n\t\t\t 3. Address";
         cout<<"\n\n\t\t\t 4. Phone No";
         cout<<"\n\n\t\t\t 5. Exit";
         cout<<"\n\n\n\t\t Enter your choice (1..5) :";
         cin>>choice;
         switch(choice)
         {
            case 1: 
                    search_recordNo();
                    break;
            case 2: 
                    search_name();
                    break;
            case 3: 
                    search_address();
                    break;
            case 4: 
                    search_phone();
                    break;
            case 5:
                    break;
            default:
                    cout<<"\n Wrong choice ... Try again";
         }
         
     }while(choice!=5);
     
     
     
     return ;
}


void birth::search_recordNo(){}
void birth::search_name(){}
void birth::search_address(){}
void birth::search_phone(){}

// function to print all the record from the table            
void birth::report_menu()
{
     int choice;
     do 
     {
         system("cls");
         cout<<"\n\n\t\t\t  REPORT MENU ";
         cout<<"\n\n\t\t\t 1. Complete Report ";
         cout<<"\n\n\t\t\t 2. Modify record ";
         cout<<"\n\n\t\t\t 3. Modify status (verification)";
         cout<<"\n\n\t\t\t 4. Search Record";
         cout<<"\n\n\t\t\t 5. Report ";
         cout<<"\n\n\t\t\t 6. Exit";
         cout<<"\n\n\n\t\t Enter your choice (1..6) :";
         cin>>choice;
         switch(choice)
         {
            case 1: 
                    report_complete();
                    break;
            case 2: 
                    //modify_record();
                    break;
            case 3: 
                    //modify_status();
                    break;
            case 4: 
                    //search_menu();
                    break;
            case 5:
                    //report_menu();
                    break;
            case 6:
                    break;
            default:
                    cout<<"\n Wrong choice ... Try again";
         }
         
     }while(choice!=6);
  return ;
 }      
// function to read data from text file and display them on the screen
void birth::report_complete()
{
 int record = record_count();  // function call to find out total available record
  int pages;
  if(record<=20)
     pages = 1;
  else
     pages = record/20 + 1 ; 
 int row= 6;    
 int cur_page=1;
 ifstream fin ;
 fin.open("agnes.dat",ios::binary);
 system("cls");
 cout<<"\n\t\t\t\t\t  COMPLETE REPORT \n";
 line();
 cout<<"\n Reg No \t\t Name \t\t Fname \t\t Mname \t\t DOB \t\t \n";
 line();
 cout<<"\n";
 while(fin.read((char *)this, sizeof(birth)))
   {
    cout<<rg_no<<"\t\t"<<cname<<"\t\t"<<fname<<"\t\t"<< mname<<"\t\t"<<DOB<<"\n";
    row++;
    if( row>=20)
      {
       cur_page++;
       cout<<"\n\n Press any key to continue.....";
       getch(); 
       row =6;
       line();
       cout<<"\n Page "<< cur_page << " of "<< pages;
       line();
      }          
    }
 
 getch();
 fin.close();
    
 return ;    
 }
     
     
         void birth::report_gender(){}
           void birth::report_applied(){}
           void birth::report_issue_single(){}
// function to count total no of records 
             
 int birth::record_count()
 {
     int n=0;
     ifstream fin;
     fin.open("agnes.dat",ios::binary);
     
     while(fin.read((char *)this, sizeof(birth)))
        n++;
     return n;   
     }
 int main()
 {
     birth   b;
     b.main_menu();
     return 0;
     
     }
