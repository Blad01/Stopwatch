#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;
int main()
{
 
 system("CLS");
 int hr=0,min=0,sec=0;
 cout<<"\n\t\t stopwatch";
 cout<<"\n\t\t HH: MM: SS";
 cout<<"\n\t\t "<<hr<<" : "<<min<<" : "<<sec;
 cout<<"\n\t\t press any key to start";
 _getch();
 while(!_kbhit())
 {
  sec++;
  Sleep(1000);
  if(sec>59)
  {
   min++;
   sec=0;
  }
  if(min>59)
  { 
    hr++;
    min=0;
  }
  system("CLS");
  cout<<"\n\t\t stopwatch";
  cout<<"\n\t\t HH: MM: SS";
  cout<<"\n\t\t "<<hr<<" : "<<min<<" : "<<sec;
  cout<<"\n\t\t press any key to stop";
 }
 _getch();
 cout<<"\n\t\t the time after pausing is";
 cout<<"\n\t\t "<<hr<<" : "<<min<<" : "<<sec;
 _getch();
 return 0;
}