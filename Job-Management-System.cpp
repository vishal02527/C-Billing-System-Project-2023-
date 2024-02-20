#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#include <string.h>
char user_name[20], email[20], phone_no[10], city[30], work_ex[20], lang[30], skills[100];
int age, job_id;
char apply;
bool having_profile = false, pass = false, deleted = false;
int applied_jobs = 0;
string job_name = " ";

string decision, call_letter;
bool status = false, selected = false, call_letter_active = false;

class Jobs
{
public:
   void new_profile();
   void my_profile();
   void update_profile();
   void highschool_jobs();
   void intermediate_jobs();
   void ug_jobs();
   void pg_jobs();
   void diploma_jobs();
   void job_apply();
   void qualifier_test();
   void applied_jobs_byYou();
   void faq();
   void delete_account();
};
void Jobs::new_profile()
{
   cout << "\nPlease enter your name: ";
   fflush(stdin);
   gets(user_name);
   cout << "Please enter your city: ";
   fflush(stdin);
   gets(city);
retry1:
   cout << "Please enter your age *[18-40] : ";
   cin >> age;
   if (age < 18)
   {
      cout << "Oh no! You are minor!\n";
      goto retry1;
   }
   else if (age > 40)
   {
      cout << "Oh no! You are above 40 years.\n";
      goto retry1;
   }
   cout << "Please enter your phone number: ";
   cin >> phone_no;
   cout << "Please enter your email id: ";
   cin >> email;
   cout << "Your work experience: ";
   fflush(stdin);
   gets(work_ex);
   cout << "Please enter your skills(like: C++, Java, Time management etc.): ";
   fflush(stdin);
   gets(skills);
   cout << "Languages known: ";
   fflush(stdin);
   gets(lang);
   having_profile = true;
   cout << "\nCongratulation! your profile is successfully registered now.\n\n";
   srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator
   job_id = rand() % 900000 + 100000;               // Generate a random number between 100,000 and 999,999
   cout << "Please note your job Id: " << job_id << endl
        << endl;
   cout << "Thankyou for being a part of our system.\n";
   cout << "Have enjoy our services...\n";
}
void Jobs::my_profile()
{
   cout << "\nYour name: " << user_name << endl;
   cout << "Your job Id: " << job_id << endl;
   cout << "Your city: " << city << endl;
   cout << "Your age: " << age << endl;
   cout << "Your phone number: " << phone_no << endl;
   cout << "Your email id: " << email << endl;
   cout << "Your work experience: " << work_ex << endl;
   cout << "Your skills: " << skills << endl;
   cout << "Languages known: " << lang << endl;
}
void Jobs::update_profile()
{
   cout << "\nUpdate your name: ";
   fflush(stdin);
   gets(user_name);
   cout << "Update your city: ";
   cin >> city;
retry2:
   cout << "Update your age *[18-40]: ";
   cin >> age;
   if (age < 18)
   {
      cout << "Oh no! You are minor!\n";
      goto retry2;
   }
   else if (age > 40)
   {
      cout << "Oh no! You are above 40 years.\n";
      goto retry2;
   }
   cout << "Update your phone number: ";
   cin >> phone_no;
   cout << "Update your email id: ";
   fflush(stdin);
   gets(email);
   cout << "Your work experience: ";
   fflush(stdin);
   gets(work_ex);
   cout << "Please enter your skills(like: C++, Java, Time management etc.): ";
   fflush(stdin);
   gets(skills);
   cout << "Languages known: ";
   fflush(stdin);
   gets(lang);

   cout << "\nYour profile after Updation...\n\n";
   cout << "Your name: " << user_name << endl;
   cout << "Your city: " << city << endl;
   cout << "Your age: " << age << endl;
   cout << "Your phone number: " << phone_no << endl;
   cout << "Your email id: " << email << endl;
   cout << "Your work experience: " << work_ex << endl;
   cout << "Your skills: " << skills << endl;
   cout << "Languages known: " << lang << endl;
}
void Jobs::highschool_jobs()
{
   int high;
   Jobs h;
   cout << "\nHere are your jobs after Highschool...\n";
   cout << "\n1. Data entry operator\n2. Library assistant\n3. Guard\n4. Gardener\n5. Delivery boy\n6. Driver\n7. Waiter\n8. Electrician\n9. Typist\n10. Junior translator\n";
   cout << "\nPlease select any Job of your best choice: ";
   cin >> high;
   switch (high)
   {
   case 1:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "1. Data entry operator\n";
      cout << "\nJob description: \nYou should have the knowledge of the basic of computers like MS office applications(Word, Excel etc.)\nWork place: Mathura\nSalary: 25000-35000\n\n";
   h1:
      cout << "Do you want to apply this job?[y/n]: ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Data entry operator\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n";
         goto h1;
      }
      break;

   case 2:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "2. Library assistant\n";
      cout << "\nJob description: \nYou should have the knowledge of the basic of computers like MS office applications(Word, Excel etc.) and little bit of english communication.\nWork place: Aligarh university\nSalary: 20000-30000\n\n";
   h2:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Library assistant\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h2;
      }
      break;

   case 3:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "3. Guard\n";
      cout << "\nJob description: \nDetermination for your work\nWork place: Delhi\nSalary: 20000-25000\n\n";
   h3:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Guard\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h3;
      }
      break;

   case 4:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "4. Gardener\n";
      cout << "\nJob description: \nKnowledge about seeds and plants.\nWork place: Patna\nSalary: 20000-22000\n\n";
   h4:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Gardener\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h4;
      }
      break;

   case 5:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "5. Delivery boy\n";
      cout << "\nJob description: \nYou should have basic knowledge of english.\nDriving license for two wheelers is mandatory.\nWork place: Faridabad\nSalary: 20000-25000\n\n";
   h5:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Delivery boy\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h5;
      }
      break;

   case 6:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "6. Driver\n";
      cout << "\nJob description: \nYou should have knowledge about the routs and some important places.\nDriving license for four wheelers is mandatory.\nWork place: Udaipur\nSalary: 25000-30000\n\n";
   h6:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Driver\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h6;
      }
      break;

   case 7:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "7. Waiter\n";
      cout << "\nJob description: \nBasic english communication.\nWork place: Ratnagiri\nSalary: 15000-20000\n\n";
   h7:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Waiter\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h7;
      }
      break;

   case 8:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "8. Electrician\n";
      cout << "\nJob description: \nwork experience of at least 1 year in this field.\nWork place: Chennai\nSalary: 30000-35000\n\n";
   h8:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Electrician\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h8;
      }
      break;

   case 9:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n\n";
      cout << "9. Typist\n";
      cout << "\nJob description: \nHindi and english communication.\n25 wpm typing speed in hindi and 35 wpm typing speed in english.\nWork place: Ranchi\nSalary: 25000-30000\n\n";
   h9:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Typist\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h9;
      }
      break;

   case 10:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "10. Junior translator\n";
      cout << "\nJob description: \nEfficiency in hindi and english communication.\nWork place: Haidrabad\nSalary: 30000-35000\n\n";
   h10:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         h.job_apply();
         if (pass == true)
            job_name += "\"Junior translator\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto h10;
      }
      break;

   default:
      cout << "May be you entered a wrong input!\n";
      break;
   }
}
void Jobs::intermediate_jobs()
{
   int inter;
   Jobs i;
   cout << "\nHere are your jobs after Intermediate...\n";
   cout << "\n1. Receptionist\n2. Online tutor\n3. Cashier\n4. Lab assistant\n5. Career counsellor\n6. Tele caller executive\n7. Office assistant\n8. Pizza maker\n9. Stenographer\n10. Accountant\n";
   cout << "\nPlease select any Job of your best choice: ";
   cin >> inter;
   switch (inter)
   {
   case 1:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "1. Receptionist\n";
      cout << "\nJob description: \nHotal management certificate.\nenglish communication.\nWork place: Mumbai\nSalary: 30000-35000\n\n";
   i1:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Receptionist\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i1;
      }
      break;

   case 2:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "2. Online tutor\n";
      cout << "\nJob description: \nGood in math and science field.\nAt least 75% marks in highschool and Intermediate.\nWork place: Home\nSalary: 20000-25000\n\n";
   i2:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Online tutor\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i2;
      }
      break;

   case 3:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "3. Cashier\n";
      cout << "\nJob description: \nBasic knowledge of the computers like MS office applications(Word, Excel etc.) and telly.\nGood in math and english.\nWork place: Aligarh\nSalary: 25000-30000\n\n";
   i3:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Cashier\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i3;
      }
      break;

   case 4:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "4. Lab assistant\n";
      cout << "\nJob description: \nAt least 75% marks in physics.\nWork place: Banaras\nSalary: 25000-30000\n\n";
   i4:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Lab assistant\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i4;
      }
      break;

   case 5:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "5. Career counsellor\n";
      cout << "\nJob description: \nGood efficiency in public speaking.\nBasic english communication.\nKnowledge about the academic terms is mandatory\nWork place: Rudki\nSalary: 25000-35000\n\n";
   i5:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Career counsellor\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i5;
      }
      break;

   case 6:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "6. Tele caller executive\n";
      cout << "\nJob description: \nHindi and english communication.\nWork place: Raipur\nSalary: 25000-30000\n\n";
   i6:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Tele caller executive\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i6;
      }
      break;

   case 7:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "7. Office assistant\n";
      cout << "\nJob description: \nBasic knowledge of computers like MS office applications(Word, Excel etc.)\nWork place: Agra\nSalary: 20000-22000\n\n";
   i7:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Office assistant\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i7;
      }
      break;

   case 8:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "8. Pizza maker\n";
      cout << "\nJob description: \nCertificate in pizza making.\nWork place: Palwal\nSalary: 20000-22000\n\n";
   i8:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Pizza maker\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i8;
      }
      break;

   case 9:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "9. Stenographer\n";
      cout << "\nJob description: \nHindi and english communication.\n25 wpm typing speed in hindi and 35 wpm typing speed in english.\nWork place: Jaipur\nSalary: 25000-30000\n\n";
   i9:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Stenographer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i9;
      }
      break;

   case 10:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "10. Accountant\n";
      cout << "\nJob description: \nBasic knowledge of computers like MS office applications(Word, Excel etc.)\nGood in mathematics.\nHindi and english communication.\nWork place: Trivanantpuram\nSalary: 30000-35000\n\n";
   i10:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         i.job_apply();
         if (pass == true)
            job_name += "\"Accountant\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto i10;
      }
      break;

   default:
      cout << "May be you entered a wrong input!\n";
      break;
   }
}
void Jobs::ug_jobs()
{
   int ug;
   Jobs g;
   cout << "\nHere are your jobs after Graduation...\n";
   cout << "\n1. Consultant psychiatrist\n2. Sales executive\n3. HR\n4. Forest officer\n5. Clerk\n6. Assistant manager\n7. Sub-inspector\n8. Web developer\n9. Trainer\n10. IOCL\n";
   cout << "\nPlease select any Job of your best choice: ";
   cin >> ug;
   switch (ug)
   {
   case 1:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "1. Consultant psychiatrist\n";
      cout << "\nJob description: \nBachelor degree in medical science.\nWork place: Delhi\nSalary: 30000-35000\n\n";
   u1:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Consultant psychiatrist\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u1;
      }
      break;

   case 2:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "2. Sales executive\n";
      cout << "\nJob description: \nB.com or any other degree in marketing.\nWork place: Kanpur\nSalary: 25000-35000\n\n";
   u2:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Sales executive\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u2;
      }
      break;

   case 3:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "3. HR\n";
      cout << "\nJob description: \nBasic english communication.\nNon-technical skills certificates(If any).\nWork place: Gorakhpur\nSalary: 30000-35000\n\n";
   u3:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"HR\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u3;
      }
      break;

   case 4:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "4. Forest officer\n";
      cout << "\nJob description: \nBachelor degree in forestry.\nBetter knowledge about the plants and animals.\nWork place: Kota\nSalary: 40000-50000\n\n";
   u4:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Forest officer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u4;
      }
      break;

   case 5:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "5. Clerk\n";
      cout << "\nJob description: \nB.com. degree\nWork place: Panipat\nSalary: 40000-50000\n\n";
   u5:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Clerk\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u5;
      }
      break;

   case 6:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "6. Assistant manager\n";
      cout << "\nJob description: \nAny bachelor degree\nWork place: Lucknow\nSalary: 40000-50000\n\n";
   u6:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Assistant manager\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u6;
      }
      break;

   case 7:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "7. Sub-inspector\n";
      cout << "\nJob description: \nMinimum height: 5.5\nChest width: 36inch\nMedical report is required.\nWork place: Hisar\nSalary: 40000-50000\n\n";
   u7:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Sub-inspector\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u7;
      }
      break;

   case 8:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "8. Web developer\n";
      cout << "\nJob description: \nBachelor degree in BCA or Bsc.(computer science) B.tech. or B.E. or Web development course certificate.\nWork place: Banglore\nSalary: 50000-60000\n\n";
   u8:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Web developer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u8;
      }
      break;

   case 9:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "9. Trainer\n";
      cout << "\nJob description: \nAny bachelor degree.\nWork place: Alwar\nSalary: 35000-40000\n\n";
   u9:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"Trainer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u9;
      }
      break;

   case 10:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "10. IOCL\n";
      cout << "\nJob description: \nAny bachelor degree\nWork place: Srinagar\nSalary: 35000-40000\n\n";
   u10:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         g.job_apply();
         if (pass == true)
            job_name += "\"IOCL\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto u10;
      }
      break;

   default:
      cout << "May be you entered a wrong input!\n";
      break;
   }
}
void Jobs::pg_jobs()
{
   int pg;
   Jobs p;
   cout << "\nHere are your jobs after Post-graduation...\n";
   cout << "\n1. Project scientist\n2. Technician\n3. Assistant professor\n4. Medical officer\n5. Software engineer\n6. Graphic designer\n7. Senior research fellow\n8. Finance manager\n9. IT officer\n10. Data scientist\n";
   cout << "\nPlease select any Job of your best choice: ";
   cin >> pg;
   switch (pg)
   {
   case 1:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "1. Project scientist\n";
      cout << "\nJob description: \nMaster degree with physics as one of the subject.\nWork place: Noida\nSalary: 45000-50000\n\n";
   p1:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Project scientist\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p1;
      }
      break;

   case 2:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "2. Technician\n";
      cout << "\nJob description: \nMaster degree with physics as one of the subject.\nWork place: Pune\nSalary: 40000-50000\n\n";
   p2:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Technician\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p2;
      }
      break;

   case 3:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "3. Assistant professor\n";
      cout << "\nJob description: \nMaster degree with chemistry as one of the subject\nWork place: Gaziyabad\nSalary: 40000-50000\n\n";
   p3:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Assistant professor\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p3;
      }
      break;

   case 4:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "4. Medical officer\n";
      cout << "\nJob description: \nMaster degree with biology stream.\nWork place: Bhuvneshwar\nSalary: 45000-50000\n\n";
   p4:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Medical officer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p4;
      }
      break;

   case 5:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "5. Software engineer\n";
      cout << "\nJob description: \nMaster degree with computer science stream.(MCA or Msc(computer science) or Mtech.) or any other certificate in software engineering.\nWork place: Banglore\nSalary: 80000-90000\n\n";
   p5:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Software engineer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p5;
      }
      break;

   case 6:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "6. Graphic designer\n";
      cout << "\nJob description: \nSoftware engineering with UI/UX based graphics.\nWork place: Bhopal\nSalary: 70000-80000\n\n";
   p6:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Graphic designer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p6;
      }
      break;

   case 7:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "7. Senior research fellow\n";
      cout << "\nJob description: \nMaster degree or any certificate in Research management\nWork place: Calcutta(Kolkata)\nSalary: 50000-55000\n\n";
   p7:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"senior research fellow\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p7;
      }
      break;

   case 8:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "8. Finance manager\n";
      cout << "\nJob description: \nMcom. degree is required.\nWork place: Jalandhar\nSalary: 50000-60000\n\n";
   p8:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Finance manager\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p8;
      }
      break;

   case 9:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "9. IT officer\n";
      cout << "\nJob description: \nMaster degree with computer science stream.(MCA or Msc(computer science) or Mtech.) or any other certificate in software engineering or IT field.\nWork place: Goa\nSalary: 80000-90000\n\n";
   p9:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"IT officer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p9;
      }
      break;

   case 10:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "10. Data scientist\n";
      cout << "\nJob description: \nMaster degree or any certificate in Data science.\nWork place: Ludhiyana\nSalary: 70000-80000\n\n";
   p10:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         p.job_apply();
         if (pass == true)
            job_name += "\"Data scientist\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto p10;
      }
      break;

   default:
      cout << "May be you entered a wrong input!\n";
      break;
   }
}
void Jobs::diploma_jobs()
{
   int dip;
   Jobs d;
   cout << "\nHere are your jobs after Diploma...\n";
   cout << "\n1. Junior engineer\n2. Apprentice\n3. Fashion designer\n4. Shift supervisor\n5. Makeup artist\n6. Quality control engineer\n7. Video editor\n8. Store keeper\n9. Business analyst\n10. Event organizer\n";
   cout << "\nPlease select any Job of your best choice: ";
   cin >> dip;
   switch (dip)
   {
   case 1:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "1. Junior engineer\n";
      cout << "\nJob description: \nDiploma in engineering(civil, electric or mechanics).\nWork place: Guwahati\nSalary: 50000-55000\n\n";
   d1:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Junior engineer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d1;
      }
      break;

   case 2:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "2. Apprentice\n";
      cout << "\nJob description: \nAny diploma.\nWork place: Dhanwad\nSalary: 40000-45000\n\n";
   d2:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Apprentice\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d2;
      }
      break;

   case 3:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "3. Fashion designer\n";
      cout << "\nJob description: \nDiploma in fashion designing.\nWork place: Nagpur\nSalary: 50000-55000\n\n";
   d3:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Fashion designer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d3;
      }
      break;

   case 4:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "4. Shift supervisor\n";
      cout << "\nJob description: \nAny diploma.\nWork place: Raigarh\nSalary: 40000-45000\n\n";
   d4:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Shift supervisor\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d4;
      }
      break;

   case 5:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "5. Makeup artist\n";
      cout << "\nJob description: \nDiploma in makeup art.\nWork place: Shimla\nSalary: 50000-60000\n\n";
   d5:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Makeup artist\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d5;
      }
      break;

   case 6:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "6. Quality control engineer\n";
      cout << "\nJob description: \nDiploma in quality contol management.\nWork place: Ahemdabad\nSalary: 50000-60000\n\n";
   d6:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Quality control engineer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d6;
      }
      break;

   case 7:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "7. Video editor\n";
      cout << "\nJob description: \nDiploma in video and photo editing.\nWork place: Bhopal\nSalary: 45000-50000\n\n";
   d7:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Video editor\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d7;
      }
      break;

   case 8:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "8. Store keeper\n";
      cout << "\nJob description: \nAny diploma(Optional).\nWork place: Gaya\nSalary: 30000-32000\n\n";
   d8:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Store keeper\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d8;
      }
      break;

   case 9:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "9. Business analyst\n";
      cout << "\nJob description: \nDiploma in business analysis.\nWork place: Panji\nSalary: 45000-50000\n\n";
   d9:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Business analyst\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d9;
      }
      break;

   case 10:
      cout << "\nGreat choice " << user_name << "!, you selected a nice job.\n\n";
      cout << "10. Event organizer\n";
      cout << "\nJob description: \nDiploma in event organization.\nWork place: Chandigarh\nSalary: 50000-60000\n\n";
   d10:
      cout << "Do you want to apply this job?[y/n] ";
      cin >> apply;
      if (apply == 'y' || apply == 'Y')
      {
         d.job_apply();
         if (pass == true)
            job_name += "\"Event organizer\" ";
      }
      else if (apply == 'n' || apply == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto d10;
      }
      break;

   default:
      cout << "May be you entered a wrong input!\n";
      break;
   }
}
void Jobs::job_apply()
{
   Jobs j;
   char c;
   cout << "\nAccording to your job profile your details are: \n";
   j.my_profile();
after_update_apply:
   cout << "\nIf you want to proceed with these details then press y otherwise press e for editing your details before applying: ";
   cin >> c;
   if (c == 'y' || c == 'Y')
   {
      Jobs quiz;
      char q;
      cout << "\nThankyou! " << user_name << " for showing your interest for this job\n\n";
      cout << "Follow this step to apply the job:\n";
      cout << "\nYou have to pass the qualifier test(Quiz), In this test 10 questions will be asked with four options, you have to choose one correct option from a, b, c or d.";
      cout << "\nEach question contains 10 marks, You will be able to apply the job when you get at least 70 marks.\n";
      cout << "Note:- There is no timing and negative marking for the test.\n\n";
   retry5:
      cout << "Do you want to give qualifier test?[y/n]: ";
      cin >> q;
      if (q == 'y' || q == 'Y')
      {
         cout << "\n**** All the best " << user_name << "! you are just a step away to achieve your dream job. ****" << endl
              << endl;
         quiz.qualifier_test();
      }
      else if (q == 'n' || q == 'N')
      {
         return;
      }
      else
      {
         cout << "\nInvalid input\n\n";
         goto retry5;
      }
   }
   else if (c == 'e' || c == 'E')
   {
      j.update_profile();
      goto after_update_apply;
   }
   else
   {
      cout << "\nInvalid input\n\n";
      goto after_update_apply;
   }
}
void Jobs::qualifier_test()
{
   char ready;
retry6:
   cout << "So are you ready for quiz? [y/n]: ";
   cin >> ready;
   if (ready == 'y' || ready == 'Y')
   {
      char ryt_ans;
      int score = 0;
      cout << "\nHere is your quiz...\n\n";

      cout << "Q.1. What is another name of Chanakya?\t\t\t\t    Current Score = " << score << endl;
      cout << "(a) Bhattaswami (b) Vishnugupta (c) Rajashekhar (d) Visakhadatta\n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'b')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question2;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (b) Vishnugupta\n\n";
         goto question2;
      }
   question2:
      cout << "Q.2. Compound element that is useful in photography is:\t\t\t Current Score = " << score << endl;
      cout << "(a) Silver bromide (b) Silver nitrate (c) Sulfuric acid (d) Citric acid \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'a')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question3;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (a) Silver bromide\n\n";
         goto question3;
      }
   question3:
      cout << "Q.3. Which is largest producer state of onions in India?\t Current Score = " << score << endl;
      cout << "(a) Gujarat (b) Jharkhand (c) West bengol (d) Maharashtra\n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'd')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question4;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (d) Maharashtra\n\n";
         goto question4;
      }

   question4:
      cout << "Q.4. Give the antonym of the word Melancholy:\t\t Current Score = " << score << endl;
      cout << "(a) Gangrene (b) Cheeriness (c) Unhappy (d) Lassitude \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'b')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question5;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (b) Cheeriness\n\n";
         goto question5;
      }

   question5:
      cout << "Q.5. Economic survey is published by:\t\t\t\t\t\t\t\t\t  Current Score = " << score << endl;
      cout << "(a) Ministry of finance (b) Planning commission (c) Government of India (d) Indian statistical institute \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'a')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question6;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (a) Ministry of finance\n\n";
         goto question6;
      }

   question6:
      cout << "Q.6. Give the SI unit of the magnetic field:\t\tCurrent Score = " << score << endl;
      cout << "(a) Ampere (b) Tesla (c) Oersted (d) Weber\n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'b')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question7;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (b) Tesla\n\n";
         goto question7;
      }

   question7:
      cout << "Q.7. Calcium carbide on reaction with water gives:\tCurrent Score = " << score << endl;
      cout << "(a) Methane (b) Ethane (c) Propane (d) Acetylene \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'd')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question8;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (d) Acetylene\n\n";
         goto question8;
      }

   question8:
      cout << "Q.8. Which programming language is used for frontend development?\t\t Current Score = " << score << endl;
      cout << "(a) Java (b) Python (c) Javascript (d) Both (a) and (b) \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'c')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question9;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (c) Javascript\n\n";
         goto question9;
      }

   question9:
      cout << "Q.9. Give the synonym of the word Exertion:\t\t\tCurrent Score = " << score << endl;
      cout << "(a) Inarticulation (b) Subvert (c) Remonstration (d) Assiduity \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'd')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n\n";
         score += 10;
         goto question10;
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (d) Assiduity\n\n";
         goto question10;
      }

   question10:
      cout << "Q.10. Which of the following is not a series:\t\t\t\t\t      Current Score = " << score << endl;
      cout << "(a) Arithmetic series (b) Geometric series (c) Isometric series (d) Harmonic series \n\n";
      cout << "Please give right option[a or b or c or d]: ";
      cin >> ryt_ans;
      if (ryt_ans == 'c')
      {
         cout << "\nWell done! " << user_name << " this is right answer.\n";
         score += 10;
         if (score >= 70)
         {
            cout << "\nYour total score = " << score << endl;
            cout << "\nCongratulation! " << user_name << ", you passed the qualifier test.\n";

            time_t curr_time;
            tm *curr_tm;
            char datetime_string[100];

            time(&curr_time);
            curr_time = time(NULL);
            curr_tm = localtime(&curr_time);

            strftime(datetime_string, 100, "Your application has been received on %A, %B %d, %Y", curr_tm);
            cout << datetime_string;
            cout << " at " << curr_tm->tm_hour << ":" << curr_tm->tm_min << ":" << curr_tm->tm_sec << endl;

            applied_jobs += 1;
            pass = true;
            cout << "\n\nYou can simply check your currently applied jobs by pressing 5.\n";
         }
         else
         {
            cout << "\nYour total score = " << score << endl;
            cout << "\nWell tried! " << user_name << ", but You are failed.\n";
         }
      }
      else
      {
         cout << "\nIncorrect! The correct answer is: (c) Isometric series\n";
         if (score >= 70)
         {
            cout << "\nYour total score = " << score << endl;
            cout << "\nCongratulation! " << user_name << ", you passed the qualifier test.\n";

            time_t curr_time;
            tm *curr_tm;
            char datetime_string[100];

            time(&curr_time);
            curr_time = time(NULL);
            curr_tm = localtime(&curr_time);

            strftime(datetime_string, 100, "Your application has been received on %A, %B %d, %Y", curr_tm);
            cout << datetime_string;
            cout << " at " << curr_tm->tm_hour << ":" << curr_tm->tm_min << ":" << curr_tm->tm_sec << endl;

            applied_jobs += 1;
            pass = true;
            cout << "\n\nYou can simply check your currently applied jobs by pressing 5.\n";
         }
         else
         {
            cout << "\nYour total score = " << score << endl;
            cout << "\nWell tried! " << user_name << ", but You are failed.\n";
         }
      }
   }
   else if (ready == 'n' || ready == 'N')
   {
      return;
   }
   else
   {
      cout << "\nInvalid input\n\n";
      goto retry6;
   }
}
void Jobs::applied_jobs_byYou()
{
   if (!deleted)
   {
      if (applied_jobs == 0)
      {
         cout << "\nThere is no job applied by you.\n";
      }
      else
      {
         cout << "Total jobs you applied: " << applied_jobs << endl;
         cout << "You applied for: " << job_name << endl;
         if (!status)
         {
            cout << "\nApplication status: Pending";
            cout << "\nPlease keep your eyes on the site to see your application status.\n";
         }
         else
         {
            char call;
            cout << "\nApplication status: " << decision;
            if (selected)
            {
               if (call_letter_active)
               {
               revise:
                  cout << "\n\npress y to see your call letter otherwise press n: ";
                  cin >> call;
                  if (call == 'y' || call == 'Y')
                  {
                     cout << call_letter;
                     applied_jobs = 0;
                     job_name = " ";
                     decision = " ";
                  }
                  else if (call == 'n' || call == 'N')
                  {
                     return;
                  }
                  else
                  {
                     cout << "\nInvalid input\n";
                     goto revise;
                  }
               }
               else
                  cout << "\nWait for 2-3 days to get your call letter from the company.\n";
            }
         }
      }
   }
   else
      cout << "\nYou don't have any account yet.\n";
}
void Jobs::faq()
{
   int faq_ans;
   cout << "These are frequently asked questions....\n";
   cout << "\n1. What is eligibility criteria for job seekers?\n";
   cout << "\n2. What type of jobs are available here?\n";
   cout << "\n3. Is it compulsory to give qualifier test?\n";
   cout << "\n4. Where would I get job after placement?\n";
   cout << "\n5. Is there any hidden charges for applying the jobs?\n";
   cout << "\n6. For how many jobs can I apply at a time?\n";
   cout << "\n7. How do I delete my account?\n";
   cout << "\n8. What if I forget my job Id?\n";
   cout << "\n9. Can I apply again for a specific job in which I've already failed?\n";
retry2:
   cout << "\nPlease press the no. of the question to get an answer otherwise press 10 to exit: ";
   cin >> faq_ans;
   switch (faq_ans)
   {
   case 1:
      cout << "\n1. What is eligibility criteria for job seekers?\n";
      cout << "\nThis is necessary for you to have at least highschool marksheet.\nYour age should be from 18 to 40 years for each and every job.\n";
      goto retry2;
      break;

   case 2:
      cout << "\n2. What type of jobs are available here?\n";
      cout << "\nWe have got very good and reliable job opportunities for you, you can apply according to your qualification highschool, Intermediate, graduation, post graduation and diploma.\nYou can find every type of jobs here like forest department, IT department, technical and non-technical departments as well etc.\n";
      goto retry2;
      break;

   case 3:
      cout << "\n3. Is it compulsory to give qualifier test?\n";
      cout << "\nQualifier test is a test to check your skills. This test is important for applying all jobs.\n";
      goto retry2;
      break;

   case 4:
      cout << "\n4. Where would I get job after placement?\n";
      cout << "\nWe have multiple companies across the India for giving you a better job opportunity. So you can get your job anywhere in India, If you don't want to work at any place then simply quit that job and apply for another one.\n";
      goto retry2;
      break;

   case 5:
      cout << "\n5. Is there any hidden charges for applying the jobs?\n";
      cout << "\nNo, there is no hidden charges for applying the job. This is totally free job portal.\n";
      goto retry2;
      break;

   case 6:
      cout << "\n6. For how many jobs can I apply at a time?\n";
      cout << "\nYou can apply maximum 3 jobs at a time, if you don't get a job from the applied jobs then you can apply again for more jobs.\n";
      goto retry2;
      break;

   case 7:
      cout << "\n7. How do I delete my account?\n";
      cout << "\nYou can simply delete your account by pressing 10 in main menu. You have to just provide your existing job Id to delete your account.\n";
      goto retry2;
      break;

   case 8:
      cout << "\n8. What if I forget my job Id?\n";
      cout << "\nNo worry, If you forgot your job Id then you can easily regenerate it by pressing y, when you would be asked for generating job Id.\n";
      goto retry2;
      break;

   case 9:
      cout << "\n9. Can I apply again for a specific job in which I've already failed?\n";
      cout << "\nYes, you can apply for a job in which you are not passed.\n";
      goto retry2;
      break;

   case 10:
      return;

   default:
      cout << "\nPlease ask a valid question.\n";
      goto retry2;
   }
}
void Jobs::delete_account()
{
   char del;
   int del_data;
   cout << "\nSorry for your inconvenience, We did not expect this from you.\n";
retry4:
   cout << "\nDo you really want to delete your account[y/n]: ";
   cin >> del;
   if (del == 'y' || del == 'Y')
   {
      cout << "\nPlease enter your job Id: ";
      cin >> del_data;
      if (del_data == job_id)
      {
         having_profile = false;
         cout << "\nYour account has been deleted now.\n";
         deleted = true;
         return;
      }
      else
      {
         cout << "\nWe don't have any account with job Id " << del_data << endl;
         char gen;
         cout << "\nHave you forgot your job Id? If yes then press y to regenerate it otherwise press n to exit: ";
         cin >> gen;
         if (gen == 'y' || gen == 'Y')
         {
            srand(static_cast<unsigned int>(time(nullptr)));
            job_id = rand() % 900000 + 100000;
            cout << "Please note your new job Id: " << job_id << endl;
            return;
         }
         else if (gen == 'n' || gen == 'N')
         {
            return;
         }
      }
   }
   else if (del == 'n' || del == 'N')
   {
      return;
   }
   else
   {
      cout << "\nInvalid input\n";
      goto retry4;
   }
}

class company
{
public:
   void verify_application();
   void send_call_letter();
};
void company::verify_application()
{
   if (!deleted)
   {
      if (applied_jobs > 0)
      {
         cout << "\nThese are details of applicant: \n";

         cout << "\nName of applicant: " << user_name << endl;
         cout << "Job Id of applicant: " << job_id << endl;
         cout << "City of applicant: " << city << endl;
         cout << "Age of applicant: " << age << endl;
         cout << "Phone number of applicant: " << phone_no << endl;
         cout << "Email id of applicant: " << email << endl;
         cout << "Applicant's work experience: " << work_ex << endl;
         cout << "Applicant's skills: " << skills << endl;
         cout << "Languages known by applicant: " << lang << endl;

         cout << "\nTotal jobs applied by applicant: " << applied_jobs << endl;
         cout << "Applicant applied for: " << job_name << endl;

         char choose;
      again:
         cout << "\nIf everything is ok then choose a to approve otherwise choose r to reject the application: ";
         cin >> choose;
         if (choose == 'a' || choose == 'A')
         {
            decision = "Congratulations! Your application has been successfully approved by the company.";
            status = true;
            cout << "\nApproved!\n";
            selected = true;
         }
         else if (choose == 'r' || choose == 'R')
         {
            decision = "Sorry! Your application has been rejected by the company.";
            status = true;
            cout << "\nRejected!\n";
            selected = false;
         }
         else
         {
            cout << "\nInvalid input\n\n";
            goto again;
         }
      }
      else
         cout << "\nNobody has applied for job yet.\n";
   }
   else
      cout << "\nNobody has applied for job yet.\n";
}
void company::send_call_letter()
{
   if (!deleted)
   {
      if (applied_jobs > 0)
      {
         if (status)
         {
            if (selected)
            {
               char send[20];
            retake:
               cout << "\nPlease enter email id of the applicant to send the call letter otherwise press n: \n";
               cin >> send;
               if (strcmp(send, email) == 0)
               {
                  call_letter = "\nDear Applicant,\n\nSubject: Job Interview Call Letter\n\nWe refer to your job application against our advertisement in the online job search system. You are advised to appear for an Interview on (Monday 24/08/2023) at the appropriate location.\n\nPlease note that:\n\n\"This is an interview call for the job applied and does not guarantee employment with us.\"\n\"No TA/DA will be provided to candidates appearing for the interview.\"\n\"Bring this letter with you on the above-mentioned date and time of the interview.\"\n\"Bring photocopies and originals of your academic & other credentials along with a recent snap.\"\n\nPlease do not hesitate to contact the undersigned if you have any queries.\n\nWith best wishes,\n\nFor SemiOffice Corp\nG.M. HR & Admin\n";
                  cout << "\nSent successfully!\n";
                  call_letter_active = true;
               }
               else if (strcmp(send, "n") == 0 || strcmp(send, "N") == 0)
               {
                  return;
               }
               else
               {
                  cout << "\nInvalid input\n";
                  goto retake;
               }
            }
            else
               cout << "\nYou can't send the call letter to a rejected applicant.\n";
         }
         else
            cout << "\nYou have not verified the application yet.\n";
      }
      else
         cout << "\nNobody has applied for job yet.\n";
   }
   else
      cout << "\nNobody has applied for job yet.\n";
}

void about_project()
{
   cout << "\nThis is Job Portal based project. Many type of jobs are available for all the students, no matter what stream they do have or where do they belong to. This portal is free and open to all job seekers.\n\nI've divided this project into two types of users, one is for job seekers and another one is for hiring companies.\n\nI've taken two majour classes, one is named Jobs for job seekers and another is named company for hiring company.\n\nIn the Jobs class, I've used highschool_jobs(), Intermediate_jobs(), ug_jobs, pg_jobs() and diploma_jobs() methods for giving job opportunities according to job seeker's  qualification.\n\nAge of a job seeker should not be less than 18 years and not more than 40 years.\n\nA job seeker can apply maximum 3 jobs at one time.\n\nQualifier_test() method is used for taking skill test of job seekers and for applying the jobs. It is mandatory to all job seekers to give this test without clearing this test a job seeker can't apply for the job.\n\nBefore applying any job a job seeker should have his/her profile on this portal without creating the profile he/she can't apply for the jobs. For creating profile I used new_profile() method and using my_profile() method he/she can check their existing job profile and using update_profile() method he/she can update his/her details.\n\nAfter creating new profile, job seekers would get a six-digits random number called job Id. Job seekers can use this job Id to delete their account.\n\nI also took care of job seeker's queries and for this purpose I used faq() method, using this method job seekers can get their answers relative to their questions.\n\nI've used contact() method so that job seekers or hiring company can contact us for any query.\n\nAfter using services of job search system you can also share feedback to us by using share_feedback() method.\n\nIf a job seeker doesn't want to be a part of the system, he/she can delete his/her account by providing his existing job id in delete_account() method.\n";
}
void contact()
{
   cout << "Contact number: 1234567890";
   cout << "\nEmail id: something12@gmail.com";
   cout << "\nVisit our website: www.example.com";
   cout << "\nVisit us on: Floor 3rd, Krishna apartment, railway road Aligarh UP(202001)";
}
void share_feedback()
{
   char feed[200];
   cout << "\nPlease give your valuable feedback to us: ";
   fflush(stdin);
   gets(feed);
   cout << "\nYour feedback: " << feed;
   cout << "\n\nThankyou! for giving your valuable feedback.\n";
}

int main()
{
   cout << "\n\t\t\t\t\t\t\t************************";
   cout << "\n\t\t\t\t\t\t\tOnline Job Search System";
   cout << "\n\t\t\t\t\t\t\t************************";
   cout << "\n\n\t\tWelcome to our online job portal...";

   char password[9] = "Abcd@012";
   char confirm_password[9];
   int service;
   do
   {
   Home_page:
      cout << "\n\n\t\tHome page:";
      cout << "\n\t\t1. Enter as job seeker\n\t\t2. Enter as hiring company\n\t\t3. About the  project\n\t\t4. Contact us\n\t\t5. Share your feedback\n\t\t6. Exit";
      cout << "\n\nHow can I help you [please select anyone service from 1 to 6]: ";
      cin >> service;
      switch (service)
      {
      case 1:
         cout << "\n\nEnter as job seeker\n\n";
         Jobs j;
         int choice;
         char edu[30];

         do
         {
         menu:
            cout << "\n\n\t\tMain menu:";
            cout << "\n\t\t1. New profile\n\t\t2. My profile\n\t\t3. Update profile\n\t\t4. Jobs for you\n\t\t5. Applied jobs by you\n\t\t6. FAQ.\n\t\t7. Delete account\n\t\t8. Exit";
            cout << "\n\nHow can I help you [please select anyone service from 1 to 8]: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
               cout << "\n\n1. New profile\n\n";
               if (having_profile == true)
               {
                  cout << "\nYou already have an account.\n";
                  goto menu;
               }
               j.new_profile();
               break;

            case 2:
               cout << "\n\n2. My profile\n\n";
               if (!having_profile)
               {
                  cout << "\nYou do not have any job profile yet.\n";
                  goto menu;
               }
               j.my_profile();
               break;

            case 3:
               cout << "\n\n3. Update profile\n\n";
               if (!having_profile)
               {
                  cout << "\nYou do not have any job profile yet.\n";
                  goto menu;
               }
               j.update_profile();
               break;

            case 4:
               cout << "\n\n4. Jobs for you\n\n";
               if (!having_profile)
               {
                  char select;
                  cout << "\nYou have not created your job profile yet.\n";
               retry3:
                  cout << "\nPlease press y to create your new profile now otherwise press n to go to main menu: ";
                  cin >> select;
                  if (select == 'y' || select == 'Y')
                  {
                     j.new_profile();
                     goto menu;
                  }
                  else if (select == 'n' || select == 'N')
                  {
                     goto menu;
                  }
                  else
                  {
                     cout << "\nPlease give a valid input\n";
                     goto retry3;
                  }
               }
               if (applied_jobs < 3) // A job seeker can apply for maximum 3 jobs at a time.
               {
                  cout << "\nHello " << user_name << "! please enter your highest education among Highschool, Intermediate, Graduation(UG or ug), Post graduation(PG or pg) and Diploma: ";
                  fflush(stdin);
                  gets(edu);
                  if (strcmp(edu, "Highschool") == 0 || strcmp(edu, "highschool") == 0)
                  {
                     j.highschool_jobs();
                  }
                  else if (strcmp(edu, "Intermediate") == 0 || strcmp(edu, "intermediate") == 0)
                  {
                     j.intermediate_jobs();
                  }
                  else if (strcmp(edu, "Graduation") == 0 || strcmp(edu, "UG") == 0 || strcmp(edu, "graduation") == 0 || strcmp(edu, "ug") == 0)
                  {
                     j.ug_jobs();
                  }
                  else if (strcmp(edu, "Post graduation") == 0 || strcmp(edu, "PG") == 0 || strcmp(edu, "post graduation") == 0 || strcmp(edu, "pg") == 0)
                  {
                     j.pg_jobs();
                  }
                  else if (strcmp(edu, "Diploma") == 0 || strcmp(edu, "diploma") == 0)
                  {
                     j.diploma_jobs();
                  }
                  else
                     cout << "There is no job according to your qualification\n";
               }
               else
                  cout << "\nYou have already applied three jobs.\nYou can not apply more than 3 jobs at a time.\n";
               break;

            case 5:
               cout << "\n\n5. Applied jobs by you\n\n";
               j.applied_jobs_byYou();
               break;

            case 6:
               cout << "\n\n6. FAQ\n\n";
               j.faq();
               break;

            case 7:
               cout << "\n\n7. Delete account\n\n";
               if (!having_profile)
               {
                  cout << "\nYou don't have any account yet.\n";
                  goto menu;
               }
               j.delete_account();
               break;

            case 8:
               goto Home_page;
               break;

            default:
               cout << "Invalid input";
            }
         } while (choice != 8);
         break;

      case 2:
         cout << "\n\nEnter as hiring company\n\n";
         cout << "\nPlease enter password: ";
         cin >> confirm_password;
         if (strcmp(password, confirm_password) == 0)
         {
            company cmp;
            int decide;
            do
            {
               cout << "\n\n\t\tMain menu:";
               cout << "\n\t\t1. Verify application\n\t\t2. Send call letter\n\t\t3. Exit";
            repeat:
               cout << "\n\nHow can I help you [please select anyone service from 1 to 3]: ";
               cin >> decide;
               switch (decide)
               {
               case 1:
                  cout << "\n\n1. Verify application\n\n";
                  cmp.verify_application();
                  break;

               case 2:
                  cout << "\n\n2. Send call letter\n\n";
                  cmp.send_call_letter();
                  break;

               case 3:
                  goto Home_page;
                  break;

               default:
                  cout << "\nInvalid input\n";
                  goto repeat;
               }
            } while (decide != 3);
         }
         else
            cout << "\nWrong password entered\n";
         break;

      case 3:
         cout << "\n\nAbout the project\n\n";
         about_project();
         break;

      case 4:
         cout << "\n\nContact us\n\n";
         contact();
         break;

      case 5:
         cout << "\n\nShare your feedback\n\n";
         share_feedback();
         break;

      case 6:
         exit(0);
         break;

      default:
         cout << "\nPlease give a valid user type\n";
         goto Home_page;
      }
   } while (service != 6);
   return 0;
}
