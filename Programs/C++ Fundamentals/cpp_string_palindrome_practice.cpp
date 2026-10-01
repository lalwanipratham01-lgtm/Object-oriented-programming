#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int left = 0;
    int right = str.length() - 1;
    bool palindrome = true;

    while (left < right) {
        if (str[left] != str[right]) {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    cout << (palindrome ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}