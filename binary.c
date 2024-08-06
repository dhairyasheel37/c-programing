#include<stdio.h>
int binary(int a[],int,int);
int selection(int a[],int);
int main(){
    int n,I,key,r;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array : ");
        for(I=0;I<n;I++){
            scanf("%d",&a[I]);
        }
        
    
    
    int j,temp,min;
    
    for(I=0;I<n;I++){
        min=I;
        for(j=I+1;j<n;j++){
            if(a[min] > a[j]){
                min=j;
            }                
        }
        
        if(min!=I){
            temp=a[min];
            a[min]=a[I];
            a[I]=temp;
        }
    }
    
    //shorted array
    for(I=0;I<n;I++){
    printf("%d ",a[I]);
    }
    
    printf("\nEnter key element : ");
    scanf("%d",&key); 
    
    
    
    r=binary(a,n,key);
    if(r==-1){
        printf("Error key element is not found...!");
    }
    else{        
    printf("The index of key element (%d) is : %d ",key,r);
    }
}
int binary(int a[],int n,int key){
    int first,last,mid;
    first = 0;
    last = n-1;
    mid = (first + last) / 2;
    
    while(first <= last ){
        if(key==a[mid]){
            return mid;
        }
        else if(key > a[mid]){
            first = mid + 1; 
            mid = (first + last) / 2;      
        }
        else{
            last = mid - 1;
           mid = (first + last) / 2;
        }            
    }
    
    if(first > last){
       return -1;
    }
}            

int selection(int a[],int n){
    
    
    return a;
}    
