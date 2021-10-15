#include<stdio.h> 

int estParfait(int nb){ 

  int somme_diviseurs = 0; 

  for (int i = 1; i < nb; i++) 

    if (nb % i == 0) 

      somme_diviseurs =  somme_diviseurs + i; 

  if (somme_diviseurs == nb)

    printf("Le nombre %d est parfait", nb); 
 
  else

    printf("Le nombre %d n'est pas parfait", nb);
} 

 

void main(int argc, char *argv[]){   
  
  int n = atoi(argv[1]); 
  
  estParfait(n);
  } 

 
