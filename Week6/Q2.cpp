
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define vl vector<ll>

bool IsBipartite(vl v[] , vl &color , ll i , int parent){
    color[i] = 1 - parent;

    for(auto it : v[i]){
        if(color[it] == -1){
            if(!IsBipartite(v , color , it , color[i]))
                return false;
        }
        else if(color[it] == color[i]){
            return false;
        }
    }
    
    return true;
}

int main()
{
    int t = 1;
 //   cin >> t;

    while(t--){
        ll n , x;
        cin >> n;

        vl v[n + 1] , color(n + 1 , -1);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> x;
                if(x){
                    v[i + 1].pb(j + 1);
                }
            }
        }
        bool flag = false;
        for(ll i = 1 ; i <= n ; i++){
            if(color[i] == -1){
                if(IsBipartite(v , color , i , 0)){
                    flag = true;
                    break;
                }
            }
        }
        
        if(flag)
            cout<<"Yes Bipartite"<<endl;
        else
            cout<<"Not Bipartite"<<endl;
    }       
    
    return 0;
} 