

#include <iostream>
#include <string>
using namespace std;

class shopkeeper;
class product {
 private:
    string itemName;
    int quantity, UnitPrice;
    friend string invoice(product, shopkeeper);
    
 public:
    product() {
        itemName = "null";
        quantity = UnitPrice = 0;
    }
    
    void set() {
         cout << "Copyright:  @@@@@@@@@ Zeeshan @@@@@@@@@@@@@@@@" << endl;
         cout << "enter item name: ";
         cin >> itemName;
         cout << "quantity: ";
         cin >> quantity;
         cout << "price: ";
         cin >> UnitPrice;
    
    }
    
    
};


class shopkeeper {
 private:
    string SkName, location, number;
    friend string invoice(product, shopkeeper);
    
 public:
    shopkeeper() {
        SkName = location = number = "null";
    }
    
    void set() {
         cout << "enter shopkeeper name: ";
         cin >> SkName;
         cout << "location: ";
         cin >> location;
         cout << "number: ";
         cin >> number;

    }
    
};



 string invoice(product ob1, shopkeeper ob2) {
    cout<<"==============      INVOICE       ================";
    cout<<"Item name -->  "<<ob1.itemName<<endl;
    cout<<"Quantity -->  "<<ob1.quantity<<endl;
    cout<<"unit Price -->  "<<ob1.UnitPrice<<endl;
    
    cout<<"Shopkeeper Name -->  "<<ob2.SkName<<endl;
    cout<<"location -->  "<<ob2.location<<endl;
    cout<<"mobile number -->  "<<ob2.number<<endl;
    
    return "Copyright: @@@@@@@@@ Zeeshan @@@@@@@@@@@@@@@@";
  

 }


int main()
{
    product prod;
    shopkeeper keeper;

    prod.set();
    keeper.set();
    cout << invoice(prod, keeper);

    return 0;
}




