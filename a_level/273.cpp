#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int n;
  cin >> n;
  int x = 1;
  for(int i = 0;i < n;i++){
  x *= i+1;
  }
  cout << x;
}
