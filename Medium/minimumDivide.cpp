#include<bits/stdc++.h>
using namespace std;

// Amazon ML School
int main(){
    long long int n;
    cin >> n;
    string s = to_string(n);
    sort(s.begin(),s.end());
    long long int a = 0,b = 0;
    for(long long int i = 0; i < s.size(); i++){
        if(i & 1){
            a = a * 10 + (s[i] - '0');
        }else{
            b = b * 10 + (s[i] - '0');
        }
    }
    cout << a + b << endl;
    return 0;
}