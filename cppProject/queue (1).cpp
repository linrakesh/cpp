/*   program to create link list implemented queue
     made by                : rakesh kumar
     
*/

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct node {
       int data;
       node *ptr;
       };
class queue
   {
      node *first,*rear;
     public:
            queue() { first=rear=NULL;}
            void insert_element(void);
            void delete_element(void);
            void display(void);
};

/*--------------function to add a new element-------------------*/
void queue::insert_element()
{
   node *temp = new(node);
   cout<<"\n Enter value : ";
   cin>>temp->data;
   temp->ptr =NULL;
   
   if(rear==NULL)
        first = rear = temp;
   else
     {
        rear->ptr = temp;
        rear = temp;
      }  
 return;
}

/*------------function to delete an element from queue-------*/
void queue::delete_element()        
{
     if(first==NULL)
         { cout<<"\n Queue empty";  getch(); }
     else
       {
          node *temp;
          temp = first;
          first = first->ptr;
          delete(temp);
          }
    return;
}

/*------------function to display queue element-----------------*/
void queue::display() 
{
     if(first==NULL)
         { cout<<"\n Queue is empty"; getch(); }
     else
       {
          node *temp=first;
          while(temp!=NULL)
            {
               cout<<setw(8)<<temp->data;
               temp = temp->ptr;
               }
       }        
  return;
}

/**********function to implement queue class---------------------*/

int main()
{
    queue q;
    int choice;
    do{
        cout<<"\n Queue menu ";
        cout<<"\n 1.    Insert Element";
        cout<<"\n 2.    Delete element";
        cout<<"\n 3.    Display";
        cout<<"\n 4.    Exit";
        cout<<"\n\n\n   Enter your choice(1..4) : ";

        cin>>choice;
        switch(choice)
         {
            case 1:   q.insert_element();
                      break;
            case 2:   q.delete_element();
                      break;
            case 3:   q.display();
                      getch();
            case 4:   break;
            default:  
                      cout<<"\n Wrong choice.....Try again";
            }
            }while(choice!=4);
    return 0;
}
            
          



        
