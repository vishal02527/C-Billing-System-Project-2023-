#include<iostream>
#include<string.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
char buyedProduct[18][20];
int productQuantity[18];
int count=0;
int total_bill = 0, grandTotal = 0, discount;
bool calculated = false;
//Products name
char productName[18][20]={"sugar", "milk", "maggie masala", "washing powder", "salt", "poha", "oil", "tooth paste","namkeen", "besan", "maida", "coffee", "tea", "butter", "biscuit", "turmeric powder", "hair oil", "ghee"};
//Product price
int sugar_p = 40, milk_p = 52, maggie_masala_p = 50, wahing_powder_p = 100, 
salt_p = 20, poha_p = 50, 
oil_p = 200, tooth_paste_p = 55, namkeen_p = 60, besan_p = 90, maida_p = 45, 
coffee_p = 200,
tea_p = 100, butter_p = 100, biscuit_p = 80, turnmeric_powder_p = 200, 
hair_oil_p = 60, ghee_p = 800;
class Store
{
 public:
 void buy_product();
 void calculate_bill();
 void show_bill();
};
//customer can buy a product if it is available in store.
void Store:: buy_product()
{
 char name[20];
 int quantity;

 char ch;
 cout<<"\nAvailable Products in our Store\n";
 for (int i = 0; i < 18; i++)
 {
 cout<<i+1<<". "<<productName[i]<<endl;
 }
 
 cout<<endl<<endl;
 
 again:
 cout<<"Enter product name: ";
 cin.getline(name,19);
 cin.sync();
 cout<<"Enter Quantity: ";
 cin>>quantity;
 cin.sync();
 for (int i = 0; i < 18; i++) //all available products list.
 {
 if (!strcmp(productName[i],name))
 {
 strcpy(buyedProduct[count],name);
 productQuantity[count]=quantity;

 count++;
 
 repeat:
 cout<<"\nIf you want to buy more product then press Y otherwise N: ";
 cin>>ch;
 cin.sync();
 if (ch=='Y'||ch=='y')
 {
 goto again;
 }
else
if (ch=='N'||ch=='n')
 {
 return;
 }
else
{
 cout<<"\nInvalid Press try again\n";
 goto repeat;
 } 
 } 
 }

 cout<<"\nProduct is not available try again\n";
 goto again;
}
//bill will be calculated in this function after purchasing products.
void Store:: calculate_bill()
{
 char choose;
 char temp[20];
 
//bill will be calculated according to product’s quantity.
 for (int i = 0; i < count; i++)
 {
 if (!strcmp(buyedProduct[i],"sugar"))
 {
 total_bill += sugar_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"milk"))
 {
 total_bill += milk_p * productQuantity[i];
 }

 else if (!strcmp(buyedProduct[i],"maggie masala"))
 {
 total_bill += maggie_masala_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"washing powder"))
 {
 total_bill += wahing_powder_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"salt"))
 {
 total_bill += salt_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"poha"))
 {
 total_bill += poha_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"oil"))
 {
 total_bill += oil_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"tooth paste"))
 {

 total_bill += tooth_paste_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"namkeen"))
 {
 total_bill += namkeen_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"besan"))
 {
 total_bill += besan_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"maida"))
 {
 total_bill += maida_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"coffee"))
 {
 total_bill += coffee_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"tea"))
 {
 total_bill += tea_p * productQuantity[i];
 }

 else if (!strcmp(buyedProduct[i],"butter"))
 {
 total_bill += butter_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"biscuit"))
 {
 total_bill += biscuit_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"turmeric powder"))
 {
 total_bill += turnmeric_powder_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"hair oil"))
 {
 total_bill += hair_oil_p * productQuantity[i];
 }
 else if (!strcmp(buyedProduct[i],"ghee"))
 {
 total_bill += ghee_p * productQuantity[i];
 }
 }
 

 //discount list for the specified prices.
 
 if (total_bill >= 10000)
 {
 discount = (20 * total_bill) / 100; //20% discount
 grandTotal = total_bill - discount;
 calculated = true;
 cout<<"\nBill is calculated successfully\n";
 return;
 }
 else if (total_bill >= 5000 && total_bill < 10000)
 {
 discount = (10 * total_bill) / 100; //10% discount
 grandTotal = total_bill - discount;
 calculated = true;
 cout<<"\nBill is calculated successfully\n";
 return;
 }
 else if (total_bill >= 2000 && total_bill < 5000)
 {
 discount = (5 * total_bill) / 100; //5% discount
 grandTotal = total_bill - discount;

 calculated = true;
 cout<<"\nBill is calculated successfully\n";
 return;
 }
 discount = 0;
 grandTotal = total_bill;
 calculated = true;
 cout<<"\nBill is calculated successfully\n";
}
// this function will generate the bill and then show the bill.
void Store:: show_bill()
{
 if (!calculated)
 {
 cout<<"\nBill is not calculated yet.\n";
 return;
 }
time_t curr_time; // giving current time on generation of bill.
time(&curr_time); 

char cus_name[20], add[30]; //customer details.
long mob_no;
cout<<"\n\nPlease enter name of the customer: ";
fflush(stdin);
gets(cus_name);
cout<<"Please enter address of the customer: ";
fflush(stdin);
gets(add);
cout<<"Please enter mobile number of the customer: ";
cin>>mob_no;
 cout<<"\n\n\t\t   **** VISHAL GROCERY MALL ****\n";
 cout<<"|---------------------------------------------------------------------|\n";
 cout<<"|Customer name: "<<cus_name<<"\t\t\t\t\t      |"<<endl;
 cout<<"|Address: "<<add<<"\t\t\t\t\t\t      |"<<endl; 
 cout<<"|Mobile: "<<mob_no<<"\t\t\t\t\t\t\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 cout<<"| Product\t\tQuantity\t\tPrice\t Total\t      |\n";
 cout<<"|---------------------------------------------------------------------|\n";
 for (int i = 0; i < count; i++)
 {

 if (!strcmp(buyedProduct[i],"sugar"))
 {
 cout<<"| sugar\t\t\t "<<productQuantity[i]<<" kg\t\t\t "<<sugar_p<<"\t "<<(sugar_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"milk"))
 {
 cout<<"| milk\t\t\t "<<productQuantity[i]<<" pac\t\t\t "<<milk_p<<"\t " <<(milk_p * productQuantity[i])<<"        \t|"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"maggie masala"))
 {
 cout<<"| maggie masala\t\t "<<productQuantity[i]<<" pac\t\t\t "<<maggie_masala_p <<"\t "<<(maggie_masala_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"washing powder"))
 {

 cout<<"| washing powder\t "<<productQuantity[i]<<" kg\t\t\t "<<wahing_powder_p<<"\t " <<(wahing_powder_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"salt"))
 {
 cout<<"| salt\t\t\t "<<productQuantity[i]<<" pac\t\t\t "<<salt_p<<"\t " <<(salt_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"poha"))
 {
 cout<<"| poha\t\t\t "<<productQuantity[i]<<" kg\t\t\t "<<poha_p<<"\t " <<(poha_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"oil"))
 {
 cout<<"| oil\t\t\t "<<productQuantity[i]<<" ltr\t\t\t "<<oil_p<<"\t " <<(oil_p * productQuantity[i])<<"\t      |"<<endl;

 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"tooth paste"))
 {
 cout<<"| tooth paste\t\t "<<productQuantity[i]<<" pac\t\t\t "<<tooth_paste_p<<"\t " <<(tooth_paste_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"namkeen"))
 {
 cout<<"| namkeen\t\t "<<productQuantity[i]<<" pac\t\t\t "<<namkeen_p <<"\t "<<(namkeen_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"besan"))
 {
 cout<<"| besan\t\t\t "<<productQuantity[i]<<" pac\t\t\t "<<besan_p<<"\t " <<(besan_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }

 else if (!strcmp(buyedProduct[i],"maida"))
 {
 cout<<"| maida\t\t\t "<<productQuantity[i]<<" kg\t\t\t "<<maida_p<<"\t " <<(maida_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"coffee"))
 {
 cout<<"| coffee\t\t "<<productQuantity[i]<<" pac\t\t\t "<<coffee_p<<"\t " <<(coffee_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"tea"))
 {
 cout<<"| tea\t\t\t "<<productQuantity[i]<<" pac\t\t\t "<<tea_p<<"\t " <<(tea_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"butter"))
 {

 cout<<"| butter\t\t "<<productQuantity[i]<<" pac\t\t\t "<<butter_p<<"\t " <<(butter_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"biscuit"))
 {
 cout<<"| biscuit\t\t "<<productQuantity[i]<<" pac\t\t\t "<<biscuit_p<<"\t " <<(biscuit_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"turmeric powder"))
 {
 cout<<"| turmeric powder\t "<<productQuantity[i]<<" kg\t\t\t "<<turnmeric_powder_p<<"\t "<<(turnmeric_powder_p * productQuantity[i])<<"\t      |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"hair oil"))
 {
 cout<<"| hair oil\t\t "<<productQuantity[i]<<" pac\t\t\t "<<hair_oil_p<<"\t " <<(hair_oil_p * productQuantity[i])<<"\t      |"<<endl;

 cout<<"|---------------------------------------------------------------------|\n";
 }
 else if (!strcmp(buyedProduct[i],"ghee"))
 {
 cout<<"| ghee\t\t\t "<<productQuantity[i]<<" kg\t\t\t "<<ghee_p<<"\t " <<(ghee_p * productQuantity[i])<<"         |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 }
 }
 cout<<"| \t\t\t\tTotal amount             "<<total_bill<<"          |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 cout<<"| \t\t\t\tDiscount                 "<<discount<<"            |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 cout<<"| \t\t\t\tPayable ammount          "<<grandTotal<<"          |"<<endl;
 cout<<"|---------------------------------------------------------------------|\n";
 
 cout<<"| *****Thank you. Please visit again.*****                            |\n";
 cout<<"|Terms and conditions:                                                |\n";
 cout<<"|1. No exchange on discounted and offer items.                        |\n";
 cout<<"|2. No refund.                                                        |\n";
 cout<<"|3. We recommend customers to check expiry date of products.          |\n";

 cout<<"|4. For any enquiry please contact to our customer care no: 5432      |\n";
 
 cout<<"|---------------------------------------------------------------------|\n";
 cout<<"|\t Bill generated on: "<<asctime(localtime(&curr_time))<<endl;
cout<<"|\t\t Please visit us again on:   \t\t\t      |\n"; 
cout<<"|\tVishal grocery mall, near by railway road, Aligarh\t      |\n";
 cout<<"|---------------------------------------------------------------------|\n";
}

int main()
{
 int choose;
 Store vishal;
 cout<<"\n\n\t\t ***WELCOME TO VISHAL GROCERY MALL***\n\n";
 
 cout<<"\t\t\t Here are our discount offers\n";
 cout<<"\t\t************************************************\n";
 cout<<"\t\t| No discount on the products less than 2000   |\n";
 cout<<"\t\t|----------------------------------------------|\n";
 cout<<"\t\t| 5% discount on the products more than 2000   |\n";
 cout<<"\t\t|----------------------------------------------|\n";

 cout<<"\t\t| 10% discount on the products more than 5000  |\n";
 cout<<"\t\t|----------------------------------------------|\n";
 cout<<"\t\t| 20% discount on the products more than 10000 |\n";
 cout<<"\t\t************************************************\n";
 do
 {
 cout<<"\nPress 1 to buy product\n";
 cout<<"Press 2 to calculate the bill\n";
 cout<<"Press 3 to show the bill\n";
 cout<<"Press 4 to Exit\n";
 
 again:
 cout<<"Please choose any option: ";
 cin>>choose;
 cin.sync();
 
 switch (choose)
 {
 case 1:
 vishal.buy_product();
 break;

 case 2:
 vishal.calculate_bill();
 break;
 
 case 3:
 vishal.show_bill();
 break;
 
 case 4:
 exit(0); 
 
 default:
 cout<<"Invalid option Please tyr again\n";
 
 goto again;
 break;
 }

 } while (choose!=4);
 
 return 0;
}
