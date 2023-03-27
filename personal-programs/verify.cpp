// Name: Isaac Lal

#include <iostream>
using namespace std;

int main() {
    cout << "Hey there!\n" << endl;

    int num1, num2, num3;
    string answer;

    cout << "Please enter your first number: ";
    cin >> num1;
    cout << "Please enter your second number: ";
    cin >> num2;
    cout << "Please enter your third number: ";
    cin >> num3;

    if(num1 > num2 && num1 > num3) {
        cout << "\nIs the greatest number of the three " << num1 << "? (Yes/No): ";
        cin >> answer;

        if(answer == "Yes") {
            cout << "\nYes, the program works!" << endl;
        } else if(answer == "No") {
            cout << "\nThis program sucks :(" << endl;
        } else {
            while(answer != "Yes" || answer != "No") {
                cout << "That is not a \"Yes\" or \"No\" answer, please try again.\n" << endl;

                cout << "\nIs the greatest number of the three " << num1 << "? (Yes/No): ";
                cin >> answer;

                if(answer == "Yes") {
                    cout << "\nYay, the program works!" << endl;
                    break;
                } else if(answer == "No") {
                    cout << "\nThis program sucks :(" << endl;
                    break;
                }
            }
        }
    } else if(num2 > num1 && num2 > num3) {
        cout << "\nIs the greatest number of the three " << num2 << "? (Yes/No): ";
        cin >> answer;

        if(answer == "Yes") {
            cout << "\nYay, the program works!" << endl;
        } else if(answer == "No") {
            cout << "\nThis program sucks :(" << endl;
        } else {
            while(answer != "Yes" || answer != "No") {
                cout << "That is not a \"Yes\" or \"No\" answer, please try again.\n" << endl;

                cout << "\nIs the greatest number of the three " << num2 << "? (Yes/No): ";
                cin >> answer;

                if(answer == "Yes") {
                    cout << "\nYay, the program works!" << endl;
                    break;
                } else if(answer == "No") {
                    cout << "\nThis program sucks :(" << endl;
                    break;
                }
            }
        }
    } else if(num3 > num1 && num3 > num2) {
        cout << "\nIs the greatest number of the three " << num3 << "? (Yes/No): ";
        cin >> answer;

        if(answer == "Yes") {
            cout << "\nYes, the program works!" << endl;
        } else if(answer == "No") {
            cout << "\nThis program sucks :(" << endl;
        } else {
            while(answer != "Yes" || answer != "No") {
                cout << "That is not a \"Yes\" or \"No\" answer, please try again.\n" << endl;

                cout << "\nIs the greatest number of the three " << num3 << "? (Yes/No): ";
                cin >> answer;

                if(answer == "Yes") {
                    cout << "\nYes, the program works!" << endl;
                    break;
                } else if(answer == "No") {
                    cout << "\nThis program sucks :(" << endl;
                    break;
                }
            }
        }
    }

    return 0;
}