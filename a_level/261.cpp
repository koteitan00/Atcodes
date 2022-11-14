#include <bits/stdc++.h>
#include <string>
using namespace std;  
int main(){
  int l1,r1,l2,r2;
  cin >> l1 >> r1 >> l2 >> r2; //3パターン
  if(l1 <= l2 && l2 <= r1){ 
  if(r2 < r1){
  cout << r2 - l2;
  return 0;
  }
  cout << r1 - l2;
  return 0;
  }
  if(l2 <= l1 && l1 <= r2){ 
  if(r1 < r2){
  cout << r1 - l1;
  return 0;
  }
  cout << r2 - l1;
  return 0;
  }
  cout << 0;
}
