#include<iostream>
using namespace std;
char getmaxichar(string a){
    int arr[26]={0};
    for(int i=0;i<a.length();i++){
      char ch=a[i];
       // lowercase
        int num=0;
       if(ch>='a'&& ch<='z'){
        num=ch-'a';
       }//upper case
       else {num=ch-'A';}
       arr[num]++;
    }int maxi=-1,ans=-1;
    for(int i=0;i<25;i++){
      if(maxi<arr[i]){
          ans=i;
          maxi=arr[i];
      }
    }
    char finans=ans+'a';
    return finans;
}
int main()
{
string s;
cin>>s;
cout<<getmaxichar(s);
return 0;
}