/** @author KaliGa70 -> 
 * 
 * - Github: https://github.com/KaliGa70
 * - Problem Link: https://codeforces.com/problemset/problem/546/A
 * 
**/

#include <bits/stdc++.h>

/*============================================================================*/

#define nl '\n'
#define yes cout << "Yes" << nl;
#define no cout << "No" << nl;
#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*============================================================================*/

typedef int ii;
typedef long long ll;
typedef double dd;
typedef long long int lli;
typedef unsigned long long ull;

/*============================================================================*/

using namespace std;

/*============================================================================*/

void solve() {
    ii k, n, w, ans; cin >> k >> n >> w;
    //k es el costo de la primer banana
    //n es el dinero inicial
    //w es la cantidad de platanos a comprar

    //formula i(iterando la cantidad de platanos) * k

    ii total = (k * ((w*(w + 1)) / 2));
    ii si = total > n ? ans = (total - n) : 0;  

    cout << si << nl; // formula de Gauss
}

/*============================================================================*/

int main(){_

    int casos = 1;
    //cin >> casos;

    while(casos != 0){solve(); casos--;}

    return 0;
	
}