#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        int n , max_count = 1;
        cin >> n;

        char a[n] , ans_char;
        unordered_map<char , int> mp;

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        for(auto pr : mp){
            if(pr.second > max_count){
                ans_char = pr.first;
                max_count = pr.second;
            }
        }

        if(max_count == 1)
            cout<<"No Duplicates Present"<<endl;
        else {
            cout<<ans_char<<" - "<<max_count<<endl;
        }
    }
    
    return 0;
} 