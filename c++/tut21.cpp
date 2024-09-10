#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);//declaration
    void getData(){
    cout<<"the value 0f a is "<<a<<endl;
    cout<<"the value 0f b is "<<b<<endl;
    cout<<"the value 0f c is "<<c<<endl;
    cout<<"the value 0f d is "<<d<<endl;
    cout<<"the value 0f e is "<<e<<endl;}
    
};
void employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
 employee aditya;
 aditya.d=34;
 aditya.e=43;
 aditya.setData(1,45,4);
 aditya.getData();
return 0;
}