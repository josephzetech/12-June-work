/* Name: Joseph Mwangi
   REGISTRATION NO: BBIT-01-0022/2025
   Last Question of the day on emp */



#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int idNumber;
    string name;
    string occupation;

   
    int getDetails() {
        cout << "Enter ID Number: ";
        cin >> idNumber;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Occupation: ";
        getline(cin, occupation);

        
    }

    
    int display() {
        cout << "\n--- Employee Details ---\n";
        cout << "Zetech University Employee\n";
        cout << "ID Number   : " << idNumber << endl;
        cout << "Name        : " << name << endl;
        cout << "Occupation  : " << occupation << endl;

        
    }
};

int main() {
    Employee emp; 

    emp.getDetails(); 
    emp.display();    

    return 0;
}

