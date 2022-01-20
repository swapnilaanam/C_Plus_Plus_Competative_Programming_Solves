#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum,max,s,e;
    int A[] = {5,2,4,6,7};
    int len=sizeof(A)/sizeof(int);
    max=0;
    for( int i=0; i<len; i++ ){
        for( int j=i; j<len; j++ ){ sum=0;
            for( int k=i; k<=j; k++ ){
                printf("%d ", A[k]);
                sum+=A[k];
                if(sum>max)
                {
                    s=i;
                    e=j;
                    max=sum;
                }
            }
            printf("\n");
        }
    }
    cout<<max<<" "<<s<<" "<<e<<endl;
    max=(max*max);
    return 0;
}
