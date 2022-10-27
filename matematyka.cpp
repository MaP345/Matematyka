#include <math.h>

int pole(int a, int h){
    return a*h/2;
}

int szescian(int p){
    return p*p*p;
}

int pitagoras(int k, int l){
    double e=k*k;
    double f=l*l;
    return sqrt(e + f);
}
