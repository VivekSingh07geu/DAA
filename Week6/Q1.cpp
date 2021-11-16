#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define vl vector<ll>

bool dfs(vl v[] , int n , vl &visited , int src , int des){
    if(src == des)
        return true;
    visited[src] = 1;

    for(auto it : v[src]){
        if(!visited[it]){
            if(dfs(v , n , visited , it , des))
                return true;
        }
    }

    return false;
}


int main()
{
    int t = 1;
    //cin >> t;

    while(t--){
        int n , x;
        cin >> n;

        vl v[n + 1] , visited(n + 1 , 0);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> x;
                if(x == 1)
                    v[i+1].pb(j + 1);
            }
        }
        int src , des;
        cin >> src >> des;  
        bool flag = false;

        for(int i = 1 ; i <= n ; i++){
            if(!visited[i]){
                if(dfs(v , n , visited , src , des)){
                    cout<<"Yes Path Exists"<<endl;
                    flag = true;
                }
            }
        }

        if(!flag)
            cout<<"No Such Path Exists"<<endl;
    }
    
    return 0;
}   