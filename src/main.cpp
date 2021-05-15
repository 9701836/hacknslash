#include <iostream>
#include "menu.h"
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main() {
  int h,j,k,l;
  k=1;
  l=2;
  h=3;
  Menu menu1;
  menu1.print();
  menu1.setMenu(5,5,0);
  menu1.print();
  menu1.display();
  j=menu1.getY();
  cin >> h;
  while (k==1)
  {
   while (h==1 && j>=2)
   {
      menu1.attack();
      j=menu1.getY();
      l=1;
      h=0;
   }
   if (h==1 &&j==1)
   {
      menu1.attack();
      menu1.display();
      j=menu1.getY();
      l=1;
   }
    while (h==2 && j>=2)
   {
      menu1.dab();
      menu1.display();
      cin >> h;
      j=menu1.getY();
      l=1;
    }
   if (h==2 &&j==1)
   {
      menu1.dab();
     menu1.display();
     j=menu1.getY();
     l=1;
   }
   while(h==3 && j>=1)
   {
      menu1.display();
      cin >> h;
   }
   while(l==1)
   {
     if(j==0)
     {
        l=2;
     }else{
     menu1.attacked();
     l=2;
      h=3;
     }
   }
  if (j==0)
    {
      cout << "you win"<<endl;
      k=2;
    }
  }
}
