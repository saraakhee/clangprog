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
    int n = 50;
    int *p = &n;
    char *s = "SANDY";
    
    printf("%i\n", *p);
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
    printf("%c\n", *(s + 4));
}
