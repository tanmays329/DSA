// STL Implementation

// container in STL: array, vector, deque, list, stack, queue, priority_queue, set, map
// 1. Array

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     array<int,4> a = {1,2,3,4};

//     int size = a.size();
//     cout << "Size of array: " << size << endl;

//     for(int i=0; i<size; i++) {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     cout << "element at 2nd index: " << a.at(2) << endl;

//     cout << "Empty or not: " << a.empty() << endl;


//     cout << "First element: " << a.front() << endl;
//     cout << "Last element: " << a.back() << endl;

//     return 0;
// }


// 2. Vector
//  #include <bits/stdc++.h>
// using namespace std;

// int main () {

//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     // v.push_back(4);

//     v.capacity();
//     cout << "Capacity: " << v.capacity() << endl;

//     v.size();
//     cout << "Size: " << v.size() << endl;

//     cout << "Element at 2nd index: " << v.at(2) << endl;

//     cout << "First element: " << v.front() << endl;
//     cout << "Last element: " << v.back() << endl;

//     v.pop_back();
//     cout << "After pop back, last element: " << v.back() << endl;

//     v.clear();
//     cout << "After clear, size: " << v.size() << endl;


//     vector<int> v1(5, 1); // 5 elements with value 1
//     cout << "Vector v1: ";
//     for(int i=0; i<v1.size(); i++) {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     vector<int> v2(v1); // copy of v1
//     cout << "Vector v2 (copy of v1): ";
//     for(int i=0; i<v2.size(); i++) {
//         cout << v2[i] << " ";
//     }
//     cout << endl;

// }



// 3. Deque
// #include <bits/stdc++.h>
// using namespace std;    
// int main() {
//     deque<int> d;

//     d.push_back(1);
//     d.push_front(2);
//     d.push_back(3);

//     for(int i:d) {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "First element: " << d.at(0) << endl;
//     cout << "Last element: " << d.at(d.size()-1) << endl;

//     cout << "Empty or not: " << d.empty() << endl;

//     cout << "Size: " << d.size() << endl;

//     cout << "Front element: " << d.front() << endl;
//     cout << "Back element: " << d.back() << endl;

//     d.erase(d.begin(), d.begin()+1);
//     cout << "After erase, first element: " << d.front() << endl;



// }


// 4. List
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     list<int> l;
//     l.push_back(1);
//     l.push_back(2);
//     l.push_back(3);
//     l.push_front(0);

//     for(int i:l) {
//         cout << i << " ";
//     }
//     cout << endl;

//     return 0;

//     l.erase(l.begin());
//     cout << "After erase" <<endl;

//     for(int i:l) {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Size: " << l.size() << endl;
// }


// 5.stack

// #include <bits/stdc++.h>
// using namespace std;    
// int main() {
//     stack<string> s;
//     s.push("Tanmay");
//     s.push("Singh");
//     s.push("20");

//     cout << "Top element: " << s.top() << endl;

//     s.pop();
//     cout << "After pop, top element: " << s.top() << endl;
    
//     cout << "Size: " << s.size() << endl;
//     cout << "Empty or not: " << s.empty() << endl;
// }


// 6. Queue
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     queue<string> q;
//     q.push("Tanmay");
//     q.push("Singh");
//     q.push("20");

//     cout << "Front element: " << q.front() << endl;
//     cout << "Back element: " << q.back() << endl;

//     q.pop();
//     cout << "After pop, front element: " << q.front() << endl;

//     cout << "Size: " << q.size() << endl;
//     cout << "Empty or not: " << q.empty() << endl;
// }



// 7. Priority Queue
// #include <bits/stdc++.h>
// using namespace std;    
// int main() {
    
//     priority_queue<int> maxi; // max heap
//     priority_queue<int, vector<int>, greater<int>> mini; // min heap

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);

//     int n = maxi.size();
//     for(int i=0; i<n; i++) {
//         cout << maxi.top() << " ";
//         maxi.pop();
//     }
//     cout << endl;

//     mini.push(5);
//     mini.push(1);
//     mini.push(3);

//     int m = mini.size();
//     for(int i=0; i<m; i++) {
//         cout << mini.top() << " ";
//         // mini.pop();
//     }
//     cout << endl;

//     cout << "Size of mini: " << mini.size() << endl;
//     cout << "Size of maxi: " << maxi.size() << endl;

//     cout << "Empty or not mini: " << mini.empty() << endl;
//     cout << "Empty or not maxi: " << maxi.empty() << endl;
// }



// 8. Set
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     set<int> s;
//     s.insert(1);
//     s.insert(1);
//     s.insert(1);
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);

//     for(int i:s) {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Size: " << s.size() << endl;

//     s.erase(s.begin());
//     cout << "After erase, size: " << s.size() << endl;

//     cout << "Empty or not: " << s.empty() << endl;
//     cout << "Count of -2: " << s.count(-2) << endl;

//     s.find(2) != s.end() ? cout << "Found" << endl : cout << "Not Found" << endl;
// }


// 9. Map
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     map<int, string> m;
//     m[1] = "Tanmay";
//     m[13] = "Singh";
//     m[2] = "20";
//     m.insert({5, "Hello"});

//     for(auto i:m) {
//         cout << i.first << " " << i.second << endl;
//     }

//     cout << "Size: " << m.size() << endl;
//     cout << "Empty or not: " << m.empty() << endl;

//     cout<< "finding 13: " << m.count(13) << endl;

//     m.erase(13);
//     cout << "After erase, finding 13: " << m.count(13) << endl;

//     auto it = m.find(5);
//     for(auto i=it; i!=m.end(); i++) {
//         cout << i->first << " " << i->second << endl;
//     }
// }




// algorithms
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 5, 3, 2, 4};

    cout << "Vector before sorting: ";
    for(int i:v) {
        cout << i << " ";
    }

    cout << endl;   

    sort(v.begin(), v.end());

    cout << "Vector after sorting: ";
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;

    cout << "binary_search for 3: " << binary_search(v.begin(), v.end(), 3) << endl;

    cout << "lower_bound for 3: " << lower_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout << "upper_bound for 3: " << upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;

    int a = 3;
    int b = 5;  

    cout << "max of 3 and 5: " << max(a, b) << endl;
    cout << "min of 3 and 5: " << min(a, b) << endl;

    swap(a, b);
    cout << "After swap, a: " << a << ", b: " << b << endl;

    string str = "Tanmay";
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "Vector after rotation: ";
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());
    cout << "Vector after sorting again: ";
    for(int i:v) {
        cout << i << " ";
    }
    cout << endl;

}
