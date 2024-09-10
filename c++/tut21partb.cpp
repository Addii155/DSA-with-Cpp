#include<iostream>
using namespace std;
class animal{
    private :
    int love;
    public :
    int sound ;
    int legs;
    void setdata(int a);
    void showdata(){
        cout<<"the value of love is "<<love<<endl;
        cout<<"the value of sound is "<<sound<<endl;
        cout<<"the value of legs is "<<legs<<endl;}
    };
    void animal :: setdata(int a){
        love=a;
    }

int main()
{
animal dog;
dog.legs=4;
dog.sound=2;
dog.setdata(2);
dog.showdata();
return 0;
}