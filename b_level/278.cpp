#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

int main(){
  int h,m;cin>> h >> m;
  int a = h /10;int b = h % 10;
  int c = m /10;int d = m % 10;
  int H = a*10+c;int M = b*10+d;
  if(H<24&&M<60){
  }else{ 
  m = 0;
  if(b >= 6&&b<10){
  h = (a+1)*10;
  cout << h << " " << m;
  return 0;
  }
  if(h==23){
  h=0;
  cout << h << " " << m;
  return 0;
  }
  h++;
  }
  cout << h << " " << m;
}
