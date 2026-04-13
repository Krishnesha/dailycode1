#include <iostream>
#include <string>
using namespace std;

class EmailChecker {
private:
    string sender;
    string subject;
    string content;

public:
    // Setter methods (Encapsulation)
    void setEmailDetails(string s, string sub, string c) {
        sender = s;
        subject = sub;
        content = c;
    }

    // Function to check phishing
    void checkEmail() {
        int score = 0;

        // Rule 1: Suspicious sender
        if (sender.find("@gmail.com") == string::npos &&
            sender.find("@yahoo.com") == string::npos) {
            score++;
        }

        // Rule 2: Urgent words
        if (subject.find("urgent") != string::npos ||
            subject.find("win") != string::npos ||
            subject.find("free") != string::npos) {
            score++;
        }

        // Rule 3: Suspicious links
        if (content.find("http://") != string::npos ||
            content.find("click here") != string::npos) {
            score++;
        }

        // Result
        if (score >= 2) {
            cout << "⚠️ This email is likely PHISHING!" << endl;
        } else {
            cout << "✅ This email appears LEGITIMATE." << endl;
        }
    }
};

int main() {
    EmailChecker email;

    string sender, subject, content;

    cout << "Enter sender email: ";
    getline(cin, sender);

    cout << "Enter subject: ";
    getline(cin, subject);

    cout << "Enter email content: ";
    getline(cin, content);

    email.setEmailDetails(sender, subject, content);
    email.checkEmail();

    return 0;
}