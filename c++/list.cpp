#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void display(list<int>&lst){
    list<int >::iterator iter;
    for(iter=lst.begin();iter!=lst.end();iter++){
        cout<<(*iter)<<" ";
    }
    cout<<endl;
}
int main()
{
list<int>list1;
list<int>list2(3);
list1.push_back(7);
list1.push_back(4);
list1.push_back(5);
display(list1);
//list1.remove(3);
list1.sort();
display(list1);
list<int>::iterator iter;
iter=list2.begin();
*iter=99;
iter++;
*iter=67;
iter++;
*iter=98;
iter++;
display(list2);
list1.merge(list2);
cout<<"after merge is = ";
list1.sort();
display(list1); 
return 0;
}