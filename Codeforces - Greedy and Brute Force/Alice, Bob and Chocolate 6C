/*                          لآ اِلَهَ اِلّا اللّهُ مُحَمَّدٌ رَسُوُل اللّهِ 
                                 صل على سيدنا محمد   
*/
#include <bits/stdc++.h>
#define Mo7amed_Alaa ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define T int Tests; cin >> Tests; while(Tests--)
#define lli long long int
#define ll long long
#define endl '\n'
using namespace std;  
int main()
{
  Mo7amed_Alaa
  int n;
  cin >> n;
  deque<ll> q(n);
  for (int i = 0 ; i < n ; ++i)
    cin >> q[i];
  ll a=0,b=0,cura=0,curb=0;
  while(q.size()){
    if (q.size() == 1 && cura == curb){
      a++;q.pop_front();
    }
    else if (cura < curb){
      cura += q.front();
      a++;q.pop_front();
    }
    else if (cura > curb){
      curb += q.back();
      b++;q.pop_back();
    }
    else{  
      cura += q.front();
      curb += q.back();
      q.pop_back();
      q.pop_front();
      a++;b++;
    }    
  }   
  cout << a << ' ' << b << endl;
  return 0;
}
