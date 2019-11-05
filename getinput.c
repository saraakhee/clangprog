/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int p,n;
    float r,si;
    
    printf("Please provide value for p, n, r \n");
    scanf("%d %d %f",&p,&n,&r);
    
    si = p * n * r / 100;
    printf("Simple Interest :- %f \n",si);
}
