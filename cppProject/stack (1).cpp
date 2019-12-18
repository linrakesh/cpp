/*   program to create link list implemented stack 
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

/*---------------stack class declaration---------------------------*/

class stack
   {
      node *x;
     public:
            stack() { x=NULL;}
            void push(void);
            void pop(void);
            void display(void);
};

/*------------function to push element in stack ----------------*/
void stack::push()
{
     if(x==NULL)
        { 
           x= new (node);
           cout<<"\n Enter value :";
           cin>>x->data;
           x->ptr=NULL;
           }
     else
        {
           node *temp = new (node);
           cout<<"\n Enter value :";
           cin>>temp->data;
           temp->ptr = x;
           x= temp;
           }
      return;
}

/*------------function to pop stack element -----------------*/

void stack::pop()   
{
   if( x==NULL)
      
        cout<<"\n Stack empty ....";  
   else
      {
         node *temp = x;
         x = x->ptr;
         delete(temp);
      }
    return ;
}      
                       
/*------------function to display stack element -----------------*/
            
void stack::display()      
{
   if(x==NULL)
      cout<<"\n Stack is empty ";
   else
      {
         node *temp =x;
         while(temp!=NULL)
          {
             cout<<setw(8)<<temp->data;
             temp = temp->ptr;
             }
      }       
    return;
}


/*------------Main function to implement stack class ---------------*/

int main()
{
    stack s;
    int choice;
    do{
        cout<<"\n Stack menu ";
        cout<<"\n 1.    Push";
        cout<<"\n 2.    Pop";
        cout<<"\n 3.    Display";
        cout<<"\n 4.    Exit";
        cout<<"\n\n\n   Enter your choice(1..4) : ";

        cin>>choice;
        switch(choice)
         {
            case 1:   s.push();
                      break;
            case 2:   s.pop();
                      break;
            case 3:   s.display();
                      getch();
            case 4:   break;
            default:  
                      cout<<"\n Wrong choice.....Try again";
            }
            }while(choice!=4);
    return 0;
}
            
          
