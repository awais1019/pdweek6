#include<iostream>
#include<cmath>
using namespace std;
void price(string,float);
main()
{
 string month;
 float number_of_stays;
 cout<<"Enter month(may,october,june,july,september,august)";
 cin>>month;
 cout<<"Enter number of stays:";
 cin>>number_of_stays;
 price(month,number_of_stays);






}
void price (string month,float number_of_stays)
{   
    float studio,apartement;
   if(month=="may" || month=="october")
   {
     if(number_of_stays<=7)
     {
       studio=50*number_of_stays;
       apartement=65*number_of_stays;
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement<<endl;
     }
     else if (number_of_stays<14)
     {
       studio=50*number_of_stays;
       apartement=65*number_of_stays;
       studio=studio-(studio*0.05);
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement;
       
     }
       else if (number_of_stays>14)
     {
       studio=50*number_of_stays;
       apartement=65*number_of_stays;
       studio=studio-(studio*0.3);
       apartement=apartement-(apartement*0.1);
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement;
       
     }
   } 
    else if(month=="june" || month=="september")
   {
     if(number_of_stays<=14)
     {
       studio=75.20*number_of_stays;
       apartement=68.70*number_of_stays;
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement<<endl;
     }

       else if (number_of_stays>14)
     {
       studio=75.20*number_of_stays;
       apartement=68.70*number_of_stays;
       studio=studio-(studio*0.2);
       apartement=apartement-(apartement*0.1);
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement;
       
     }
   } 
       else if(month=="july" || month=="august")
   {
     if(number_of_stays<=14)
     {
       studio=76*number_of_stays;
       apartement=77*number_of_stays;
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement<<endl;
     }

     
         else if (number_of_stays>14)
     {
       studio=76*number_of_stays;
       apartement=77*number_of_stays;
       apartement=apartement-(apartement*0.1);
       cout<<"studio:"<<studio<<endl;
       cout<<"apartement:"<<apartement;
       
     }
   } 








}

