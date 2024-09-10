#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,girl;
        cin>>n>>k;
	    int maxgirl[n];
	    for(int i=0;i<n;i++){
	        cin>>maxgirl[i];
         }
	     int mg=0;
	     for(int i=0;i<n-2;i++){
	        girl=0;
	        for(int j=i;j<i+k;j++){
	             girl+=maxgirl[j];
	             if(girl>mg){
	             mg=girl;
	         }
	            }
	  } cout<<mg<<endl;
	}
	return 0;
}