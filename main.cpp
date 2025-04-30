#include <iostream>
#include <cmath>
using namespace std;
const double k = 8.9875e9; // constante de Coulomb
int main() {
    double q = 1e-9;      // charge en Coulombs (1 nC)
    double d = 0.01;      // distance entre les charges (10 mm)
    double x;             // position du point M sur l'axe du dipole

    cout << "Entrez la position x du point M (en metres) : ";
    cin >> x;

    // Position des charges : -q a -d/2, +q a +d/2
    double r_plus = x - d / 2.0;
    double r_minus = x + d / 2.0;

    // Potentiel au point M
    double V = k * (q / r_plus - q / r_minus);
    // Champ sur l axe, en approximation dipolaire (r >> d)
    double p = q * d;
    double E = (k * 2 * p) / pow(x, 3);  // approximation valable si x >> d

    cout << "\n--- Resultats ---\n";
    cout << "Potentiel V(x) = " << V << " V\n";
    cout << "Champ E(x) = " << E << " N/C (approx. dipolaire)\n";
    return 0;
}
