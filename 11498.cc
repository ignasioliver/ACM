#include<iostream>
using namespace std;

int main(){
    long int test, M, N, X, Y, i;
    while(cin >> test){
        cin >> X >> Y;
        for(i = 1; i <= test; i++){
            cin >> M >> N;
            if(X < M && N < Y)
                cout << "SE" << endl;
            else if(X == M || Y == N)
                cout << "divisa"<< endl;
            else if(X < M && Y < N)
                cout << "NE" << endl;
            else if(M < X && N < Y)
                cout << "SO" << endl;
            else if(M < X && Y < N)
                cout << "NO" << endl;
        }
    }
}
