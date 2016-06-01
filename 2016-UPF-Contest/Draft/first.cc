#include<iostream>
using namespace std;
int main{
    cin << N;
    while (
    string ;
    
}
        
//pseudo
/* agafem (cin) el primer valor que rebem
   aquest valor ha destar guardat en una variable
   
   establim un contador que tindra el mateix valor que cin mencionat
   
   while(el valor del contador sigui mes petit que cin)
    getline(
    
    o el que es el mateix
    while (cin >> lineas){
      getline (cin, line)

*/
UNA ALTRA MANERA

    if(getline (cin, line)

LA MANERA BONA DE FER-HO (i definitiva) seria fer que mentres es vagin agafant lines, enc ada linia es fessin 5 cins. A mode de:
    cin >> &nomclasse;
    cin >> &diasetmana;
    cin >> &hora;
    cin >> &aula;
    
Al final de tot tant sols hauria de mostrar el &classe

El que puc fer es una matriu

N equival a MATRIX[4][N];
    i = N--;
    while (N < i){
    cin >> &nomclasse;
    cin >> &diasetmana;
    cin >> &hora;
    cin >> &aula;
    &MATRIX[]
    i--
    
    
    
    
Al final de tot caldria:
        Per fer aquest fi concretament, isi no coincideix la cerca, augmentar el valor de N en MATRIX[4][N] 1 (es a dir, en el cas del dia fer MATRIX [1][N++]) // Recordar que es comenca amb 0!
    if (&diasetmana == &diasetmanademanat && &hora == &horademanat)
        cout << &aula;
        
        
        
#include<iostream>
using namespace std;
int main{
    cin << N;
    MATRIX[4][N]; //Millor matriu que no string
    i = N; //Repassar com vull fer el tema daugmentar o disminuir l'iterador
    while( N < i ){
        cin >> &nomclasse; //Repassar si cal haver declarat abans cada valor (nomclasse, dia, hora i aula)
        &nomclasse = MATRIX[0][N];
        cin >> &diasetmana;
        &diasetmana = MATRIX[1][N];
        cin >> &hora;
        &hora = MATRIX[2][N];
        cin >> &aula;
        &aula = MATRIX[3][N];
        N++;
    }
    //ara representa que ja s'han impres totes les linies menys la ultima, que conte el dia i la hora de l'aula que haurem de buscar i mostrar.
    cin >> &diasetmanademanat;
    cin >> &horademanat;
    if (MATRIX[1][N] == &diasetmanademanat && MATRIX[2][N] == &horademanat){
        cout << MATRIX[3][N];
    }else{
        N--;
    //com que repreenta que ens hem quedat amb el valor mes alt de N despres del bloc de codi anterior, el tema es anar passant per totes les "linies" a la inversa, es a dir, de baix a dalt.    Si, podria ferho iterant, pero de moment ho provo tal i com esta (es a dir, podria anar iterant la N--
}
        
        
        
