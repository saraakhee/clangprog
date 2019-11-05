/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char names[4][16] = {"EMMA", "RODRIGO" , "BRIAN" , "SANDY"};
    char numbers[4][16] = {"911-000-1234" , "911-000-5678" , "911-000-9999" , "911-000-2222"};
    
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], "EMMA") == 0)
        {
            printf("%s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}
