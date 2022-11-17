#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  
int main(){
  string s;
  cin >> s;
  int len = s.size();
  len = (len+1)/2;
  cout << s[len-1];
}
