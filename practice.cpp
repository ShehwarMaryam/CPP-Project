#include<iostream>
using namespace std;
 
struct Person{
    char name[100];
    int age;
    double salary;
};

int main(){
    Person p1;
    cout<<"Enter persons details"<<endl;

    cout<<"Perons Name:"<<endl;
    cin.getline(p1.name, 100);

    cout<<"Person Age:"<<endl;
    cin>>p1.age;

    cout<<"Person Salary:"<<endl;
    cin>>p1.salary;

    cout<<"Person Details are:"<<endl;

    cout<<"Name:"<<p1.name<<endl;
    cout<<"Age:"<<p1.age<<endl;
    cout<<"Salary:"<<p1.salary<<endl;

 return 0;   
}

