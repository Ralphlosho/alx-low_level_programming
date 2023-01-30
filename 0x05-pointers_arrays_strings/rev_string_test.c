#include "main.h"                                                                                                                                        

#include <stdio.h>                                                                                                                                       

                                                                                                                                                         

/**                                                                                                                                                      

 * rev_string - reverses a string                                                                                                                        

 * @s: pointer to a string                                                                                                                               

 *                                                                                                                                                       

 * Return: void                                                                                                                                          

 */                                                                                                                                                      

void rev_string(char *s)                                                                                                                                 

{                                                                                                                                                        

        int i, j, n;                                                                                                                                     

        char *str;                                                                                                                                       

                                                                                                                                                         

        j = 0;                                                                                                                                           

        while (!(*(s + j) == '\0'))                                                                                                                      

                j++;                                                                                                                                     

        i = 0;                                                                                                                                           

        while (i <= j - 1)                                                                                                                               

        {                                                                                                                                                

                *(str + i) = *(s + i);                                                                                                                   

                i++;                                                                                                                                     

        }                                                                                                                                                

        n = 1;                                                                                                                                           

        while (n <= j)                                                                                                                                   

        {                                                                                                                                                

                *(s + j - i) = *(s + j + i);                                                                                                             

                n++;                                                                                                                                     

        }                                                                                                                                                


