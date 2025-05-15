#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the largest number after k swaps.
     void Solve(string &ans,string str,int k,int idx){
      if(k==0 || idx>=str.size())
      return;
      char maxC=str[idx];
      for(int i=idx+1;i<str.size();i++){
          if(str[i]>maxC)
          maxC=str[i];
      }
      if(maxC!=str[idx])
      k--;
      for(int i=idx;i<str.size();i++){
          if(maxC==str[i]){
          swap(str[idx],str[i]);
            // str1.compare(str2)
            // str1==str2 then return 0
            // str1 > str2 then return 1 if first non-matching character of str1 greater then str2
            // str2 > str1 then return -1 if first non-matching character of str1 is less then str2
          if(str.compare(ans)>0) 

          ans=str;
          Solve(ans,str,k,idx+1);
          swap(str[idx],str[i]);
          }
      }
  }
  
    string findMaximumNum(string& s, int k) {
        // code here.
        string ans=s;
        Solve(ans,s,k,0);
        return ans;
    }
};

int main() {
    int t, k;
    string str;

    cin >> t;
    while (t--) {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}