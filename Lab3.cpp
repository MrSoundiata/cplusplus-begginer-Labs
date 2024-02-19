#include <iostream>
using namespace std;

#include <iomanip>
    const double meatball = 6.99;
    const double italian = 9.99;
    const double veggie= 5.99;
    const double special = 12.99;
    const double tax = 0.06;
int main ()
{ 
    cout << fixed << showpoint << setprecision(2);
    int order_number;
    int how_many;
    double subtotal= 0;
    double taxtotal= 0;
    double total = 0;
    do {
        cout<<"1) Meatball Sub [Price: $6.99]" << endl;
         cout<<"2) Italian Sub [Price: $9.99]" << endl;
          cout<<"3) Veggie Sub [Price: $5.99]" << endl;
           cout<<"4) Special Belly Buster Sub [Price: $12.99]" << endl;
           cout<<"Please enter your order number (1/2/3/4) or enter -1 to calculate total: ";
           cin>> order_number;
           if (order_number != -1) {
            cout << "How many? ";
            cin >> how_many;
            cout << endl;
          switch (order_number)
          {
          case 1:
            subtotal += (how_many * meatball);
            break;
          case 2:
            subtotal += (how_many * italian);
            break;
          case 3:
            subtotal += (how_many * veggie);
            break;
          case 4:
            subtotal += (how_many * special);
            break;
          
          }
           } 
        } while (order_number != -1); {
             taxtotal = subtotal * tax; 
             total = subtotal + taxtotal;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Tax : $" << taxtotal << endl;
            cout<< "Total: $" << total<< endl;
        }
    return 0;
}