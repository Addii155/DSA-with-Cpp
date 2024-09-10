#include<iostream>
using namespace std;


//sturcture is the user defined data type in which more 
//than one data type can be used under one variable.
 struct employee
{
    int eid;
    char favechar;
    float salary;
} ;
int main(){
struct employee aditya;
struct employee tushar;
aditya.eid=1;
aditya.favechar='o';
aditya.salary=287648.488;
cout<<"aditya's salary is "<<aditya.salary<<endl;
cout<<"aditya's id is "<<aditya.eid<<endl;
cout<<"aditya's favourate character is "<<aditya.favechar<<endl;
tushar.eid=2;
tushar.favechar='u';
tushar.salary=77587.58;
cout<<"tushar's salary is "<<tushar.salary<<endl;
cout<<"tushar's id is "<<tushar.eid<<endl;
cout<<"tushar's favourate character is "<<tushar.favechar<<endl;
return 0;
}