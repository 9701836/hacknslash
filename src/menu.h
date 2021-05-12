#ifndef MENU_H
#define MENU_H

class Menu{
   private:
      int a;
      int b;
      int c;
   public:
      Menu(const int x=0, const int y=0, const int z=0);
      void setMenu(const int x, const int y, const int z);
      void display();
      void attack();
      void dab();
      int getY();
      void attacked();
      void print() const;
};
#endif
