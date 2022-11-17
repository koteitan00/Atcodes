#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  
int main(){
  int x,y,n;
  cin >> x >> y >> n;
  if(3*x<=y){
  cout << x*n;
  return 0;
  }
  int x_ans = n % 3;
  int y_ans = (n-x_ans)/3;
  int ans = x * x_ans + y * y_ans; 
  cout << ans;
}
