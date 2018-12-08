#include<iostream>
#include<conio.h>

using namespace std;

void xengine(double, double);

//core
int main()
{
  int x=0, y=0;
  cout<<"****agelrk_Algorithm****"<<endl;
  cout<<"Starting investment value should not be less than Kshs 66/="<<endl;
  cout<<"Enter the starting investment value: "; cin>>x;
  cout<<"Enter the MULTIPLIER: ";                cin>>y;
  while(x<66)
  {
    cout<<"Start again..."<<endl;
    cout<<"Enter the starting investment value: "; cin>>x;
    cout<<"Enter the MULTIPLIER: ";                cin>>y;
  }
  cout<<"Press I to track growth..."<<endl;
  xengine(x, y);
  
  return 0;
}

void xengine(double x, double y)
{
  bool online=true; double z=0, d=0; char pressedkey; int asciivalue=0, track=1;
  while(online)
  {
    pressedkey=getch();
    asciivalue=pressedkey;
    if(asciivalue==105) //105 on the keyboard is I
    {
      z=(x/3)*(2*y); d=z-x;
      cout<<track<<" .Expected_Yield: "<<z<<"Margin: "<<d<<endl;
      track++;
      x=z;
    }
  }
}
