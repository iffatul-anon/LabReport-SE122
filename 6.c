//Write a program in C to print all unique elements in an array.
#include<stdio.h>

int main(){
    int n,flag;

    printf("Enter size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Array = ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        flag=1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag=0;
                for(int k=j;k<n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
        if(flag==0){
            for(int k=i;k<n-1;k++){
                a[k]=a[k+1];
            }
            n--;
            i--;

        }
    }

    printf("Array with unique elements = ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}
