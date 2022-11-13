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
	//au lieu de Titi comme nom, j'ai oublié et j'ai mit mon nom
}
