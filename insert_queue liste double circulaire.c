#include<stdio.h>
#include<stdlib.h>
typedef struct noeud{
    int val;
    struct noeud* pred;
    struct noeud* suiv;
}noeud;
noeud* liste = NULL;


noeud* insert_queue(int val) {
    noeud* nouveau = (noeud*)malloc(sizeof(noeud));
    nouveau->val = val;
    if (liste == NULL) {
        nouveau->suiv = nouveau;
        nouveau->pred = nouveau;
        liste = nouveau;
    } else {
        noeud* queue = liste->pred;
        queue->suiv = nouveau;
        nouveau->pred = queue;
        nouveau->suiv = liste;
        liste->pred = nouveau;
    }
}
void afficherListe( noeud* liste){
    if (liste==NULL)
    {
        printf("liste vide\n");
    }else{
    	/*printf("%d",head);
    	liste->val=head;
    	noeud* tail=liste->pred;*/
    	noeud* p=liste;
        while (p->suiv!=liste)
        {
            printf("%d ;",p->val);
            p=p->suiv;
        }
        printf("%d",p->val);
    }
    
}
int main(){
    int n,valeur,i;
    printf("combien de valeur voulez-vous entrer??\n");
    fflush(stdout);
    scanf("%d",&n);
   // printf(" ENTREZ une VALEUR\n ");
   // scanf("%d",head);
    
    for(i=0;i<n;i++){   
        printf("Entrez une valeur:\n");
        scanf("%d",&valeur);
        liste= insert_queue(valeur);
    }
    printf("votre liste est:  ");
    afficherListe(liste);

}