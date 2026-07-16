
// bitwise operators in C++

// #include<iostream>
// using namespace std;

// int main() {
//     int a=4;
//     int b=6;

//     cout<<"a&b: "<<(a&b)<<endl;
//     cout<<"a|b:"<< (a|b)<<endl;
//     cout<<"a^b: "<<(a^b)<<endl;
//     cout<<"~a: "<<(~a)<<endl;


//     cout<<"5<<1: "<<(5<<1)<<endl;
//     cout<<"5>>1: "<<(5>>1)<<endl;


    
// }

// a&b: 4
// a|b:6
// a^b: 2
// ~a: -5


// left shift operator and right shift operator
// 5<<1 = 10
// 5>>1 = 2


// for loop  
// #include<iostream>
// using namespace std;    

// int main() {

// for(int i=0;i<5;i++) {
//     cout<<i<<endl;
// }
// }


// fibonacci series
// #include<iostream>   
// using namespace std;

// int main(){
    
//     int n1=0,n2=1,n3,i,number;    
//     cout<<"Enter the number of elements: ";    
//     cin>>number;    
//     cout<<n1<<" "<<n2<<" "; //printing 0 and 1    

//     for(i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
//     {    
//         n3=n1+n2;    
//         cout<<n3<<" ";    
//         n1=n2;    
//         n2=n3;    
//     }
// }


// break and continue statement
// #include<iostream>
// using namespace std;
// int main() {
//     for(int i=0;i<10;i++) {
//         if(i==4) {
//             break;
//         }
//         cout<<i<<endl;
//     }

//     for(int i=0;i<10;i++) {
//         if(i==4) {
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }


//  variable scope in C++

// #include<iostream>
// using namespace std;

// int main() {
//     int a=10; // local variable
//     cout<<"a: "<<a<<endl;

//     if(true) {
//         int a=20; // local variable in if block
//         cout<<"a: "<<a<<endl;
//     }
//     return 0;
// }


// operator precedence
// use brackets to avoid confusion


