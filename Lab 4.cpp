#include <iostream>
#include <iomanip>
using namespace std;
void getattemptsandcompletes(int& attempts,int& completes,int yards=26);
int main() 
{ 
  int num15attempts, num15completes;
  int num25attempts, num25completes;
  int num25andmoreattempts, num25andmorecompletes;
  getattemptsandcompletes(num15attempts, num15completes, 15);
  getattemptsandcompletes(num25attempts, num25completes,25);
  getattemptsandcompletes(num25andmoreattempts,num25andmorecompletes);
  double percent15 = static_cast<double>(num15completes) / num15attempts;
  double percent25 = static_cast<double>(num25completes) / num25attempts;
  double percentgreaterthan25 = static_cast<double>(num25andmorecompletes) / num25andmoreattempts;

    cout << "Percentage of passing between 0-15 yards: " << percent15 << endl;
    cout << "Percentage of passing between 16-25 yards: " << percent25 << endl;
    cout << "Percentage of passing more than 25 yards: " << percentgreaterthan25 << endl;



   
  return 0;
}
void getattemptsandcompletes(int& attempts,int& completes,int yards)
{
      
  cout << fixed << showpoint << setprecision(2);

       if (yards == 15) {

             cout << "Enter number of attempts followed by completes from 0-15 yards: " << endl;

       }

       else if (yards == 25) {

             cout << "Enter number of attempts followed by completes from 16-25 yards: " << endl;

       }

       else if (yards>25) { 

             cout << "Enter number of attempts followed by completes from more than 25 yards: " << endl;

       }

       cin >> attempts >> completes;

       if (completes > attempts)

       {
           
             cout << "Please re-enter valid values." << endl;
             cin >> attempts >> completes;

       }

      
}






