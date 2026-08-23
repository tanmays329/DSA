// /*
//     Time Complexity: O(K * M)
//     Space complexity: O(1),

//     where 'K' is the sum of the time required to study all the chapters 
//     and 'M' is the number of chapters.
// */

// long long ayushGivesNinjatest(int n, int m, vector<int> time)
// {

//     long long sum = 0;

//     int maxTime = INT_MIN;

//     // We will iterate through all the chapters and calculate the sum and maximum time.
//     for (int i = 0; i < m; i++)
//     {
//         sum += time[i];
//         maxTime = max(maxTime , time[i]);
//     }

//     // We will iterate through all the possible values of answer.
//     for (int i = maxTime; i <= sum; i++)
//     {
        
//         long long days = 1;
//         long long currentTime = 0;

//         for (int j = 0; j < m; j++)
//         {
//             currentTime += time[j];
//             if (currentTime > i)
//             {
//                 days++;
//                 currentTime = time[j];
//             }

//         }

//         // If the days required to study all the chaptes is less than or equal to n than answer is possible and we will return it.
//         if (days <= n)
//         {
//             return i;
//         }

//     }

//     return -1;
// }



// agressive cows

// bool ispossible(vector<int> &stalls, int k, int mid) {
//     int cowCount = 1;
//     int lastPos = stalls[0]; 

//     for( int i=0; i<stalls.size(); i++) {

//         if(stalls[i]- lastPos >= mid) {
//             cowCount++;
//             if (cowCount==k) {
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;

// }





// int aggressiveCows(vector<int> &stalls, int k)
// {
//     //    Write your code here.
//     sort(stalls.begin(), stalls.end());
//     int s = 0;

//     int maxi = -1;
//     for (int i = 0; i<stalls.size(); i++) {
//         maxi = max(maxi, stalls[i]);
//     }
//     int e = maxi;
//     int ans = -1;

//     int mid = s+(e-s)/2;

//     while(s <=e) {

//         if(ispossible(stalls, k, mid)) {
//             ans = mid;
//             s = mid+1;
//         }
//         else {
//             e = mid-1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;

// }