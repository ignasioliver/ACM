// Just operate the instructions given
#include<iostream>
using namespace std;
int main(){
    int t, n, tn; //tn sera el resultat
    cin >> t;
    while (t--){
        cin >> n;
        n *= 567; n /= 9;
        n += 7492; n *= 235;
        n /= 47; n -= 498;
        tn = (double)((n / 10) %10);
        cout << abs(tn) << endl; /* abs is the trick here;
     it allows to force tn to be positive */
    }
 return 0;
}
