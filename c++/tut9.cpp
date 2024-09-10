#include<iostream>
using namespace std;
int main()
{
    // c++ basic control sturcture
   //1 sequence sturcture
   //2 relation structure 
   //3 loop sturcture
   // is else statement
   int age;
  // cout<<"this is tutorial 9"<<endl;
  cout<<"tell me your age"<<endl;
  cin>>age;;
   if((age<18)&&(age>0))   
    cout<<"you cannot come to my party"<<endl;
    else if (age==18){
        cout<<"you can come to my party"<<endl;
        }
        else if (age<1){
            cout<<"you are not born yet"<<endl;
        }
        else{
            cout<<"you are a kid you will get pass to come to party"<<endl;
        }
        int i=1;
        if(i<7){
            cout<<i;
            i++;
        }  
        switch(age)
        {
        case 18:cout<<"you are 18"<<endl; /* constant-expression */
            /* code */
            break;
        case 22:cout<<"you are 22"<<endl;
        break;
        case 34:cout<<"you are 34"<<endl; 
        break;   
        
        default:cout<<"delfault value"<<endl;
            break;
        }
    return 0;
   
}