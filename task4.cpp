#include<iostream>
#include<cmath>
using namespace std;
float checkbill(string,string,float);
main()
{
 string type,time;
 float minutes;
 cout<<"Enter Type of service(r,p)";
 cin>>type;
 cout<<"Enter time(d for days and n for night)";
 cin>>time;
 cout<<"Enter minutes you used service:";
 cin>>minutes;
 float result=checkbill(type,time,minutes);
 cout<<result;

}
float checkbill(string type,string time,float minutes)
{
  float regular_price=10;
  float premier_price=25;
  float price,bill;
  if(type=="r")
  {
   if (minutes<=50)
   {
    price=regular_price;
    bill=price;
   }
   else
   {
    price=regular_price+(minutes*0.20);
    bill=price;
   }
  }
  else
 {
   if(time=="d"  && minutes<=75)
   {
    price=premier_price;
    bill=price;
   }
   else if(time=="d" && minutes>75)
   {
     price=premier_price+(minutes*0.10);
     bill=price;

   }
    else if(time=="n"  && minutes<=100)
   {
    price=premier_price;
    bill=price;
   }
   else if(time=="n" && minutes>100)
   {
     price=premier_price+(minutes*0.05);
     bill=price;

   }
   return bill;
 }
  
}