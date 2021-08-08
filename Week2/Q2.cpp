#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n , flag = 0;
        cin >> n;

        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];

        for(int i = 0 ; i < n-2 ; i++){
            for(int j = i+1 ; j < n - 1 ; j++){
                for(int k = j+1 ; k < n ; k++){
                    if(a[i] + a[j] == a[k]){
                        cout<<(i+1)<<" , "<<(j+1)<<" , "<<(k+1)<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if(flag == 0)
            cout<<"No sequence found"<<endl;

    }
    
    return 0;
} 