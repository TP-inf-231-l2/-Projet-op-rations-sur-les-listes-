#include <stdio.h>
#include <stdlib.h>

typedef struct noeud {
    int val;
    struct noeud* suiv;
} noeud;
noeud* insertion_tri(noeud* liste, int val) {
    noeud* nouveau=(noeud*)malloc(sizeof(noeud));
    noeud*p=liste;
        p=malloc(sizeof(noeud));
        
	if (nouveau==NULL)
    {
        printf("erreur d allocation\n");
        return liste;
    }
    nouveau->val=val;
    if (liste == NULL || val < liste->val) {
        nouveau->suiv = liste;
        return nouveau;
    }
    noeud* courant = liste;
    while (courant->suiv != NULL && courant->suiv->val < val) {
        courant = courant->suiv;
    }

    nouveau->suiv = courant->suiv;
    courant->suiv = nouveau;
    return liste;
}
void afficher(noeud* liste) {
    while (liste != NULL) {
        printf("%d -> ", liste->val);
        liste = liste->suiv;
    }
    printf("NULL\n");
}

int main() {
    noeud* liste = NULL;
    int val,n,i,valeur;
    printf("entrez le nombres de valeurs de la liste:\n");
    fflush(stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++){
		printf("entrez une valeur:\n");
    	fflush(stdout);
   		scanf("%d",&valeur);
   		liste=insertion_tri(liste,valeur);
   	}
   	printf("votre liste est: ");
    afficher(liste);  

    return 0;
}
