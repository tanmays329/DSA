// find unique

// int findUnique(int *arr, int size)
// {
//     //Write your code here

//     int ans = 0;

//     for (int i=0; i<size; i++) {
//         ans = ans^arr[i];
//     }
//     return ans;

// }


// no. of unique occurrences

// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         sort(arr.begin(), arr.end());

//         vector<int> v;
//         int count =1;

//         for (int i=1; i<arr.size(); i++) {
//             if( arr[i]==arr[i-1]) {
//                 count++;

//             } else{
//                 v.push_back(count);
//                 count=1;
//             }
//         }
//         v.push_back(count);

//         sort(v.begin(), v.end());

//         for(int i=1; i<v.size(); i++){
//             if(v[i] == v[i-1]) {
//                 return false;
//             }
//         }
//         return true;

        
//     }
// };

//  duplicate number in array

// int findDuplicate(vector<int> &arr) 
// {
//     // Write your code here
//     int ans=0;

//     for(int i=0; i<arr.size(); i++){
//         ans=ans^arr[i];
//     }

//     for (int i=0; i< arr.size(); i++) {
//         ans= ans^i;
//     }
//     return ans;
   
// }


//  Intersection Of Two Sorted Arrays

// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.
// 	int i=0, j=0;

// 	vector<int> ans;

// 	while(i<n && j<m) {

// 		if(arr1[i] == arr2[j]) {
// 			ans.push_back(arr1[i]);
// 			i++;
// 			j++;
// 		}
// 		else if (arr1[i]< arr2[j]) {
// 			i++;
// 		}else{
// 			j++;
// 		}
// 	}
// 	return ans;

// }

// pair sum

// #include <bits/stdc++.h>

// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.

//    vector< vector<int> > ans;

//    for(int i = 0; i<arr.size(); i++) {

//       for(int j = i+1; j<arr.size(); j++) {
//          if(arr[i] +arr[j] == s) {

//             vector<int> temp;
//             temp.push_back(min(arr[i], arr[j]));
//             temp.push_back(max(arr[i], arr[j]));
//             ans.push_back(temp);         }
//       }
//    } 
//    sort(ans.begin(), ans.end());
//    return ans;
// }