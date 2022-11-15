#include <bits/stdc++.h>
#include <string>
using namespace std;  
int main(){
  int n;
  cin >> n;
  n -= 2;
  int num = n - n % 4 + 4;   
  if(n%4==0){
  cout << n + 2;
  return 0;
  }
  cout << num + 2;
}
