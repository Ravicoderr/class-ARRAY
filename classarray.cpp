#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int tag;

public:
    void initCounter(void) { tag = 1; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << tag << endl;
    cin >> itemId[tag];
    cout << "Enter Price of your item"<<tag << endl;
    cin >> itemPrice[tag];
    tag++;
}

void Shop ::displayPrice(void)
{
    for (int i =1 ; i < tag; i++)
    {
        cout << "The Price of item with Id "  << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}