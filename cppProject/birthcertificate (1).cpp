/*----- Birth certificate Database -------------
        made by               : 1. Vipul Maheshwari
                                2. Miraj Sen gupta
                                
        Session               : 2012-13
        School Name           : DAV CPS 
*/
#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
                              
class certificate {

private :
    int 		application_no;
	char		DOB[15];
	char        name[30];
	char        gender[6];
	char		fname[30];
	char		mname[30];
    char		foccupation[30];
	char		moccupation[30];            // change from single char to 30
	int		    yearly_income;
	char		hospital_name[60];          //changes from int to char[60] 
	char		DOA[15];
	char		status;
	int         copies;
	char        month[15];
	int         certificate_no;
	char        city[20];
	char        address[100];
	
public	:
void main_menu();    //function to display main menu

void search_menu();  // function to display search menu 

void certificate_menu( );  // function to  display certificate menu

void read_data( );	  // function to read all the data members from the 
                           //keyboard
void cstatus();      // function to check status
   
void disp_data();	  // function to display data members on the screen 

void  add_record ();  // function to add a record in a data file

void modify_record( );  //	Function to modify a record in a data file

void del_record(); // Function to delete a record in a data file	

void search_application_no( ); // function to read application no. and search the  Information in the given database file, if it is 
				          // available then display student information otherwise display “ Application does not exist”

void search_name( );   //function to read student name and search the Information in the given database file, if it is 
                      	  //	  available then display student information otherwise display “ Name does not exist”

void search_month(); // function to read student application no. and search the Information in the given database file, if it is 
				          // available then display student information otherwise display “ Application does not exist”
void single_applicant();
void certificate_single();  // function to show single certificate
    
void certificate_month();     // function to show certificates of a single month 
    
void certificate_all();   // fucntion to show all certificate 
    
void certificate_issued(); // function to show issued cecrtificates
};


/* function to show main menu ------------*/
void  certificate ::main_menu()
{
 int choice;
     do
       {
         system("cls");
         cout<<"\n\n\n\t\t BIRTH  CERTIFICATE MENU\n\n";
         cout<<"\n\n\t\t1. New Application ";
         cout<<"\n\n\t\t2. Modify student";
         cout<<"\n\n\t\t3. Search Menu";
         cout<<"\n\n\t\t4. Certificate Menu ";
         cout<<"\n\n\t\t5. Exit ";
         cout<<"\n\n\t\t   Enter your choice (1..5) : ";   
         cin>>choice;
         switch(choice)
         {
            case 1:    add_record();// function to call add record
                       break;
            case 2:    // function to call modify record
                       modify_record();
                       break;
            case 3:    search_menu();
                       break;
            case 4:    certificate_menu();
                       break;
            case 5:    break;
            default :  
                       cout<<"\n Wrong Choice.... Try agian";
         }  // end of switch
      }while(choice!=5);
      
return;
}

/*----------- function to create certificate menu -----------*/

void  certificate ::certificate_menu()
{
 int choice;
     do
       {
         system("cls");
         cout<<"\n\n\n\t\t Certificate M e n u\n\n";
         cout<<"\n\n\t\t1. Single Application";
         cout<<"\n\n\t\t2. Month";
         cout<<"\n\n\t\t3. All Applications";
         cout<<"\n\n\t\t4. Issued Certificates";
         cout<<"\n\n\t\t5. Exit";
         cout<<"\n\n\t\t   Enter your choice (1..5) : ";   
         cin>>choice;
         switch(choice)
         {
            case 1:    // function to call single application 
                       certificate_single();                       
                       break;
            case 2:    // function to display applications in a month 
                       certificate_month();
                       break;
            case 3:    // function to display All Applications
                                   certificate_all();
                       break;
            case 4:    // function to display issued cecrtificates 
                       break;
            case 5:    break;           
            default :  
                       cout<<"\n Wrong Choice.... Try agian";
         }  // end of switch
      }while(choice!=5);
      
return;
}

/*------------function to create search menu---------------*/

void certificate ::search_menu()
{
 int choice;
     do
       {
         system("cls");
         cout<<"\n\n\n\t\t S e a r c h   M e n u \n\n";
         cout<<"\n\n\t\t1. Application no.";
         cout<<"\n\n\t\t2. Month";
         cout<<"\n\n\t\t3. Name";
         cout<<"\n\n\t\t4. Exit ";
         cout<<"\n\n\n\n\t\t   Enter your choice (1..4) : ";   
         cin>>choice;
         switch(choice)
         {

            case 1:    // function to call search_application_no
                       search_application_no( );
                       getch();
                       break;

            case 2:    // function to call search_month
                       search_month();
                       getch();
                       break;
            case 3:    // function to call search_name
                       search_name();
                       getch();
                       break;

            case 4:    break;
            

            default :  
                       cout<<"\n Wrong Choice.... Try agian";
         }  // end of switch
      }while(choice!=4);
      
return;
}


/*------------function to read data members from keyboard------*/

void certificate:: read_data( )
 {
   system("cls");
   cout<<"\n Enter Application No. :";
   cin>>application_no;
   cout<<"\n Enter DOB : ";
   cin>>DOB;
   cout<<" \n Enter Name : ";
   cin>>name;
   cout<<" \n Enter Gender : ";
   cin>>gender;
   cout<<"\n Enter Father's Name : ";
   cin>>fname;
   cout<<"\n Enter Mother's Name : ";
   cin>>mname;
   cout<<"\n Enter Father's Occupation :";
   cin>>foccupation;
   cout<<"\n Enter Mother's occupation : ";
   cin>>moccupation;
   cout<<"\n Enter Yearly Income : ";
   cin>>yearly_income;
   cout<<"\n Enter Hospital Name   : ";
   cin>>hospital_name;
   cout<<" Address : ";
   cin>>address;
   cout<<"\n Enter Date Of Application : ";
   cin>>DOA;
   cout<<"\n Enter No. Of Copies Requiered : ";
   cin>>copies;
   cout<<"\n Enter Month : ";
   cin>> month;
   cout<<"\n Enter Place of Birth : ";
   cin>>city;
   return;
 }

/*---------function to display data members --------------*/

void  certificate::disp_data()
{
 
 cout<<"\n Application No:     : "<<application_no;
 cout<<"\n Date Of Birth       : "<<DOB;
 cout<<"\n Name of Child       : "<<name;
 cout<<"\n Gender of Child     : "<<gender; 
 cout<<"\n Father's Name       : "<<fname;
 cout<<"\n Mother's Name       : "<mname;
 cout<<"\n Father's occupation : "<<foccupation;
 cout<<"\n Mother's occupation : "<<moccupation;
 cout<<"\n Yearly Income       : "<<yearly_income;
 cout<<"\n Hospital Name       : "<<hospital_name;
 cout<<"\n Address             ; "<<address;
 cout<<"\n Date Of Application : "<<DOA;
 cout<<"\n Status              : "<<status;
 cout<<"\n Copies              : "<<copies;
 
 
      
 return ;
}

/*-------------function to add record in data  file ------*/
void  certificate::add_record ()
{
   ofstream fout;
   fout.open("certificate.dat",ios::app);
   read_data();
   fout.write((char*)this, sizeof(certificate));
   fout.close();
}



/*----------function to call search month wise -------------------------------*/
void certificate::search_month()
{
  ifstream fin;
  fin.open("report.dat");
  char tmonth[30];
  int flag;
   
  system("cls");
  cout<<"\n Enter Month to search :";
  cin>>tmonth;
    system("cls");
  cout<<"\n Month :"<<tmonth<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"Application No.\tDOB\tName\tGender\tFname\tMname\tfoccupation\tmoccupation\tYearly Income\tHospital Name\tAddress\tDOA\tStatus\n";
  cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;

  while(fin.read((char*)this,sizeof(certificate)))
    {
        if(strcmpi(tmonth,month)==0)                                    
           {

             cout<<application_no<<"\t"<<DOB<<"\t"<<name<<"\t"<<gender<<"\t"<<"\t"<<fname<<"\t"<<mname<<"\t"<<foccupation<<"\t"<<moccupation<<"\t"<<yearly_income<<"\t"<<hospital_name<<"\t"<<address<<"\t"<<DOA<<"\t"<<status<<endl;
             flag=1;             
            }   
    }      
  cout<<"-------------------------------------------------------------------------------"<<endl;
   
  fin.close();     
  if(flag==0)
      cout<<"\n\n information Not available for Month :"<<tmonth;
             
  return;


}

/*------------function to search record according to Application No------------*/

void certificate :: search_application_no( )
{
  ifstream fin;
  fin.open("certificate.dat");
  
  int tapp;
  int flag=0;
  
  system("cls");
  cout<<"\n Enter Admission Number to search : ";
  cin>>tapp;
  
  while(fin.read((char*)this,sizeof(certificate)))
    {
        if(tapp == application_no)                                     
           {
              system("cls");
              cout<<"\n Applicant Information ";
              cout<<"\n--------------------------------------------------------"<<endl;
              disp_data();
              flag = 1;    
            }   


    }       
  fin.close();     
  
  if(flag==0)
     cout<<"\n\n Application No : "<<tapp <<" does not exist.... Try again";
  
  return;

}

/*--------------function to search Applicatant record name wise ------*/

void certificate::search_name( )
{
  ifstream fin;
  fin.open("certificate.dat");
  char tname[30];
  int flag=0;
  
  system("cls");
  cout<<"\n Enter Name to search :";
  cin>>tname;
  
  while(fin.read((char*)this,sizeof(certificate)))
    {
        if(strcmpi(tname,name)==0)                                     
           {
              system("cls");
              cout<<"\n Applicant Information ";
              cout<<"\n--------------------------------------------------------"<<endl;
              disp_data();
              flag=1;
            }   
    }       
  fin.close();    
  if(flag==0)
    cout<<"\n No such name : "<<strupr(tname)<<" exist in our record... Try again";
   
  return;
}


/*--------function to display single Application's Details---------*/

void certificate::single_applicant()
{
  system("cls");

  cout<<"\n\t\t GOVERNMENT OF DELHI";
  cout<<"\n\t\t BIRTH CERTIFICATE";
  cout<<"\n-----------------------------------------------------------------------------------------------------------------";    
  cout<<"\n (Issued under Section 12/17 of the registration of Birth & Death) Act, 1969.\n";
  cout<<"\n This is to certify that the following information has been taken from the original record of Birth which is the"; 
  cout<<"register for(Local Area/ Local Body) NAGAR NIGAM DELHI of state DELHI, INDIA. \n"; 
  cout<<"\n Application No. :"<<application_no;
  cout<<"\n Name            :"<<name;
  cout<<"\n Date Of Birth   :"<<DOB;
  cout<<"\n Gender          :"<<gender;
  cout<<"\n Father's Name   :"<<fname;
  cout<<"\n Mother's Name   :"<<mname;
  cout<<"\n Hospital Name   :"<<hospital_name;
  cout<<"\n Certificate no  :"<<certificate_no;
  cout<<"\n Address         :"<<address;
            
  
return;
}


/*----------function to show single Birth Certificate-----*/

void certificate:: certificate_single()
{
  int tapp;
  int flag =0;
  ifstream fin;
  fin.open("certificate.dat",ios::binary);   //binary mode 

  system("cls");
  cout<<"\n Enter Application No : ";
  cin>>tapp;

  while(fin.read((char*)this, sizeof(certificate)))  // read record and check eof 
    {
       if(tapp ==application_no)
            single_applicant();  // function to display single report card
       else
            flag =1;                
     }
  fin.close();      
  if(flag==0)
     cout<<"\n\n Application No. :"<<tapp <<" does not exist.... Try again";      
  getch();
return;
}


/*-------------function to display month report card------------*/
void certificate:: certificate_month()
 {
     
  char tmonth[15];

  int row =6;
  int no =0;
  ifstream  fin;
  fin.open("certificate.dat");
  
  system("cls");
  
  cout<<"n\n Enter Month(Jan..April)  :";
  cin>>tmonth;
  
  system("cls");
  
  cout<<"\n\t\t GOVERNMENT OF DELHI";
  cout<<"\n\t\t Month"<<tmonth<<"\t\t Year : 2012-13"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"Application No.\tDOB\tName\tGender\tFname\tMname\tfoccupation\tmoccupation\tYearly Income\tHospital Name\tAddress\tDOA\tStatus\n";
  cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;

   while(fin.read((char*)this, sizeof(certificate)))
   {
      if(strcmpi(tmonth,month)==0)  
       {
         row= row+1;
         no++;
         if(row>=30)
          { 
            cout<<"\n\n  Press any key to continue ................";
            getch();
              cout<<"\n\t\t GOVERNMENT OF DELHI";
              cout<<"\n\t\t MONTH :"<<tmonth<<"\t\t YEAR : 2012-13"<<endl;
              cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
              cout<<"Application No.\tDOB\tName\tGender\tFname\tMname\tfoccupation\tmoccupation\tYearly Income\tHospital Name\tAddress\tDOA\tStatus\n";
              cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
            row =6;
           }          
         cout<<application_no<<"\t"<<DOB<<"\t"<<name<<"\t"<<gender<<"\t"<<"\t"<<fname<<"\t"<<mname<<"\t"<<foccupation<<"\t"<<moccupation<<"\t"<<yearly_income<<"\t"<<hospital_name<<"\t"<<address<<"\t"<<DOA<<"\t"<<status<<endl;
         }    
    }                
  fin.close();
  cout<<"-------------------------------------------------------------------------------"<<endl;
  cout<<"\n Total Applications : "<<no<<" Report prepared By  :"<<" Vipul Maheshwari & Miraj Sen Gupta ";
  getch();   
  return ;
  
 }

/*-------------function to prepare whole school report card-----------------------*/

void certificate:: certificate_all()
 {
     
  char tmonth;

  int row =6;
  int no =0;
  
  ifstream  fin;
  fin.open("certificate.dat");
  
  system("cls");
  
  cout<<"\n\t\t GOVERNMENT OF DELHI";
  cout<<"\n\t\t MONTH :"<<tmonth<<"\t\t YEAR : 2012-13"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"Application No.\tDOB\tName\tGender\tFname\tMname\tfoccupation\tmoccupation\tYearly Income\tHospital Name\tAddress\tDOA\tStatus\n";
  cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;

  while(fin.read((char*)this, sizeof(certificate)))
   {
         row= row+1;  
         no++;  
         if(row>=30)
          { 
            cout<<"\n\n  Press any key to continue ................";
            getch();
              cout<<"\n\t\t GOVERNMENT OF DELHI";
              cout<<"\n\t\t MONTH :"<<tmonth<<"\t\t YEAR : 2012-13"<<endl;
              cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
              cout<<"Application No.\tDOB\tName\tGender\tFname\tMname\tfoccupation\tmoccupation\tYearly Income\tHospital Name\tAddress\tDOA\tStatus\n";
              cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
            row =6;
           }          
         cout<<application_no<<"\t"<<DOB<<"\t"<<name<<"\t"<<gender<<"\t"<<"\t"<<fname<<"\t"<<mname<<"\t"<<foccupation<<"\t"<<moccupation<<"\t"<<yearly_income<<"\t"<<hospital_name<<"\t"<<address<<"\t"<<DOA<<"\t"<<status<<endl;
    }                
  fin.close();
  cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<"\n Total Student : "<<no<<" Report prepared By  :"<<" Vipul Maheshwari & Miraj Sen Gupta ";
  getch();   
  return ;
  
 }

/*------------function to delete single record from binary file report.dat------*/

void  certificate::del_record ()
{
 
 ifstream fin;
 ofstream fout;
 int tapp;
 int flag =0;
 system("cls");
 cout<<"\n Enter Application No. to delete :";
 cin>>tapp;
 
 fin.open("certificate.dat",ios::binary);
 fout.open("temp.dat");
 
 while(fin.read((char*)this, sizeof(certificate)))
  {
     if(tapp!=application_no)
         fout.write((char*)this,sizeof(certificate));
     else
         flag=1;                                      
        
  }                             
  fin.close();
  fout.close();
  
  remove("certificate.dat");  // function from stdio.h header file
  rename("temp.dat","certificate.dat"); // function from stdio.h header file
  
  if(flag==1)
     cout<<"\n\n Record Sucessfully removed ";
  else
     cout<<"\n Application No :"<<tapp <<" does not exist...Try again";
  getch();        
 return;
}     


/*---------function to modify Applicant information-----------------------*/

void certificate:: modify_record( )
{
 
 ifstream fin;
 ofstream fout;
 int tapp;
 int flag =0;
 system("cls");
 cout<<"\n Enter Application no to Modify :";
 cin>>tapp;
 
 fin.open("certificate.dat",ios::binary);
 fout.open("temp.dat");
 
 while(fin.read((char*)this, sizeof(certificate)))
  {
     if(tapp == application_no)
        {  read_data(); flag=1; }                      
     
     fout.write((char*)this,sizeof(certificate));
        
  }                             
  fin.close();
  fout.close();
  
  remove("certificate.dat");  // function from stdio.h header file
  rename("temp.dat","certificate.dat"); // function from stdio.h header file
  
  if(flag==1)
     cout<<"\n\n Record Sucessfully modified ";
  else
     cout<<"\n Application No :"<<tapp <<" does not exist...Try again";
  getch();        
 return;    
     
}


/*-----------main function to implement report class ------------*/

int main()
{
    certificate c;
    c.main_menu();
    
    return 0;
}
