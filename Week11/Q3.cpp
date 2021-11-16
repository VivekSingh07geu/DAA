#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define vl vector<ll>

int main()
{
    int t = 1;
 //   cin >> t;

    while(t--){
        int n , sum = 0;
        cin >> n;

        vl v(n);

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            sum += v[i];
        }

        if(sum % 2){
            cout<<"no"<<nl;
            continue;
        }
        sum /= 2;
        vector<vector<bool>> dp(n + 1 , vector<bool> (sum + 1 , false));

        for(int i = 0 ; i <= n ; i++){
            dp[i][0] = true;
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= sum ; j++){
                if(v[i - 1] <= j){
                    dp[i][j] = dp[i][j - v[i - 1]] or dp[i-1][j];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
        }

        if(dp[n][sum])
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }       
    
    return 0;
} 