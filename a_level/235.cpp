#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int n;cin >> n;
  int a,b,c;
  a = n / 100;
  b = n / 10 % 10;
  c = n % 10;
  int x=a+b+c;
  cout << 100*x+10*x+x;
  }
