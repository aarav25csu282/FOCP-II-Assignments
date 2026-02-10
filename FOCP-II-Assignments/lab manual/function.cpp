#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout<<"Student Management\n";
        cout << "1. Student Operations\n";
               cout << "2. Report\n";
               cout << "3. Exit\n";
               cout << "Enter your choice: ";
               cin >> choice;

               switch (choice) {
                       case 1:
                           cout << "Student Menu";
                           break;
                       case 2:
                           cout << "Report";
                           break;
                       case 3:
                           cout << "Exiting program";
                           break;
                       default:
                           cout << "invalid choice";}
               } while (choice != 3);

               return 0;
           }
