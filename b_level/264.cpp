#include <bits/stdc++.h>
#include <string>
using namespace std;  
int main(){
  int r,c;
  cin >> r >> c;
  int n1 = 1;
  int n2 = 15;
  if(r == n1 || r == n2 || c == n1 || c == n2){
    cout << "black";
  }
  else if(r == n1+1 || r == n2-1 || c == n1+1 || c == n2-1){
    cout << "white";
  }
  else if(r == n1+2 || r == n2-2 || c == n1+2 || c == n2-2){
    cout << "black";
  }
  else if(r == n1+3 || r == n2-3 || c == n1+3 || c == n2-3){
    cout << "white";
  }
  else if(r == n1+4 || r == n2-4 || c == n1+4 || c == n2-4){
    cout << "black";
  }
  else if(r == n1+5 || r == n2-5 || c == n1+5 || c == n2-5){
    cout << "white";
  }
  else if(r == n1+6 || r == n2-6 || c == n1+6 || c == n2-6){
    cout << "black";
  }else cout << "white";
}
