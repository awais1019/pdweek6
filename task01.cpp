#include<iostream>
#include<cmath>
using namespace std;
string check(string,string);
main()
{
 string temperature,humidity;
 cout<<"Enter Temperature(warm,cold)";
 cin>>temperature;
 cout<<"Enter humidity(dry,humid)";
 cin>>humidity;
 string result=check(temperature,humidity);
 cout<<result;






}
string check(string temperature,string humidity)
{ 
    string a,b;
  if(temperature=="warm" && humidity=="dry")
  {
    a="play tennis";
    b=a;
  }
 else if(temperature=="warm" && humidity=="humid")
  {
    a="swim";
    b=a;
  } 
  else if(temperature=="cold" && humidity=="dry")
  {
    a="play basketball";
    b=a;
  } 
   else if(temperature=="cold" && humidity=="humid")
  {
    a="watch tv";
    b=a;      
  }
 return b;

}