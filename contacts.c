#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_NOM 50
#define MAX_GMAIL 50
#define MAX_CONTACTS 100

typedef struct{
char nom[MAX_NOM];
int number;
char gmail[MAX_GMAIL]; 
}contacts;
int count =0;
void ajouter (contacts stock [],int count){
   printf("inter your name for phone number ");
   fgets(stock[count].nom,MAX_NOM,stdin);
   printf("entrer le nombre");
   scanf("%d",&stock[count].number);
   getchar();
   printf("entrer l'adrresse email de cette phone");
   fgets(stock[count].gmail,MAX_CONTACTS,stdin);
   count++;
}


int main(){
    contacts stock[MAX_CONTACTS];
    int choix;
    printf("entrer votre choix :  ");
  
    do{
        printf("1. Ajouter un Contact");
        printf("2. Modifier un Contact");
        printf("3. Supprimer un Contact");
        printf("4. Afficher Tous les Contacts");
        printf("5. Rechercher un Contact");
        printf("0. quitter");
        

        switch(choix){
            case '1':
ajouter(stock,count);
break; 


        }



    }while( 0!=choix)
    return 0;
}