#include<iostream>
using namespace std;
int main()
{
//array is a colleaction of data of similar type//
//
//
int marks[4]={34,54,33,76};
//int mathmarks[0] ={943};
//cout<<mathmarks[0];cout<<marks[0]<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
for(int i=0;i<4;i++)
{
    cout<<"the value of marks  "<<i<<"  is "<<marks[i]<<endl;
}
int i=0;
while(i<=4)
{
    cout<<"the value of marks is "<<i<<" is "<<marks[i]<<endl;
    i++;
}
// pointer and array
int*p=marks;
cout<<"the value of marks[0] is"<<*p;
cout<<"the value of marks[0] is"<<marks<<endl;
cout<<"the value of marks[1] is"<<*(p+1)<<endl;
cout<<"the value of marks[2] is"<<*(p+2)<<endl;
cout<<"the value of marks[3] is"<<*(p+3)<<endl;
return 0;
}