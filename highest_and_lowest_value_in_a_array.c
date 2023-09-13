/ highest_and_lowest_value_in_a_array.c
#include <stdio.h>

int main()
{
    
    int n = 0;
    int i = 0 , d = 0; 
    int a[8] = {3,4,6,12,7,13,16,8};
    
    for(; i <= 8 ; i++){
        
        if(n < a[i]){
            n = a[i];
        }
        if(n > a[i]){
            d = a[i];
        }
        
    }
    
    
    printf("%d",n);
    printf("%d",d);
    

    return 0;
}



