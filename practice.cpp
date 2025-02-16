#include<iostream>
using namespace std;
 
struct employee{
    int eId;
    char favChar;
    int age;
    float salary;

};

int main(){
    struct employee zaynab;
    zaynab.eId = 1;
    zaynab.favChar = 'a';
    zaynab.age = 25;
    zaynab.salary = 15000000;
    
    cout<<"The employee id is "<<zaynab.eId<<endl;
    cout<<"The fav char is "<<zaynab.favChar<<endl;
    cout<<"The age is "<<zaynab.age<<endl;
    cout<<"The salary is "<<zaynab.salary<<endl;

 return 0;   
}

