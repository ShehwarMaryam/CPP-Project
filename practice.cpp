#include<iostream>
using namespace std;
 
struct Smartphone{
    string name;
    int storage;
    string color;
    float price;

};

void printSmartphoneInfo(Smartphone smartphone1){
    cout<<"The name of the smartphone is "<<smartphone1.name<<endl;
    cout<<"The storage of the smartphone is "<<smartphone1.storage<<endl;
    cout<<"The color of the smartphone is "<<smartphone1.color<<endl;
    cout<<"The price of the smartphone is "<<smartphone1.price<<endl;
}
int main(){
    Smartphone smartphone1;
    smartphone1.name = "Samsung Galaxy S21";
    smartphone1.storage = 128;
    smartphone1.color = "Phantom Gray";
    smartphone1.price = 799.99;
    printSmartphoneInfo(smartphone1);
    
   
 return 0;   
}

