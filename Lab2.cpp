#include <iostream>
using namespace std;

#include <iomanip>
    const double rtp_raise = 0.05;
    const double west_raise = 0.03;
    const double piedmont_raise = 0.02;
    const double outerbank_raise = 0.03;
    const double sandhills_raise = 0.1;
int main ()
{ 
    cout << fixed << showpoint << setprecision(2);
    char RTP = 'R';
    char west = 'W';
    char pied = 'P';
    char outer = 'B';
    char sand = 'S';
    string Location;
    double CurrentSalary;
    double NewSalary;
    string Lastname;
    char UserInput;
    cout << "Enter your last name:";
    cin >> Lastname;
    cout << "Enter your region code:";
    cin >> UserInput;
    if (UserInput == 'R'){
        cout << "Enter current salary:";
        cin >> CurrentSalary;
        cout << endl;
        NewSalary = (rtp_raise * CurrentSalary) + CurrentSalary;
        Location = "RTP";
        cout << "Employee last name: " << Lastname << endl;
        cout << "Region code is: " << RTP << endl;
        cout << "Region location: " << Location << endl;
        cout << "Current salary: " << '$'<< CurrentSalary << endl;
        cout << "New salary: " << '$'<< NewSalary << endl;
    }
    else if (UserInput == 'W'){
        cout << "Enter current salary:";
        cin >> CurrentSalary;
        cout << endl;
        NewSalary = (west_raise * CurrentSalary) + CurrentSalary;
        Location = "Western Carolina";
        cout << "Employee last name: " << Lastname << endl;
        cout << "Region code is: " << west << endl;
        cout << "Region location: " << Location << endl;
        cout << "Current salary: " << '$'<< CurrentSalary << endl;
        cout << "New salary: " << '$'<< NewSalary << endl;
    }
    else if (UserInput == 'P'){
        cout << "Enter current salary:";
        cin >> CurrentSalary;
        cout << endl;
        NewSalary = (piedmont_raise * CurrentSalary) + CurrentSalary;
        Location = "Piedmont";
        cout << "Employee last name: " << Lastname << endl;
        cout << "Region code is: " << pied << endl;
        cout << "Region location: " << Location << endl;
        cout << "Current salary: " << '$'<< CurrentSalary << endl;
        cout << "New salary: " << '$'<< NewSalary << endl;
    }
    else if (UserInput == 'B'){
        cout << "Enter current salary:";
        cin >> CurrentSalary;
        cout << endl;
        NewSalary = (outerbank_raise * CurrentSalary) + CurrentSalary;
        Location = "Outer Banks";
        cout << "Employee last name: " << Lastname << endl;
        cout << "Region code is: " << outer << endl;
        cout << "Region location: " << Location << endl;
        cout << "Current salary: " << '$'<< CurrentSalary << endl;
        cout << "New salary: " << '$' << NewSalary << endl;
    }
   else if (UserInput == 'S'){
        cout << "Enter current salary:";
        cin >> CurrentSalary;
        cout << endl;
        NewSalary = (sandhills_raise * CurrentSalary) + CurrentSalary;
        Location = "Sandhills";
        cout << "Employee last name: " << Lastname << endl;
        cout << "Region code is: " << sand << endl;
        cout << "Region location: " << Location << endl;
        cout << "Current salary: " << '$'<< CurrentSalary << endl;
        cout << "New salary: " << '$'<< NewSalary << endl;
    }
    else {
        
        cout << "Enter current salary:";
        cin >> CurrentSalary;
        cout<< '\n'<< endl;
        Location = "Building Code Error";
        cout << "Employee last name: " << Lastname << endl;
        cout << "Region code is: " << UserInput << endl;
        cout << "Region location: " << Location << endl;
        cout << "Current salary: " << '$'<< CurrentSalary << endl;
        cout << "New salary: " << '$'<< CurrentSalary << endl;
    }
    
    
    return 0;
}