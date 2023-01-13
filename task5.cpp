#include<iostream>
#include<cmath>
using namespace std;
float checkprice(string,string,float);
main()
{
 string fruit,day;
 float number;
 cout<<"Enter fruit name(banana,apple,orange,grapefruit,kiwi,pineapple,grapes)" ;
 cin>>fruit;
 cout<<"Enter day name:";
 cin>>day;
 cout<<"Enter quantity:";
 cin>>number;
 float result=checkprice(day,fruit,number);
 cout<<result;

}
float checkprice(string day,string fruit,float number)
{
  float price,bill;
  if(day=="saturday" || day=="sunday")
  {
    if (fruit=="banana")
    {
     price=number*2.70;
     bill=price;
    }
     else if (fruit=="apple")
    {
     price=number*1.25;
     bill=price;
    }
     else if (fruit=="orange")
    {
     price=number*0.90;
     bill=price;
    }
     else if (fruit=="grapefruit")
    {
     price=number*1.60;
     bill=price;
    }
     else if (fruit=="kiwi")
    {
     price=number*3.00;
     bill=price;
    }
    else if (fruit=="pineapple")
    {
     price=number*5.60;
     bill=price;
    }
     else if (fruit=="grapes")
    {
     price=number*4.20;
     bill=price;
    }
  }
    else if(day=="monday"||day=="tuesday"||day=="wednesday"||day=="thursday"|| day=="friday")
  {
      if (fruit=="banana")
    {
       price=number*2.50;
       bill=price;
    }
     else if (fruit=="apple")
    {
     price=number*1.20;
     bill=price;
    }
     else if (fruit=="orange")
    {
     price=number*0.85;
     bill=price;
    }
     else if (fruit=="grapefruit")
    {
     price=number*1.45;
     bill=price;
    }
     else if (fruit=="kiwi")
    {
     price=number*2.70;
     bill=price;
    }
    else if (fruit=="pineapple")
    {
     price=number*5.50;
     bill=price;
    }
     else if (fruit=="grapes")
    {
     price=number*3.85;
     bill=price;
    } 
  }
    else
   {
    price=0;
    bill=price;
   }

  return bill;


}
