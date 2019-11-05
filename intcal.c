/*
 * Calculation of simple interest 
 * Author: Sandeep Shinde Date: 24/10/2019
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int p,n;
    float r,si;
    
    p = 1000;
    n = 3;
    r = 8.5;
    
    si = p * n * r / 100;
    printf("%f \n",si);
    
}
