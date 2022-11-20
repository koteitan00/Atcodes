#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int a,b;
  cin >> a >> b;
  vector<int> v = {a,b};
  int x,y,z;
  x = 0; y = 0; z = 0;
  for(int i = 0;i < 2;i++){
  if(v[i] % 2 != 0){
    x = 1;
  }if(v[i] >= 4){
    z = 1;
  }if(v[i] == 2 || v[i] == 3 || v[i] == 6 || v[i] == 7){
    y = 1;
  }
  }
  cout << x+2*y+4*z;
}
