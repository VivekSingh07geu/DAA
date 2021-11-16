#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vl vector<ll>

bool cycleDetection(vl v[] , vl &vis , ll i , vl &dfs){
    vis[i] = 1;
    dfs[i] = 1;

    for(auto it : v[i]){
        if(vis[it] == 0){
            if(cycleDetection(v , vis , it , dfs))
                return true;
        }
        else if(dfs[it] == 1)
            return true;
    }
    dfs[i] = 0;

    return false;
}

int main()
{
    int t = 1;
   // cin >> t;

    while(t--){
        ll n , x;
        cin >> n;

        vl v[n + 1] , vis(n + 1 , 0) , dfs(n + 1 , 0);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> x;
                if(x)
                    v[i + 1].pb(j + 1);
            }
        }

        bool flag = false;
        for(ll i = 1 ; i <= n ; i++){
            if(vis[i] == 0){
                if(cycleDetection(v , vis , i , dfs)){
                    flag = true;
                    break;
                }
            }
        }

        if(flag)
            cout<<"Yes Cycle Exists"<<endl;
        else
            cout<<"No Cycle Exists"<<endl;

        
    }       
    
    return 0;
} 