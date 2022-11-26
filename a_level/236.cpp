#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int a,b;
  string s;
  cin >> s >>a >> b;
  char c = s[a-1]; 
  s[a-1]=s[b-1];
  s[b-1]=c;
  cout << s;
  }
