			//BANK MANAGEMENT SYSTEM PROJECT IN C++

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>

//THIS IS LOGIN PART FOR USER.

class Log
{
   private:
	   char user_name[20], pass[7];
	   char ent_user_name[20], epass[7];

   public:
	   void Register()
	   {
	       cout<<"Register user name: ";
	       fflush(stdin);
	       gets(user_name);

	       cout<<"Create your password[6 characters long]: ";
	       cin>>pass;
	   }

	   int log_in()
	   {
	       cout<<"\nConfirm registered user name: ";
	       fflush(stdin);
	       gets(ent_user_name);
	       cout<<"Confirm your password[6 characters long]: ";
	       cin>>epass;

	       if(strcmp(user_name,ent_user_name)==0 && strcmp(pass,epass)==0)
		 goto x;
	       else
		 goto y;

	       x:
		{
		  cout<<"\nLogged in successfully..."<<endl;
		  cout<<"You can access the program now."<<endl;
		}
		getch();
		return 0;

	       y:
		  cout<<"\nMay be you entered wrong name or password."<<endl;
		  getch();

		  exit(0);
		  return 0;
	   }
};

//FOR USING THE SERVICES OF VIGO BANK.

class Bank
{
   private:
	   double balance, amt;
	   long acc_no;
	   char name[20], add[30], phone_no[10];
	   char acc_type;
   public:
	   void new_acc();
	   int show_acc(long);
	   int modify_acc(long);
	   int deposit(long);
	   int widthraw(long);
	   int balance_enq(long);
	   int close_acc(long);
	   void view_list();
	   void intro();
};

//TO OPEN A NEW ACCOUNT.

void Bank:: new_acc()
{
   cout<<endl<<"Enters the details of the new customers:"<<endl<<endl;

   cout<<"Enter His/Her Name here: ";
   fflush(stdin);
   gets(name);

   cout<<"Enter His/Her Address here: ";
   fflush(stdin);
   gets(add);

   cout<<"Enter His/Her Account number here: ";
   cin>>acc_no;

   retry1:
	 cout<<"Please enter account type of the Customer:[s/c] ";
	 cin>>acc_type;

	 if(acc_type=='s' || acc_type=='S')
	 {
	     cout<<"This is saving account."<<endl<<endl;
	 }
	 else
	 if(acc_type=='c' || acc_type=='C')
	 {
	     cout<<"This is current account."<<endl<<endl;
	 }
	 else
	 {
	     cout<<"Wrong account type entered."<<endl;
	     getch();
	     goto retry1;
	 }

   cout<<"Enter His/Her Phone number here: ";
   cin>>phone_no;
}

//TO SHOW INFORMATION OF CUSTOMERS.

int Bank:: show_acc(long a)
{
   char ifsc[]={"VIGO2527"};

   if(acc_no==a)
   {
      cout<<endl<<"Account information as per your record is: "<<endl<<endl;

      cout<<"Name of customer: "<<name<<endl;
      cout<<"Address of customer: "<<add<<endl;
      cout<<"Phone number of customer: "<<phone_no<<endl;
      cout<<"Account number of customer: "<<acc_no<<endl;
      cout<<"Account type of customer: "<<acc_type<<endl;
      cout<<"IFSC code: "<<ifsc<<endl;
      return 1;
   }
   return 0;
}

//MODIFY AN EXISTING ACCOUNT.

int Bank:: modify_acc(long a)
{
   if(a==acc_no)
   {
      cout<<endl<<"Please enter the new name of the customer: ";
      fflush(stdin);
      gets(name);

      cout<<"Please enter the new address of the customer: ";
      fflush(stdin);
      gets(add);

      cout<<"Please enter the new phone number of the customer: ";
      cin>>phone_no;

      retry2:
	     cout<<"Please enter account type of the customer:[s/c] ";
	     cin>>acc_type;

	     if(acc_type=='s' || acc_type=='S')
	     {
		 cout<<"This is saving account."<<endl<<endl;
	     }
	     else
	     if(acc_type=='c' || acc_type=='C')
	     {
		 cout<<"This is current account."<<endl<<endl;
	     }
	     else
	     {
		 cout<<"Wrong account type entered."<<endl;
		 getch();
		 goto retry2;
	     }

      cout<<"Account modified successfully.\n";

      cout<<endl<<"Account information after modification is: "<<endl<<endl;

      cout<<"Name of customer: "<<name<<endl;
      cout<<"Address of customer: "<<add<<endl;
      cout<<"Account number of customer: "<<acc_no<<endl;
      cout<<"Phone number of customer: "<<phone_no<<endl;
      cout<<"Account type of customer: "<<acc_type<<endl;
      return 1;
   }
   return 0;
}

//TOO DEPOSIT MONEY.

int Bank:: deposit(long a)
{
   balance=0;

   if(acc_no==a)
   {
      cout<<endl<<"Please enter the amount to deposit: ";
      cin>>amt;

      balance+=amt;

      cout<<"Current balance= "<<balance<<endl;
      cout<<"Amount successfully deposited.\n";
      return 1;
   }
   return 0;
}

//TO WIDTHRAW MONEY.

int Bank:: widthraw(long a)
{
   if(acc_no==a)
   {
      cout<<"\nPlease enter the amount to widthraw: ";
      cin>>amt;

      if(balance>=amt)
      {
	 balance-=amt;

	 cout<<"Money successfully deducted."<<endl;
	 cout<<"Current balance= "<<balance<<endl;
      }
      else
	 cout<<"Insufficient balance!\n";
      return 1;
   }
   return 0;
}

//FOR BALANCE ENQUIRY.

int Bank:: balance_enq(long a)
{
   if(acc_no==a)
   {
      cout<<"Current balance= "<<balance<<endl;
      return 1;
   }
   return 0;
}

//TO CLOSE AN EXISTING ACCOUNT.

int Bank:: close_acc(long a)
{
   char close;

   if(a == acc_no)
   {
      cout<<"\n\tName of customer: "<<name<<endl;

      retry3:
	    cout<<"\nDo you want to close an account of the customer?[y/n] ";
	    cin>>close;

	    if(close=='y' || close=='Y')
	    {
	       acc_no = 0;
	       cout<<"\nAccount has been closed!\n";
	    }
	    else
	    if(close=='n' || close=='N')
	    {
	       return 0;
	    }
	    else
	    {
	       cout<<"\nSorry invalid input!";
	       getch();
	       goto retry3;
	    }

      return 1;
   }//Termination of else statement.
   return 0;
}

//TO VIEW THE LIST OF THE CUSTOMERS.

void Bank:: view_list()
{
   if(acc_no != 0)
   cout<<acc_no<<"\t\t "<<name<<"\t  "<<acc_type<<"\t  "<<balance<<endl;
}

//INTRODUCTION PART

void Bank:: intro()
{
   cout<<"\This project has been created by VISHAL KUMAR(MSC-CS)."<<endl;
   cout<<"Session: 2022-2024"<<endl;
   cout<<"This took almost 1 month to be completed."<<endl<<endl;

   cout<<"This project is about the bank management system in which some important services are written like how new accounts create, modify, process of transaction(deposit and widthraw) and many other services related to bank."<<endl<<endl;
   cout<<"\nI would like to thanks my parents, my Supreme Lord and my teachers who supported me to complete such a wonderful project."<<endl;
}

int main()
{
   clrscr();

   //LOADING PART

   int gd=DETECT, gm, i;
   initgraph(&gd,&gm," ");
   for(i=0;i<=360;i++)
   {
      circle(300,200,80);
      pieslice(300,200,0,i,80);
      outtextxy(220,320,"Loading please wait...");
      delay(5);
   }
   closegraph();

   cout<<"\t\t\t**********************";
   cout<<"\n\t\t\tBank management system";
   cout<<"\n\t\t\t**********************";
   cout<<endl<<endl;

   cout<<"Welcome to our VIGO bank.....\n\n";

   Log L;
   L.Register();
   L.log_in();

   Bank b[6], B;
   int count, cust, found=0;
   long a;
   int choice;

   do
   {
      cout<<"\nMain menu:";

      cout<<"\n1. New account\n2. Show account\n3. Modify account\n4. Deposit\n5. Widthraw\n6. Balance enquiry\n7. Close account\n8. View list\n9. About project\n10. Exit\n\n";

      cout<<"Please enter your choice (1-10) ";
      cin>>choice;

      switch(choice)
      {
	 case 1:
	 cout<<endl<<"1. New account."<<endl;
	 cout<<"How many accounts do you want to create? ";
	 cin>>cust;

	 for(count=0;count<cust;count++)
	 {
	    b[count].new_acc();
	    cout<<"Account created successfully."<<endl;
	 }
	 break;

	 case 2:
	 cout<<endl<<"2. Show account."<<endl;
	 cout<<"\nEnter account number to see information: ";
	 cin>>a;

	 for(count=0;count<cust;count++)
	 {
	    found= b[count].show_acc(a);
	    if(found)
	    break;
	 }

	 if(!found)
	   cout<<"Record not found\n";
	 break;

	 case 3:
	 cout<<endl<<"3. Account modification."<<endl;
	 cout<<"\nEnter account number to be modified: ";
	 cin>>a;

	 for(count=0;count<cust;count++)
	 {
	    found= b[count].modify_acc(a);
	    if(found)
	    break;
	 }

	 if(!found)
	   cout<<"Record not found\n";
	 break;

	 case 4:
	 cout<<endl<<"4. Deposit."<<endl;
	 cout<<"\nEnter account number to deposit the money: ";
	 cin>>a;

	 for(count=0;count<cust;count++)
	 {
	    found= b[count].deposit(a);
	    if(found)
	    break;
	 }

	 if(!found)
	   cout<<"Record not found\n";
	 break;

	 case 5:
	 cout<<endl<<"5. Widthraw."<<endl;
	 cout<<"\nEnter account number to widthraw the money: ";
	 cin>>a;

	 for(count=0;count<cust;count++)
	 {
	    found= b[count].widthraw(a);
	    if(found)
	    break;
	 }

	 if(!found)
	   cout<<"Record not found\n";
	 break;

	 case 6:
	 cout<<endl<<"6. Balance enquiry."<<endl;
	 cout<<"\nEnter account number to check the balance: ";
	 cin>>a;

	 for(count=0;count<cust;count++)
	 {
	    found= b[count].balance_enq(a);
	    if(found)
	    break;
	 }

	 if(!found)
	   cout<<"Record not found\n";
	 break;

	 case 7:
	 cout<<endl<<"7. Close account."<<endl;
	 cout<<"\nEnter account number of the customer whose account you want to close: ";
	 cin>>a;

	 for(count=0;count<cust;count++)
	 {
	    b[count].close_acc(a);
	 }
	 break;

	 case 8:
	 cout<<endl<<"8. View list."<<endl;
	 cout<<"\n\n\t\tAccount holder list\n\n";
	 cout<<"================================================\n";
	 cout<<"account no\t name\t\t type\t balance\n\n";

	 for(count=0;count<cust;count++)
	 {
	    b[count].view_list();
	 }
	 cout<<"================================================\n";
	 cout<<"These were all records.\n";
	 break;

	 case 9:
	 cout<<endl<<"9. About project."<<endl;
	 B.intro();
	 break;

	 case 10:
	 exit(0);
	 break;

	 default:
	 cout<<"Invalid choice"<<endl;

      }//Termination of switch statement.

   } while(choice!=10); //Termination of do while loop.

   getch();
   return 0;
}
