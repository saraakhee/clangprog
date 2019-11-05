/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  char names[16];
  char numbers[16];
  FILE *file;

  file = fopen("C:\\Users\\admin\\Desktop\\C lang files\\phonebook.csv","a");

  printf("Please provide name: \n");

  scanf("%s" , &names);

  printf("Please provide Phone numbers: \n");

  scanf("%s" , &numbers);

  fprintf(file, "%s,%s\n", names, numbers);

  fclose(file);
    
}
