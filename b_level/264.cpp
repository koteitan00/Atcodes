#include <bits/stdc++.h>
#include <string>
using namespace std;  
int main(){
  int r,c;
  cin >> r >> c;
  r = abs(8 - r);
  c = abs(8 - c);
  int m = max(r,c);
  if(m % 2 == 0)cout << "white";
  else cout << "black";
}
