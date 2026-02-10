#include <iostream>
using namespace std;

void mainMenu();
void studentMenu();
void reportMenu();

int main() {
    mainMenu();
    return 0;
}

void mainMenu() {
    int choice;
    do {
        cout << "\nStudent Management System\n";
        cout << "1. Student Operations\n";
        cout << "2. Reports\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                studentMenu();
                break;
            case 2:
                reportMenu();
                break;
            case 3:
                cout << "exiting\n";
                break;
            default:
                cout << "inavlid\n";
        }
    } while (choice != 3);
}

void studentMenu() {
    int ch;
    do {
        cout << "\nStudent Menu\n";
        cout << "1. Add Student\n";
        cout << "2. Enter Marks\n";
        cout << "3. View Student\n";
        cout << "4. Back\n";
        cout << "Enter option: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Add student selected\n";
                break;
            case 2:
                cout << "Marks entry selected\n";
                break;
            case 3:
                cout << "Showing student details\n";
                break;
            case 4:
                cout << "Going back\n";
                break;
            default:
                cout << "Invalid\n";
        }
    } while (ch != 4);
}

void reportMenu() {
    int op;
    do {
        cout << "\nReport Menu\n";
        cout << "1. Class Average\n";
        cout << "2. Top Scorer\n";
        cout << "3. Result Summary\n";
        cout << "4. Back\n";
        cout << "Enter option: ";
        cin >> op;

        switch (op) {
            case 1:
                cout << "Class average selected\n";
                break;
            case 2:
                cout << "Top scorer selected\n";
                break;
            case 3:
                cout << "Result summary selected\n";
                break;
            case 4:
                cout << "Returning main menu\n";
                break;
            default:
                cout << "invalid\n";
        }
    } while (op != 4);
}
