/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>

main()
{
    int n;
    int i = 0;  
    printf("Please enter number lesser than 10 \n");
    
    scanf("%d",&n);
    
    if (n < 10) 
    {
        printf("thanks for perfect number \n");
        exit(0);
    }
        
    for(i = 0; i < 10; i++)
      {
        printf("Please read the condition properly and reenter number again \n"); 
        scanf("%d",&n);
        if (n < 10)
          {
            printf("thanks for perfect number \n");
            i = 11;
          }    

      }
    
    printf("You finish all your try \n");    
    return 0;
    
}
