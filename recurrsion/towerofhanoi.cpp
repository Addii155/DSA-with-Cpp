#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<n<<" "<<a<<" "<<b<<" "<<c<<endl;
    hanoi(n-1,b,a,c);

}
int main(){
    hanoi(5,'A','B','C');
}


