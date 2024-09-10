#include<iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){ counter=0;}
    void setPrice(void);
    void displayprice(void);
};
void shop :: setPrice(void){
    cout<<"enter Id of your item"<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter ++;
    
}
void :: displayprice(void){
    for (int i = 0; i < counter; i++){
    cout<<"the price of item with id "<<itemId[i]<<"is"<<itemPrice[i]<<endl;
}
}
int main()
{
    shop dukaan;
    dukaan.setPrice();
    dukaan.setPrice();
     dukaan.setPrice();
     dukaan.displayprice();

return 0;
}