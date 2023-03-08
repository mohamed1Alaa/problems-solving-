#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  string s;
  cin >> s;
  int f = 0;
  for (int i = 0 ; i < s.size() ; ++i){
    if (s[i] == '0' && f == 0){
      f = 1;
      s[i] = '#';
    } 
  }
  if (f == 0)
    cout << s.substr(0,s.size()-1) << '\n';
  else{
    for (auto& x : s){
      if (x != '#') cout << x;
    }
    cout << '\n';
  }  
  return 0; 
}
