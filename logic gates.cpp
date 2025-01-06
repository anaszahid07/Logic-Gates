#include <iostream>
using namespace std;

int main() {
	int num1,num2,choice;
    char retry;
    do{
        cout << "Which operation you want to do?" << endl;
        cout << "1-AND" << endl;
        cout << "2-OR" << endl;
        cout << "3-NAND" << endl;
        cout << "4-Xor" << endl;
        cout << "Entre your choice:(1-4) " << endl;
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "invalid" << endl;
            return 0;
        }
        cout << "Entre two numbers in binary form: " << endl;
        cin >> num1;
        cin >> num2;

        if ((num1 != 1 && num1 != 0) || (num2 != 0 && num2 != 1)) {
            cout << "invalid" << endl;
            return 0;
        }   
        switch (choice) {
        case 1:
            cout <<  num1 << " AND " << num2 << " = " << (num1 & num2) << endl;
            break;
        case 2:
            cout << num1 << " OR " << num2 << " = " << (num1 | num2) << endl;
            break;
        case 3:
            cout <<  num1 << " NAND " << num2 << " = " << !(num1 & num2) << endl;
            break;
        case 4:
            cout <<  num1 << " XOR " << num2 << " = " << (num1 ^ num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
        }
        cout << "Do you want to perform another operation?: ";
        cin >> retry;
    } while (retry == 'y');

}