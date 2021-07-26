#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n , key = 0 , comparisons = 0;
        cin >> n;
        int a[n];

        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        cin >> key;

        int low = 0 , high = n-1;
        int flag = 0;
        while(low <= high){
            int mid = (low + high) / 2;
            comparisons++;
            
            if(a[mid] == key){
                flag = 1;
                break;
            }

            if(a[mid] < key){
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

        if(flag == 1)
            cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not Present "<<comparisons<<endl;
    }
    
    return 0;
} 