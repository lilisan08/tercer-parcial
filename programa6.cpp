#include <iostream>

using namespace std;

int main() {
    float unidad, precio, subtotal, descuento = 0, iva, Total;
    cout << "Cantidad de unidades: ";
    cin >> unidad;
    cout << "Precio: ";
    cin >> precio;
    subtotal = unidad * precio;
    if (subtotal > 3000) {
        descuento = subtotal * 0.3;
    } else if (subtotal > 2000) {
        descuento = subtotal * 0.2;
    } else if (subtotal > 1000) {
        descuento = subtotal * 0.1;
    }
    iva = subtotal * 0.16;
    Total = subtotal - descuento + iva;
    cout << "El descuento es de: " << descuento << endl;
    cout << "El total es: " << Total << endl;

    return 0;
}