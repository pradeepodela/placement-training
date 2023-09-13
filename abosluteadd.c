#include <stdio.h>

int main()
{
    
    int n = 0;
    int i = 0 , d = 0; 
    int a[8] = {3,4,6,12,7,13,16,8};
    
    for(; i <= 8 ; i++){
        if(a[i]%2==0){
            n = n + a[i];
        }
        else{
            d = d + a[i];
        }
        
        
    }
    
    if(n>d)
    printf("%d",n-d);
    else
    printf("%d",d-n);

    return 0;
}

