// pivot
 
// #include<iostream>
// using namespace std;

// int getPivot(int arr[], int n) {
//     int s=0;
//     int e=n-1;
//     int mid = s + (e-s)/2;


//     while(s<e) {
//         if(arr[mid] >= arr[0]) {
//             s = mid+1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main() {
//     int arr[5] = {3, 8, 10, 17, 1};
//     cout<<"Pivot is: "<<getPivot(arr, 5);
//     return 0;
// }





// search in rotated sorted array

// int getPivot(vector<int>& arr, int n) {
//     int s = 0;
//     int e = n-1;
//     int mid = s+(e-s)/2;

//     while(s<e) {

//         if (arr[mid] >= arr[0]) {
//             s = mid+1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s+(e-s)/2;

//     }
//     return s;

// } 


// int binarySearch(vector<int>& arr, int s, int e, int key) {

//     int start = s;
//     int end = e;

//     int mid = start + (end-start)/2;

//     while(start<= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }
//         if(key > arr[mid]) {
//             start = mid+1;
//         }
//         else {
//             end = mid-1;
//         }
//         mid = start + (end-start)/2;    
//     }
//     return -1;
// }



// int search(vector<int>& arr, int n, int k)
// {
//     // Write your code here.
//     // Return the position of K in ARR else return -1.
//     int pivot = getPivot(arr, n);
//     if (k >= arr[pivot] && k <= arr[n-1]) {
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else {
//         return binarySearch(arr, 0, pivot -1, k);
//     }


// }


// sqrt

#include <bits/stdc++.h>
using namespace std;

long long int sqrtInteger(int n) {
    int s = 0;
    int e = n;
    long long int ans = -1;

    while (s <= e) {
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n) {
            return mid;
        }
        else if (square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    return ans;
}

double moreprecision(int n, int precision, int tempsol) {
    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int tempsol = sqrtInteger(n);

    cout << moreprecision(n, 3, tempsol);

    return 0;
}