#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct Point2d {
 float x; 
 float y ;
 char *nom; 
}p ;
typedef struct Point3d {
 float x; 
 float y ;
 float z ;
 char *nom; 
}q;

int main()
{
void afficher(p );
void translation(p *,float );
void rotation(p *,float );
void homothetie(p *,float );
float distanceE(p,p);
void coorpol(p);
void coorcyl(q );
void coorsph(q );
    p p1, p2 ;
    q q1;
p1.x=1;p1.y=2;p1.nom="A";
afficher(p1);
translation(&p1,3);
afficher(p1);
    return 0;
};

void translation(p *pt,float a){
    (pt->x)+=a;
    (pt->y)+=a;
}


void rotation(p *pt,float ang){
 (pt->x) = (pt->x) * cos(ang) - (pt->y) * sin(ang);
 (pt->y) = (pt->x) * sin(ang) + (pt->y) * cos(ang);

}

void homothetie(p *pt,float k){
 (pt->x) *= k ;
 (pt->y) *= k ;

} 

float distanceE(p pt,p pr){
    float distance;
    distance = sqrt((pt.y-pr.y)*(pt.y-pr.y) + (pt.x-pr.x)*(pt.x-pr.x));
 return distance;
}
void coorpol(p pt){
    float r,o;
    r=sqrt((pt.y)*(pt.y) + (pt.x)*(pt.x));
    o=atan(pt.y/pt.x);
    printf("coordonnée polaire du pont %s est r=%f et theta=%f",pt.nom,r,o);
}

/* pour les coordonées cylindriques et sphériques , le probleme est qu'au debut on
 travaille dans le plan ecludien donc (xOy),donc j'ai creer un autre struct pour le calcul de ces coordonneés 
 
*/
void coorcyl(q qt){
    float r,o;
    r=sqrt((qt.y)*(qt.y) + (qt.x)*(qt.x));
    o=atan(qt.y/qt.x);
    printf("coordonnée cylindrique du pont %s est r=%f et theta=%f et z=%f",qt.nom,r,o,qt.z);
}

void coorsph(q qt){
    float r,p,o,phi;
    r=sqrt((qt.y)*(qt.y) + (qt.x)*(qt.x));
    p=sqrt(r*r +(qt.z)*(qt.z));
    o=atan(r/qt.z);
    phi=atan(qt.y/qt.x);
    printf("coordonnée spheriques du pont %s est p=%f et theta=%f et phi=%f",qt.nom,r,o,phi);
}

void afficher(p pt)
    {
        printf(" %s: (%f,%f)",pt.nom,pt.x,pt.y);
       
    }

