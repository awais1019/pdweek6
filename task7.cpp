#include<iostream>
#include<cmath>
using namespace std;
void time(int,int,int,int);
main()
{
   int starting_hour,arrival_hour,starting_min,arrival_min;
   cout<<"Enter test starting hour:";
   cin>>starting_hour;
   cout<<"Enter test starting min:";
   cin>>starting_min;
   cout<<"Enter test arrival hour:";
   cin>>arrival_hour;
   cout<<"Enter test arrival min:";
   cin>>arrival_min;
   time(starting_hour,starting_min,arrival_hour,arrival_min);

}
    void time(int starting_hour,int starting_min,int arrival_hour,int arrival_min)
 {
      int total,total1;
 
     if((starting_hour<=23 && starting_min<=59)&&(arrival_hour<=23 && arrival_min<=59))
    {
      if (starting_hour>arrival_hour && starting_min<arrival_min)
    {
       total=arrival_min-starting_min;
        if(total<30)
     {
     total=total+10;
     cout<<"Early"<<endl;
     cout<<total<<" min before start";
     }
     else
     {
      if(total<=50 || total>50)
      {
      total=60-total; 
      cout<<"ON Time"<<endl;
      cout<<total<<" min before start";
      }
     }
    }
     else if(starting_hour>arrival_hour && starting_min>arrival_min)
    {
      total=starting_hour-arrival_hour;
      total1=starting_min-arrival_min;
      cout<<"Early"<<endl;
      cout<<total<<":"<<total1<<"  before start";
    }
     else if(starting_hour>arrival_hour && starting_min==arrival_min)
     {
     total=starting_hour-arrival_hour;
     cout<<"Early"<<endl;
     cout<<total<<":"<< " hour before start";
     }
     else if(starting_hour==arrival_hour && starting_min==arrival_min)
      {
        cout<<"ON TIME";
      }
          else if(starting_hour==arrival_hour && starting_min>arrival_min)
      {
        total=starting_min-arrival_min;
       if(total<30)
     {
      cout<<"ON TIME"<<endl;
      cout<<total<<" min before start";
     }
     else
     {
      if(total<=50 || total>50)
      {
      
      cout<<"early"<<endl;
      cout<<total<<" min before start";
      }
     }
        
      }
     else if(arrival_hour>starting_hour && arrival_min>starting_min )
     {
       total=arrival_hour-starting_hour;
       total1=arrival_min-starting_min;
       cout<<"Late"<<endl;
       cout<<total<<":"<<total1<<" after start";
     }
      else if(arrival_hour==starting_hour && arrival_min>starting_min )
      {
        total=arrival_min-starting_min;
        cout<<"Late"<<endl;
        cout<<total<< " after start";
      }
      else if(arrival_hour>starting_hour && arrival_min<starting_min )
      {
        total=starting_min-arrival_min;
        total=60-1;
        cout<<"Late"<<endl;
        cout<<total<< " after start";

      }
      else if(arrival_hour>starting_hour && arrival_min==starting_min )
      {
        total=arrival_hour-starting_hour;
        cout<<"Late"<<endl;
        cout<<total<<" hour after start";

      }
   }
     
 }























































    
    



      




    


























   

