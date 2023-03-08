#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  int n;
  cin >> n;
  string s = "";
  while((n >= 4) && (n%7 != 0)){
    s += '4';
    n -= 4;
  }
  if (n%7 != 0){
    cout << "-1\n";
    return 0;
  }
  while(n > 1){
    s += '7';
    n -= 7;
  }
  cout << s << '\n';
  return 0; 
}
