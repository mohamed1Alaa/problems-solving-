#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
string s;
int help(char a){
  int ret = 0;
  bitset<8> se = int(a);
  for (int i = 0 ; i < 4 ; ++i){
    int b = se[i];
    se[i] = se[7-i];
    se[7-i] = b;
  }
  for (int i = 0 ; i < 8 ; ++i)
    ret += se[i]*pow(2,i);
  return ret;  
}
int main()
{
  Mo7amed_Alaa
  
  getline(cin,s);
  int prev = 0;
  for (int i = 0 ; i < s.size() ; ++i){
    if (i == 0) prev = 0;
    else
      prev = help(s[i-1]);
    // reverse Acaii code of current char
    int cur = help(s[i]);
    for (int i = 0 ;  ; ++i){
      if ((prev-i+256)%256 == cur){
        cout << i << '\n';
        break;
      }
    }  
  }
  return 0; 
} 
