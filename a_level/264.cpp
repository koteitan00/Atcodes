#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  
int main(){
  int l,r;
  cin >> l >> r;
  string str = "atcoder";
  string substr = str.substr(l-1,r-l+1);
  cout << substr;
}
