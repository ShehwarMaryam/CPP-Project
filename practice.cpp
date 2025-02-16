#include<iostream>
using namespace std;

struct Address {
    string street;
    string city;
    string state;
    int zipCode;
};

struct Student {
    string name;
    int age;
    Address address;  // Nested struct
};

struct School {
    string name;
    string principal;
    Student students[3];  // Array of Student structs
};

void printSchoolInfo(School school) {
    cout << "School Name: " << school.name << endl;
    cout << "Principal: " << school.principal << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " Name: " << school.students[i].name << endl;
        cout << "Student " << i + 1 << " Age: " << school.students[i].age << endl;
        cout << "Student " << i + 1 << " Address: " 
             << school.students[i].address.street << ", "
             << school.students[i].address.city << ", "
             << school.students[i].address.state << ", "
             << school.students[i].address.zipCode << endl;
    }
}

int main() {
    School mySchool;

    mySchool.name = "Green Valley High";
    mySchool.principal = "Mr. Smith";

    // Initialize the students
    mySchool.students[0].name = "John Doe";
    mySchool.students[0].age = 15;
    mySchool.students[0].address = {"123 Elm St", "Green Valley", "CA", 12345};

    mySchool.students[1].name = "Jane Smith";
    mySchool.students[1].age = 16;
    mySchool.students[1].address = {"456 Oak St", "Green Valley", "CA", 12346};

    mySchool.students[2].name = "Alex Johnson";
    mySchool.students[2].age = 14;
    mySchool.students[2].address = {"789 Pine St", "Green Valley", "CA", 12347};

    printSchoolInfo(mySchool);

    return 0;
}
