/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

struct person
{
    char x[16];
    char n[16];
}people[4] = {
             {"EMMA","911-000-1234"},
             {"XMMA","111-000-1234"},
             {"YMMA","211-000-1234"},
             {"ZMMA","311-000-1234"},
             };
                

int main(void)
{
       
    for (int i = 0; i < 4; i++)
    {
        if (strcmp(people[i].x, "EMMA") == 0)
        {
            printf("%s\n", people[i].n);
            return 0;
        }
    }
    printf("Not found \n");
    return 1;
}

