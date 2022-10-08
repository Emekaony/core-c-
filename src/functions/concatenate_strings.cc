#include <iostream>
using namespace std;

string concatenate(const string& a, const string& b) {
    int s1_length = a.length();
    int s2_length = b.length();

    cout << "Size of string a == " << s1_length << "\n" \
    << "Size of string b == " << s2_length << "\n";

    // if there are of different lengths, return 'NO'
    // else, return the concatenated value
    if (s1_length != s2_length) {
        string message = "NO";
        return message;
    }

    return a + b;
}

int main() {
    string s1 = "Emeka";
    string s2 = "Chidera";

    cout << concatenate(s1, s2) << "\n";

    return 0;
}