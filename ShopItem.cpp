#include <iostream>
using namespace std;
class Shop{
    int itemId[100];
    int PriceId[1000];
    int counter;

    public:
    void CounterInit(void);
    void setdata(void);
    void display(void);

};
void Shop :: CounterInit(void)
{
    counter=0;
}

void Shop :: setdata(void)
{
    cout<<"Enter Id of your item:"<<counter +1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your Item:"<<counter +1<<endl;
    cin>>PriceId[counter];
    counter++;
}

void Shop :: display(void)
{
    for(int i=1;i<=counter;i++){
        cout<<"Id of your item "<<" "<<i<<" is:"<<itemId[i]<<"and the price is :"<<PriceId[i]<<endl;
    }
}
int main(){
Shop dukaan;
dukaan.CounterInit();
dukaan.setdata();
dukaan.setdata();
dukaan.setdata();
dukaan.display();

    return 0;
}