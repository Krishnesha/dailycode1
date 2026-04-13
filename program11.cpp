#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class PasswordValidator {
private:
    string password;

public:
    // Setter method (Encapsulation)
    void setPassword(string p) {
        password = p;
    }

    // Function to check strength
    void checkStrength() {
        int length = password.length();
        bool hasUpper = false, hasLower = false;
        bool hasDigit = false, hasSpecial = false;

        for (char ch : password) {
            if (isupper(ch)) hasUpper = true;
            else if (islower(ch)) hasLower = true;
            else if (isdigit(ch)) hasDigit = true;
            else hasSpecial = true;
        }

        // Strength logic
        if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
            cout << "✅ Strong Password" << endl;
        }
        else if (length >= 6 && (hasUpper || hasLower) && hasDigit) {
            cout << "⚠️ Medium Password" << endl;
        }
        else {
            cout << "❌ Weak Password" << endl;
        }
    }
};

int main() {
    PasswordValidator obj;
    string pass;

    cout << "Enter password: ";
    getline(cin, pass);

    obj.setPassword(pass);
    obj.checkStrength();

    return 0;
}