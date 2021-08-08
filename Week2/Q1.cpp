#include<bits/stdc++.h>
using namespace std;

void binarySearch(int a[] , int n , int low , int high , int key , int &count){

    int mid = (low + high) / 2;

    if(a[mid] == key){
        for(int i = mid ; i < n ; i++){
            if(a[i] == key)
                count++;
            else
                break;
        }

        for(int i = mid - 1 ; i >= 0 ; i--){
            if(a[i] == key)
                count++;
            else
                break;
        }
    }
    else if(a[mid] < key)
        binarySearch(a , n , mid + 1 , high , key , count);
    else
        binarySearch(a , n , low , mid - 1 , key , count); 

    return;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n , key , count = 0;
        cin >> n;

        int a[n];
        for(int i = 0 ; i < n ; i++)
            cin >> a[i];
        cin >> key;

        binarySearch(a , n , 0 , n - 1 , key , count);

        if(count != 0)
            cout<<key<<"-"<<count<<endl;
        else
            cout<<"key not present"<<endl;
    }
    
    return 0;
} 