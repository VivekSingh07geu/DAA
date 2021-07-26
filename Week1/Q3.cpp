#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n , key = 0 ,comparisons = 0;
        cin >> n;
        int a[n];

        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        
        cin >> key;
        int next_pos , curr_pos = 0 , val = 0 , flag = 0;
        
        while(1) {

            next_pos = pow(2,val) - 1;
            cout<<next_pos<<endl;
            if(next_pos >= n || a[next_pos] >= key)
                break;

            val++;
            comparisons++;
            curr_pos = next_pos;
        } 
       
        for(int i = curr_pos + 1 ; i < min(next_pos , n) ; i++){
            comparisons++;
            if(a[i] == key){
                flag = 1;
                break;
            }
        }

        if(flag == 1)
            cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not Present "<<comparisons<<endl;
    }
    
    return 0;
} 