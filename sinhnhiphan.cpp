// Một số được gọi là lộc phát nếu chỉ có 2 chữ số 6 và 8. 
// Cho số tự nhiên N. Hãy liệt kê các số lộc phát có không quá N chữ số.

// Input:

// Dòng đầu tiên ghi lại số tự nhiên T là số lượng bộ test (T<10);
// T dòng kế tiếp mỗi dòng ghi số N (1<N<15).
// Output:

// Dòng đầu tiên là số lượng số lộc phát tìm được. 
// Dòng thứ hai in ra đáp án theo thứ tự giảm dần.
#include <iostream>
#include <math.h>
 
using namespace std;
 
int N;
 
string a[100009];
 
int main(){
    int t;
    cin >> t;
    while(t--){
    cin >> N;
    int dem=N;
    int s=0;
    while(N--){
        s=s+pow(2,N+1);
    }
    cout << s <<endl;
    while(dem){
        long long n=2;
        a[0] = "8";
        a[1] = "6";
        long long k = 0;
        while (a[k].length() < dem){
            a[n++] = a[k] + "8";
            a[n++] = a[k] + "6";
            k++;
        }
        for (long long i = k; i < n; i++){
            cout << a[i] << " ";
        }
        dem--;
    }
    cout << "\n";
}
    cout << endl;
}
