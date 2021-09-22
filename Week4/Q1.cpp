#include<bits/stdc++.h>
using namespace std;

void merge(int arr[] , int l , int mid , int r , int &comparisons) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for(int i = 0 ; i < n1 ; i++){
        a[i] = arr[l + i];
    }
    for(int i = 0 ; i < n2 ; i++){
        b[i] = arr[mid + 1 + i];
    }

    int i = 0 , j = 0 , k = l;

    while(i < n1 and j < n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++; i++;
        }
        else {
            arr[k] = b[j];
            k++; j++;
        }
        comparisons++;
    }

    while(i < n1) {
        arr[k] = a[i];
        k++; i++;
    }

    while(j < n2) {
        arr[k] = b[j];
        k++; j++;
    }
}

void mergeSort(int arr[] , int l , int r , int &comparisons){
    if(l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr , l , mid , comparisons);
        mergeSort(arr , mid + 1 , r , comparisons);
        merge(arr , l , mid , r , comparisons);
    }
}

int main()
{
    int t = 1;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0 ; i < n ; i++)
            cin >> arr[i];
        
        int comparisons = 0;
        mergeSort(arr , 0 , n - 1 ,comparisons);

        for(int i = 0 ; i < n ; i++)
            cout<<arr[i]<<" ";
        cout<<endl;

        cout<<"comparisons = "<<comparisons<<endl;
        
    }
    return 0;
}        