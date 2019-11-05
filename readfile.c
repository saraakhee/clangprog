/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <string.h>
#include <string.h>

struct person
{
    char x[16];
    char n[16];
};

int main(void)
{
    int i;
    struct person people;
    FILE *fptr;
    if ((fptr = fopen("C:\\Users\\admin\\Desktop\\C lang files\\phonebook.csv","r")) == NULL)
    {
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
    }
    for (i = 0; i < 10; i++)
    {
        fread(&people, sizeof(struct person), 1, fptr); 
        printf("X: %s\nN: %s\n", people.x, people.n);
    }
    
    fclose(fptr); 
    
    return 0;

}
