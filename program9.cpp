#include <iostream>
using namespace std;

class ATM {
private:
    int correctPIN;
    int enteredPIN;
    int attempts;

public:
    // Constructor
    ATM() {
        correctPIN = 1234;  // Default PIN
        attempts = 0;
    }

    // Function to authenticate user
    void authenticate() {
        while (attempts < 3) {
            cout << "Enter your PIN: ";
            cin >> enteredPIN;

            if (enteredPIN == correctPIN) {
                cout << "Access Granted! Welcome to your account.\n";
                return;
            } else {
                attempts++;
                cout << "Incorrect PIN. Attempts left: " << 3 - attempts << endl;
            }
        }

        cout << "Card Blocked! Too many incorrect attempts.\n";
    }
};

int main() {
    ATM user1;  // Create ATM object
    user1.authenticate();  // Call authentication function
    return 0;
}