#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
int main ()
{ 
    int number_wins;
    int number_ties;
    int number_losses;
    int total_points;
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter the number of wins: ";
    cin >> number_wins;
    cout << endl;
    cout << "Enter the number of ties: " ;
    cin >> number_ties;
    cout << endl;
    cout << "Enter the number of losses: " ;
    cin >> number_losses;
    cout << endl;
    total_points = (number_wins * 2) + (number_ties * 1) - (number_losses * 1);
    cout << "Number of wins: "<< number_wins << endl;
    cout << "Number of ties: "<< number_ties << endl;
    cout << "Number of losses: "<< number_losses << endl;
    cout << "Total points: "<< total_points << endl;
    
    ofstream outfile;
    outfile.open("Lab1exam.txt", ios::app);
    outfile << "Number of wins: "<< number_wins << endl;
    outfile << "Number of ties: "<< number_ties << endl;
    outfile << "Number of losses: "<< number_losses << endl;
    outfile << "Total points: "<< total_points << endl;
    outfile.close();

    return 0;
}