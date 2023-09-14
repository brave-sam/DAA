#include <stdio.h>
int linearSearch(int a[],int n , int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            
            return i;
        }
    }
    return -1;
}

    int main(){
       
        int n = 10;
         int a[n];
        for(int i=0;i<=n;i++){
            printf("Enter the value of array at %d: ",i);
            scanf("%d",&a);
        }
    int element;
    printf("Enter elemnt to be search: ");
    scanf("%d",&element);
    int searchIndex=linearSearch(a,n,element);
    printf("Element %d is found at %d\n",element,searchIndex);

    return 0;
}
