#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key){
    int high,low, mid;
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]<key){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
     int n;
   cout << "Enter the size of the array: ";
   cin >> n;
   int* a = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the value of array at "<<i<<": ";
        cin>>a[i];
    }
    int key;
    cout<<"Enter the Number to be search: ";
    cin>>key;
    int searchIndex=binarySearch(a,n,key);
     if (searchIndex == -1) {
       cout << "Element " << key << " is not found in the array" << endl;
   } else {
       cout << "Element " << key << " is found at index " << searchIndex << endl;
   }
    return 0;
}
