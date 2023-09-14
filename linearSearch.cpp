 #include <iostream>
   using namespace std;
   
   int linearSearch(int a[], int n, int key) {
       for (int i = 0; i <= n; i++) {
           if (a[i] == key) {
               return i;
           }
       }
       return -1;
   }
   
   int main() {
       int n = 10;
       int a[n];
       for (int i = 0; i<=n;i++){
           cout<<"Enter the value of array at "<<i<<": ";
           cin>>a[i];
       }
       int element;
       cout << "Enter element to be searched: ";
       cin >> element;
   
       int searchIndex = linearSearch(a, n, element);
       cout << "Element " << element << " is found at " << searchIndex << endl;
   
       return 0;
   }
