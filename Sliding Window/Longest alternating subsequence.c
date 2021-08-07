#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   int n;
    printf("Enter any number between [4,100]:-\n");
    scanf("%d",&n);
    srand(time(0));
    int a[n],i;
    for(i = 0; i<n; i++){
            a[i]=rand()%100;
    }
     for(i=0;i<n;++i)
        printf("%d\t",a[i]);
    int maxx=0;
    int spei=0;
    for(int i=0;i<n-1;i++){
        int count=1;
        if(a[i]<a[i+1] || a[i]>a[i+1]){
            int ind;
            if(a[i]<a[i+1])
            ind=0;
            else
            ind=1;
            for(int j=i;j<n-1;j++){
                if(ind%2==0){
                    if(a[j]<a[j+1]){
                    count+=1;
                    ind+=1;
                    }
                    else
                    break;
                }
                else if(ind%2==1){
                    if(a[j]>a[j+1]){
                    count+=1;
                    ind+=1;
                    }
                    else
                    break;
                }
            }
            }
        if(count>maxx){
            maxx=count;
            spei=i;
        }
    }
    printf("\nLongest subsequence is ");
    for(int j=spei;j<spei+maxx;j++){
        printf("%d,",a[j]);
    }

    printf(" of length %d.",maxx);
    return 0;
}
