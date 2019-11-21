#include <iostream>
#include <stdlib.h>

using namespace std;

class product {
public:
    void addproduct(int Product_id,int Price,int Expiration_date,string Product_Name,string Manufacturer);
    void DisplayProducts();
    product();
private:
    int Product_id, Price, Expiration_date;
    string Product_Name, Manufacturer;

};

product::product(void) {
    string choice;

    cout <<"Welcome to Mang-kanor store"<< endl;

    cout << "Do you want to add some product? Y or N "<< endl;
    cin>> choice;

    if(choice=="Y" || choice== "y"){
        cout<<"Enter Product ID: ";
        cin>>Product_id;
        cout<<"Enter Product Name: ";
        cin>>Product_Name;
        cout<<"Enter Price: ";
        cin>>Price;
        cout<<"Enter Manufacturer: ";
        cin>>Manufacturer;
        cout<<"Enter Expiration Date: ";
        cin>> Expiration_date;
        }
}


void product::DisplayProducts(){
    system("CLS");

    cout << "The Product ID is: " << Product_id<<endl;
    cout << "The Product_Name is: " << Product_Name<< endl;
    cout << "The Price is: " << Price<< endl;
    cout << "The Manufacturer is: " << Manufacturer<< endl;
    cout << "The Product expiration is: " << Expiration_date<< endl;
}


int main(){
    product product;

    product.DisplayProducts();


    return 0;
}
