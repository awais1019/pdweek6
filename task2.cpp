#include<iostream>
#include<cmath>
using namespace std;
string grade(float);
using namespace std;
main()
{
 int marks1,marks2,marks3,marks4,marks5;
 string name;
 cout<<"Enter your name:";
 cin>>name;
 cout<<"Enter marks of subject 1:";
 cin>>marks1;
 cout<<"Enter marks of subject 2:";
 cin>>marks2;
 cout<<"Enter marks of subject 3:";
 cin>>marks3;
 cout<<"Enter marks of subject 4:";
 cin>>marks4;
 cout<<"Enter marks of subject 5:";
 cin>>marks5;
 float total=marks1+marks2+marks3+marks4+marks5;
 float percentage=(total/500)*100;
 string result=grade(percentage);
 cout<<result;



}
string grade(float percentage)
{
  string a,b;
  if(percentage>=90)
  {
    a="A+";
    b=a;
  }
else if(percentage>=80)
  {
    a="A";
    b=a;
  }
else if(percentage>=70)
  {
    a="B+";
    b=a;
  }
else if(percentage>=60)
  {
    a="B";
    b=a;
  }
  else if(percentage>=50)
  {
    a="C";
    b=a;
  }
 else if(percentage>=40)
  {
    a="D";
    b=a;
 }
   else if(percentage<40)
  {
    a="F";
    b=a;
  }
   return b;

}
