#include <stdio.h>

int main()
{
    
    
    
    int a = 653;
    int rev = 0;
    int rem = 0;
    
    while(a!=0){
       rem = a % 10;  // getting the value in once place
       rev  = rev*10+rem;  // adding the value
       a= a/10;  // removing the vale
       
       
    }
    
    
    
    
    printf("%d",rev);
    
}



