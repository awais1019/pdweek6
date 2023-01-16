#include<iostream>
#include<cmath>
using namespace std;
void position( int x, int y, int h);
main()
{
  int x,y;
  int h;
  cout<<"Enter h value:";
  cin>>h;
  cout<<"Enter x value:";
  cin>>x;
  cout<<"Enter y value:";
  cin>>y;
  position(x,y,h);

}
  void position(int x, int y, int h)
{
    int x_axis,y_axis;
    x_axis=h*2;
    y_axis=h*4;
   if((x==h && y==h)||(x>h && y<x_axis))
   cout<<"border:";
   else if(x<x_axis && (x<h||y>y_axis))
   cout<<"ouside";
   else if(x<x_axis&& (y<y_axis||y>x_axis))
   cout<<"inside";

    


}