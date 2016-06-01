#include <iostream>
using namespace std;
int main() {
	int N, i, nomclasse, diasetmana, hora, aula, diasetmanademanat, horademanat;
	cin >> N;
	//int N;
	//nomclasse, diasetmana, hora, aula, diasetmanademanat, horademanat;
    int MATRIX[4][N]; //Millor matriu que no string
    i = N; //Repassar com vull fer el tema daugmentar o disminuir l'iterador
    while( N < i ){
        cin >> MATRIX[0][N];
        cin >> MATRIX[1][N];
        cin >> MATRIX[2][N];
        cin >> MATRIX[3][N];
        N++;
    }
    //ara representa que ja s'han impres totes les linies menys la ultima, que conte el dia i la hora de l'aula que haurem de buscar i mostrar.
    cin >> diasetmanademanat;
    cin >> horademanat;
    if (MATRIX[1][2] == diasetmanademanat && MATRIX[2][2] == horademanat){
        cout << MATRIX[3][2];
    }else{
        N--;
    //com que repreenta que ens hem quedat amb el valor mes alt de N despres del bloc de codi anterior, el tema es anar passant per totes les "linies" a la inversa, es a dir, de baix a dalt.    Si, podria ferho iterant, pero de moment ho provo tal i com esta (es a dir, podria anar iterant la N--
    }
}
