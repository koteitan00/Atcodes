#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

const int con = 998244353;

int main(){
  long long n;
    cin >> n;
    n %= con;
    if(n < 0) n += con;
    cout << n;
}

