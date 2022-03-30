// Cho dãy số A[] gồm n số nguyên dương. Tam giác đặc biệt của dãy số A[] là tam giác được tạo ra bởi n hàng,
// trong đó hàng thứ 1 là dãy số A[], hàng i là tổng hai phần tử liên tiếp của hàng i-1 (2≤i≤n).
// Ví dụ A[] = {1, 2, 3, 4, 5}, khi đó tam giác được tạo nên như dưới đây:

// [1, 2, 3, 4, 5 ]

// [3, 5, 7, 9 ]

// [8, 12, 16]

// [20, 28]

// [48]

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test gồm hai dòng: dòng thứ nhất đưa vào N là số lượng phần tử của dãy số A[];
// dòng tiếp theo đưa vào N số của mảng A[].
// T, N, A[i] thỏa mãn ràng buộc: 1≤T≤100; 1≤N, A[i] ≤10;
// Output:

// Đưa ra tam giác tổng của mỗi test theo từng dòng. Mỗi dòng của tam giác tổng được bao bởi ký tự [, ].
#include<bits/stdc++.h>
using namespace std;

void faster(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void nhap(vector<int> &arr){
    vector<int>:: iterator it;
    for(it = arr.begin();it != arr.end();it++){
        cin >> *it;
    }
}

void in(vector<int> arr,int n){
    cout << "[";
    for(int i = 0;i < n;i++){
        if(i == n - 1){
            cout << arr[i];
        }
        else cout << arr[i] << " ";
    }
    cout << "]";
    cout << endl;
}

void dequy(vector<int> arr,int n){
    in(arr,n);
    for(int i = 0;i < n - 1;i++){
        arr[i] = arr[i] + arr[i+1];
    }
    if(n == 1){
        return;
    }
    dequy(arr,n - 1);
}

void solution(){
    faster();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        nhap(arr);
        dequy(arr,n);
    }
}

int main(){
    solution();
    return 0;
}
