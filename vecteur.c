#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
typedef struct vecteur {
 float x; 
 float y ;
 char *nom; 
}v;


int main()
{
void afficher(v );
v somme(v ,v ,char*);
v produit(v ,v ,char*);
v produitscal(v,int  ,char*);
float norm(v);
bool parra(v,v);
bool orth(v,v);

v v1, v2 ;

v1.x=2;v1.y=4;v1.nom="A";
v2.x=1;v2.y=2;v2.nom="B";

printf("%d",parra(v1,v2));

    return 0;
};

v somme(v v1,v v2,char* n){
    v v3;
    v3.x=v1.x +v2.x;
    v3.y=v1.y +v2.y;
    v3.nom=n;
    return v3;
}

v produit(v v1 ,v v2 ,char* n){
    v v3;
    v3.x=v1.x *v2.x;
    v3.y=v1.y *v2.y;
    v3.nom=n;
    return v3;
}

v produitscal(v v1,int a ,char*n){
    v v3;
    v3.x=v1.x *a;
    v3.y=v1.y *a;
    v3.nom=n;
    return v3;}
    
float norm(v v1){

    return sqrt((v1.x)*(v1.x)+ (v1.y)*(v1.y));}
    
bool parra(v v1,v v2){

   if ((v2.x)*(v1.y)-(v2.y)*(v1.x)==0){
       return true;
   return false;    
   };}  
   
bool orth(v v1,v v2){

   if ((v2.x)*(v1.x)+(v2.y)*(v1.y)==0){
       return true;
   return false;    
   } ;}    

void afficher(v v1)
    {
        printf(" %s: (%f,%f)",v1.nom,v1.x,v1.y);
       
    }

