#include<stdio.h>
int selection(int *a,n);
int main(){
    int n,I;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array : ");
        for(I=0;I<n;I++){
            scanf("%d",&a[I]);
        }
    selection(a,n);
    
    printf("The shorted array is : ");
        for(I=0;I<n;I++){
            printf("%d ",a[I]);
        }            
}
int selection(int a[],int n){
    int I,j,temp,min;
    
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
    
    return a;
}            
