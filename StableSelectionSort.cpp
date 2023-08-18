#include <iostream>
using namespace std;

void stable_selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[min]>a[j])
                min=j;
        }
        int key=a[min];
        while(min>i){
            a[min]=a[min-1];
            min--;
        }
        a[i]=key
    }
}