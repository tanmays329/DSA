// #include <iostream>
// using namespace std;
// int main() {
//    int n;
//    cin >> n;
//    if(n<0) {
//     cout<< "Negative number" << endl;
//    }
//    else if(n>0) {
//     cout<< "Positive number" << endl;
//    }
//    else {
//     cout<< "Zero" << endl;
//    }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int i=1;
//     while(i<=n) {
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int i=1;
//     int sum=0;
//     while(i<=n) {
//         sum+=i;
//         i++;
//     }
//     cout<< "value of sum is "<<sum<<endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int i=2;
//     while(i<n) {
//         if(n%i==0) {
//             cout<< "Not prime"<<endl;
           
//         }
//         else {
//             cout<< "Prime"<<endl;
//         }
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  

//     int i=1;
//     while(i<=n) {
//         int j=1;
//         while(j<=n) {
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n) {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}