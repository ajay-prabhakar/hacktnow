//Try until you reach your goal
#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define endl "\n"
# define str string
# define vll vector<ll>
# define pb push_back
# define mll map<ll,ll>
# define mp make_pair
# define ff first
# define ss second
# define pll pair<ll,ll>
# define f(x,y) for(int x=0;x<y;x++)
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll x;
    cin>>x;
    while(x--){
        ll y,z;
        cin>>y>>z;
        ll a[y];
        mll m;
        for(ll i=0;i<y;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        if(m.size()<=z){
            cout<<1<<endl;
        }
        else if(m.size()>1 && z==1){
            cout<<-1<<endl;
        }
        else{
            ll k1=m.size();
            ll k=(k1-z)/(z-1);
            if((k1-z)%(z-1) !=0){
                k++;
            }
            k++;
            cout<<k<<endl;
        }
    }
    return 0;
}
