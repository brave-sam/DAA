// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
        cout<<" ";
        
    }
}
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quicksort(a, low, partitionIndex - 1);
        quicksort(a, partitionIndex + 1, high);
    }
}
int main() {
   int a[] = {34, 54, 2, 45, 34, 23, 43, 2, 1, 33};
    int n = 10;
    printArray(a, n);
    quicksort(a, 0, n - 1);
        cout << "After Sorting!";
    printArray(a, n);
    // Write C++ code here


    return 0;
}
