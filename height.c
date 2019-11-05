/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void draw(int h);

int main(void)
{
    int height;
    
    printf("Height: \n");
    scanf("%d", &height);
    draw(height);
}

void draw(int h)
{
   for(int i = 1; i <= h; i++)
   {
       for(int j = 1; j <= i; j++)
       {
           printf("#");
       }
       printf("\n");
   }
}

