#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int main()
{
  Mo7amed_Alaa
  string a,b;
  cin >> a >> b;
  int c1=0,c2=0,ans=0;
  for (int i = 0 ; i < a.size() ; ++i){
    if (a[i] == '4' && b[i] == '7') c1++;
    else if (a[i] == '7' && b[i] == '4') c2++;
  }
  if (c1 < c2) swap(c1,c2);
  ans = c2 + (c1-c2);
  cout << ans << endl;
  return 0; 
}
