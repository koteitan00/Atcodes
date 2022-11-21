#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  double a,b;
  cin>> a >> b;
  double num = b/a * 1000; 
  num = round(num);
  num *= 0.001;
  cout << fixed << setprecision(3) << num;
  }
