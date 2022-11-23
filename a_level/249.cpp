#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;  

int main(){
  int a,b,c,d,e,f,x;
  cin >> a >> b >> c >> d >> e >> f >> x;
  int t_set,t_rem,Takahashi;
  int a_set,a_rem,Aoki;
  t_set = x / (a+c);
  t_rem = x % (a+c);
  if(t_rem > a)t_rem = a;
  Takahashi = a*b*t_set+t_rem*b;
  
  
  a_set = x / (d+f);
  a_rem = x % (d+f);
  if(a_rem > d)a_rem = d;
  Aoki = d*e*a_set+a_rem*e;
  if(Aoki>Takahashi)cout << "Aoki";
  else if(Aoki == Takahashi)cout << "Draw";
  else cout << "Takahashi";
  }
