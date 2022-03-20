// Hãy viết chương trình chuyển đổi biểu thức biểu diễn dưới dạng hậu tố về dạng tiền tố.

// Input:

// Dòng đầu tiên đưa vào số lượng bộ test T;
// Những dòng tiếp theo mỗi dòng đưa vào một bộ test.
// Mỗi bộ test là một biểu thức tiền tố exp.
// Output:

// Đưa ra kết quả mỗi test theo từng dòng.
// Ràng buộc:

// T, exp thỏa mãn ràng buộc: 1≤T≤100; 2≤length(exp)≤106.

#include<bits/stdc++.h>
using namespace std;

bool ky_tu(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    return false;
}

string hauto_tiento(string s){
    stack<string> st;
    for(int i = 0;i < s.size();i++){
        if(ky_tu(s[i])){
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            string tmp = s[i] + b + a;
            st.push(tmp);
        }
        else{
            st.push(string(1,s[i]));
        }
    }
    return st.top();
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << hauto_tiento(s) << endl;
    }
    return 0;
}