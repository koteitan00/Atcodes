#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  if(a < c)cout << "Takahashi";
  else if(a == c && b <= d)cout << "Takahashi";
  else cout << "Aoki";
  }
