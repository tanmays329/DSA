#include <bits/stdc++.h>
using namespace std;

char tolowerCase(char ch) {
    if(ch >= 'a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[], int n) {
    int s=0;
    int e= n-1;

    while(s<e) {
        if(tolowerCase(name[s]) != tolowerCase(name[e])) {
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

void reverse(char name[], int n) {
    int s=0;
    int e=n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
} 

int getLength(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}
int main() {
    char name[20];
    cout << "Enter your name: ";
    cin.getline(name, 20);
    int length = getLength(name);
    cout << "Length of your name: " << length << endl;
    reverse(name, length);
    cout << "Reversed name: " << name << endl;


    cout << "Palindrome or not: " << checkPalindrome(name, length) << endl;


}


// valid palindrome
// class Solution {
// private: 
//     bool valid(char ch) {
//         if ((ch >= 'a' && ch <= 'z') || 
//             (ch >= 'A' && ch <= 'Z') || 
//             (ch >= '0' && ch <= '9')) {
//             return true;
//         }
//         return false;
//     }

//     char toLowercase(char ch) {
//         if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
//             return ch; // already lowercase or digit
//         }
//         else {
//             return ch - 'A' + 'a'; // convert uppercase to lowercase
//         }
//     }

//     bool checkPalindrome(string a) {
//         int s = 0;
//         int e = a.length() - 1;

//         while (s <= e) {
//             if (a[s] != a[e]) {
//                 return false;
//             }
//             s++;
//             e--;
//         }
//         return true;
//     }

// public:
//     bool isPalindrome(string s) {
//         string temp = "";
//         for (int j = 0; j < s.length(); j++) {
//             if (valid(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }
//         for (int j = 0; j < temp.length(); j++) {
//             temp[j] = toLowercase(temp[j]);
//         }
//         return checkPalindrome(temp);
//     }
// };



