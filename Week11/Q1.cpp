#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vl vector<ll>

int mcm(vl v ,int n , int i , int j , vector<vector<int>> &dp){
    if(i >= j)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];

    int mn = INT_MAX;
    for(int k = i ; k < j ; k++){
        int temp = mcm(v , n , i , k , dp) + mcm(v , n , k + 1 , j , dp) + v[i-1] * v[k] * v[j];
        
        mn = min(temp , mn);
    }
    dp[i][j] = mn;

    return mn;
}

int main()
{
    int t = 1;
    //cin >> t;

    while(t--){
        int n , x;
        cin >> n;

        vl v;
        vector<vector<int>> dp(n + 2 , vector<int> (n + 2 , -1));

        for(int i = 0 ; i < (n * 2) - 1 ; i++){
            cin >> x;
            if(i % 2 == 0)
                v.pb(x);
        }
        cin >> x;
        v.pb(x);

        cout<<mcm(v, n , 1 , n , dp)<<endl;
        
    }       
    
    return 0;
} 