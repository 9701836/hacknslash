#include <iostream>
#include <iomanip>
#include "menu.h"
using namespace std;

Menu :: Menu(const int x, const int y, const int z)
{}

void Menu :: setMenu(const int x, const int y, const int z)
{
  a = x;
  b=y;
  c=z;
}
void Menu :: display()
{
  cout<<"\n"<<endl;
  cout << "hp="<<a<<endl;  
  cout << "enemy hp ="<<b<<endl;
  cout << "1. attack"<<endl;
  cout << "2. dab on him"<<endl;
}
void Menu :: dab()
{
  cout << "cringe"<<endl;
}
int Menu :: getY()
{
  return b;
}
void Menu :: attack()
{
  b=b-1;
  cout<<"\n";
}
void Menu :: attacked()
{
  a=a-1;
  cout <<"\n you get the chopped"<<endl;
}
void Menu :: print() const{}
