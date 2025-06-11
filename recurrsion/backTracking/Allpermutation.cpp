#include<iostream>
using namespace std;

void findpermutation(string &str, int i,int j)
{
    // Base condition
    if(i==str.length())
    {
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<str.length();j++)
    {
        // swap
        swap(str[i],str[j]);
        // recursion
        findpermutation(str,i+1,j);
        // backtrack
        swap(str[i],str[j]);
    }
}
int main()
{
    string str="abc";
    findpermutation(str,0,0);
}

// IP-OP Method 
// in this method given input string is converted into expected ouput