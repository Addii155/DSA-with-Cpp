#include<bits/stdc++.h>
using namespace std; 
// class player{
// public:
//     int score;  //data member
//     int health;  //member function member function can easily access data member
//     void showhealth()
//     {
//         cout<<"Health is"<<health<<endl; 
//     }
// };
class Books{
private:
    char name;
    int price;
    int pages;
public:
    void settname(char s)
   {
       name=s;
   }
   void setterprice(int p)
   {
      price=p;
   }
   void setterpage(int pag)
   {
    pages=pag;
   }
   char getname()
   {
    return name;
   }
   int getprice()
   {
    return price;
   }
   int getpage()
   {
    return pages;
   }

};
int main()
{
   Books m;
    m.settname('a');
    m.setterprice(200);
    m.setterpage(500);
    cout<<m.getname()<<endl;

}