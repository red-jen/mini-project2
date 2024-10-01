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

contacts stock[MAX_CONTACTS];
int count =0;
char recherche[50];

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void ajouter(){
   printf("inter your name for phone number   : ");
   scanf("%s",&stock[count].nom);
   stock[count].nom[strcspn(stock[count].nom, "\n")] = '\0';
   printf("entrer le nombre   :  ");
   scanf("%d",&stock[count].number);
   printf("entrer l'adrresse email de cette phone :  ");
   scanf("%s",&stock[count].gmail);


   (count)++;

   printf("contact ajouter avec success ");

}
void modifier(){
    printf("entrer le nom de cette cotact :  ");
    scanf("%s",&recherche);

char ngmail[50];
    int newN;

    for(int i=0;i<count;i++){
    int res = strcmp(recherche,stock[i].nom);
    if(res == 0){
        printf("yup this name exist  \n");
        printf("modifier la numero de cette nom  :");
        scanf("%d",&newN);
        clearBuffer();
        printf("entrer la nouvelle gmail de ce nom  : ");
        scanf("%s",&ngmail);
        stock[i].number =newN;
         strcpy(stock[i].gmail,ngmail);
         printf("la modification est effectue ");
    return;
    }

    }
     printf("this name does not exist");
}
void Supprimer(){
     printf("entrer le nom de cette cotacts que tu veux supprimer ");
    scanf("%s",&recherche);
     for(int i=0;i<count;i++){
    int res = strcmp(recherche,stock[i].nom);
   if(res == 0){
        for (int j = i; j<count ;j++){
        strcpy(stock[j].nom,stock[j+1].nom);
        stock[j].number=stock[j+1].number;
         strcpy(stock[j].gmail,stock[j+1].gmail);
         printf("le contact est supprimer ");
        }
    count--;
    }

    }

}
void Afficher(){
    for(int i=0;i<count;i++){
        printf("contacts name : %s \n",stock[i].nom);
         printf("contacts number : %d \n",stock[i].number);
          printf("contacts gmail : %s \n",stock[i].gmail);
          printf("\n");
    }
}

 void Rechercher(){
    printf("entrer le nom de cette cotacts que tu recherche");
    scanf("%s",&recherche);
    for(int i=0;i<count;i++){
    int res = strcmp(recherche,stock[i].nom);
    if(res == 0){
        printf("yup this name exist ");
        printf("ces le nom de cette contact :  %s    |",stock[i].nom);

        printf("ces le nombre de cette contacts  : %d    |",stock[i].number);

         printf("ces le email de cette contacts : %s     |",stock[i].gmail);
    }
    }

 }
int main(){

    int choix;

    do{
        printf("\n1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact\n");
        printf("0. quitter\n");
        printf("entrer votre choix : ");

        scanf("%d",&choix);


        switch (choix) {
            case 1 ://ajouter
              ajouter(stock, &count);
              break;
              case 2 ://modifier
              modifier(stock,recherche,count);
              break;
              case 3 ://supprimer
              Supprimer(stock,recherche,count);
              break;
              case 4 :
               Afficher(stock,count);
               break;
               case 5 :
               Rechercher(stock,recherche,count);
               break;

              case 0 :
              printf("aurevoir !");
              break;
              default:
              printf("votre choix est invalide");
               break;


        }



    }while( 0!=choix);
    return 0;
}
