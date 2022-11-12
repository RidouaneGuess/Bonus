#include<stdio.h>
#include <stdlib.h>
int main()
{
        char *nom;
        nom=(char*)malloc(sizeof(char));
        printf("\nEntrez votre nom:");
        scanf("%s",nom);
        printf("Votre nom est:%s",nom);
        return 0;
}
