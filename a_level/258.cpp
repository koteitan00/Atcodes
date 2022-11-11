#include <bits/stdc++.h>
using namespace std;
int main(){
  int k,h,w;
  cin >> k;
  h = 21;
  w = 0;
  if(k >= 60){
  k -= 60;
  h++;
  w += k;  
  }else{
  w += k;
  }
  if(w < 10){
  cout << h << ":0" << w;
  }else{
  cout << h << ':' << w;
  }
}
