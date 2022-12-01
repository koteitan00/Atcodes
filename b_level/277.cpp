#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
  int n;cin >> n;
  vector<string> s(n);
  string s1 = "HDCS";
  string s2 = "A23456789TJQK";
  
  rep(i,n){
  cin >> s[i];
  if (s1.find(s[i][0]) == string::npos || s2.find(s[i][1]) == string::npos) {
        cout << "No" << endl;
        return 0;
    }
  }
  sort(s.begin(),s.end());
  n -= 1;
  rep(i,n){
  if(s[i]==s[i+1]){
  cout << "No";
  return 0;
  }
  }
  cout << "Yes";
 }
