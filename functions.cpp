// #include<iostream>
// using namespace std;

// int power(int a, int b) {
//     int ans=1;
//     for(int i=1;i<=b;i++) {
//         ans=ans*a;
//     }
//     return ans;
// }

// int main() {
//     int a,b;
//     cin>>a>>b;

//     int answer = power(a,b);
//     cout<<answer;

//     return 0;
// }

// #include<iostream>
// using namespace std;    

// bool isEven(int a) {
//     if(a&1) {
//         return 0;
//     }
//     else {
//         return 1;
//     }
// }

// int main() {

//     int num;
//     cin>>num;
//     bool result = isEven(num);
//     if(result) {
//         cout<<"Even";
//     }
//     else {
//         cout<<"Odd";
//     }
// }


#include<iostream>
using namespace std;

void print(int n) {
    for(int i=1;i<=n;i++) {
        cout<<i<<endl;
    }
}
int main () {
    int n;
    cin>>n;
    print(n);
}