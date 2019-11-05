/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    int j;
        
    printf("Please provide value for i, j \n");
    scanf("%d %d" , &i , &j);
    
    if (i == j)
    {
       printf("Same \n"); 
    }
    else
    {
       printf("not-Same \n");  
    }
 
}
