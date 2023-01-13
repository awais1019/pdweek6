#include<iostream>
#include<cmath>
using namespace std;
string sign(int,string);
main()
{
  int date;
  string month;
  cout<<"Enter date:";
  cin>>date;
  cout<<"Enter month:";
  cin>>month;
  string result=sign(date,month);
  cout<<result;




}
string sign(int date,string month)
{
  string signal,value;
  if((date>=21 || date<=19) && (month=="march" || month=="april"))
  {
    signal="Aries";
    value=signal;
  }
  else if((date>=20 || date<=20) && (month=="april" || month=="may"))
  {
    signal="Taurus";
    value=signal;
  }
   else if((date>=21 || date<=20) && (month=="may" || month=="june"))
  {
    signal="Gemini";
    value=signal;
  }
   else if((date>=21 || date<=22) && (month=="june" || month=="july"))
  {
    signal="Cancer";
    value=signal;
  }
     else if((date>=23|| date<=22) && (month=="july" || month=="august"))
  {
    signal="Leo";
    value=signal;
  }
    else if((date>=23|| date<=22) && (month=="august" || month=="september"))
  {
    signal="Virgo";
    value=signal;
  }
   else if((date>=23|| date<=22) && (month=="september" || month=="october"))
  {
    signal="Libra";
    value=signal;
  }
  
   else if((date>=23|| date<=21) && (month=="october" || month=="november"))
  {
    signal="Scorpio";
    value=signal;
  }
     else if((date>=22|| date<=21) && (month=="november" || month=="december"))
  {
    signal="Sagittarius";
    value=signal;
  }
    else if((date>=22|| date<=21) && (month=="december" || month=="junauary"))
  {
    signal="Capricorn";
    value=signal;

  }
    else if((date>=20|| date<=18) && (month=="january" || month=="february"))
  {
    signal="Aquarius";
    value=signal;

  }
    else if((date>=19|| date<=20) && (month=="february" || month=="march"))
  {
    signal="Pisces";
    value=signal;

  }
    return value;









}