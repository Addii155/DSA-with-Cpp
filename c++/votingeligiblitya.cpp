#include<iostream>
using namespace std;

bool votingeligibility(int age,int limit){
    if(age>=limit){
        return true;}
        else {
        return false;
}
}
int main(){
    int limit=18;
int eligibility=votingeligibility(15,limit);
if(eligibility){
    cout<<"yes,person is eligible to vote"<<endl;}
    else{
cout<<"NO,person is not eligible to vote"<<endl;
    }

}

