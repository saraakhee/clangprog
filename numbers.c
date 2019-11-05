/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

main()
{
    int numbers[6] = {4,8,15,16,23,42};
    
    for(int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Number 50 found \n");
        }
    }
    printf("Number 50 not found \n");
}