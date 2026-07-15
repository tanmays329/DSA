// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;  

//     int i=1;
//     while(i<=n) {
//         int j=1;
//         while(j<=n) {
//             cout<<j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;  

//     int i=1;
//     while(i<=n) {
//         int j=1;
//         while(j<=n) {
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;

// }


// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;  
//     int row=1;
//     while(row<=n) {
//         int col=1;
//         while(col<=row) {
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }


   
//     return 0;

// }
    


// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>> n;

//     int row=1;
//     while(row<=n) {
//         int col=1;
//         int value =row;
//         while(col<=row) {
//             cout<<value;
//             value++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }
 
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch= 'A'+i-1;
//             cout<<ch;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch= 'A'+j-1;
//             cout<<ch;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch= 'A'+i+j-2;
//             cout<<ch;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch= 'A'+i-1;
//             cout<<ch;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch= 'A'+i+j-2;
//             cout<<ch;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//          char ch= 'A'+n-i;
//         while(j<=i){
           
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int space = n-i;
//         while(space) {
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }    
//         cout<< endl;
//         i++;
//     }


//     return 0;
// }


#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=n-i;
        while(space) {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        int start = i-1;
        while(start) {
            cout<<start;
            start--;
        }
        cout<< endl;
        i++;
    }
    
    


    return 0;
}