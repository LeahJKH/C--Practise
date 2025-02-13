#include <iostream>
using namespace std;

// Function Prototypes
int nextNum();
char decider();

int main() {
    int num;
    cout << "Insert number one: ";
    cin >> num;
    cout << "Your number is " << num << "\n";

    int secondNumber = nextNum(); 

    cout << "You entered: " << secondNumber << " as the second number.\n";

    char op = decider(); 

    if (op == '+') {
        cout << "Result: " << num << " + " << secondNumber << " = " << (num + secondNumber) << endl;
    } else if (op == '-') {
        cout << "Result: " << num << " - " << secondNumber << " = " << (num - secondNumber) << endl;
    } else {
        cout << "Invalid operation. Exiting.\n";
    }

    return 0;
}

int nextNum() {
    int num2;
    cout << "Insert number two: ";
    cin >> num2;
    cout << "Your second number is " << num2 << "\n";
    return num2;
}

char decider() {
    char operation;
    cout << "Do you want to add (+) or subtract (-)? ";
    cin >> operation;

    if (operation == '+' || operation == '-') {
        return operation;
    } else {
        cout << "Invalid choice. Defaulting to addition.\n";
        return '+';
    }
}
