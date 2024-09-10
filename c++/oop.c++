#include<bits/stdc++.h>
using namespace std;
class person{
     public:
    int age;
    string name;
    int  myname(int);
    person()
    {
        cout<<"constructor was called"<<"\n";
    }
};
int person :: myname(int t) {
    return t;
}
int main()
{
 person aditya;
 aditya.age=19;
 aditya.name="hi";
 cout<<aditya.age<<aditya.name<<"\n";
 cout<<aditya.myname(200)<<endl;
}