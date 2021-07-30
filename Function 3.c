#include <stdio.h>

int Lcm(int a, int b);

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    int lcm =Lcm( n1, n2); // function calling  
    printf ( " \nLCM of %d and %d is %d. ", n1, n2, lcm);  
    return 0;
}

int Lcm(int n1, int n2)
{
	  static int max = 1;  
    if ( max % n1  == 0 && max % n2 == 0)  
    {  
        return max;  
    }  
    else  
    {  
        max++;  
        Lcm( n1, n2);  
        return max;  
    }  
}
