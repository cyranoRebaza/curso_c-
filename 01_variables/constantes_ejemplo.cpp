#include<iostream>
using namespace std;

int main(){
    
    // declaro las variables
    int metros_calidadMedia = 0;
    int metros_calidadAlta = 0;
    const double PRECIO_CALIDAD_MEDIA = 35.5;
    const double PRECIO_CALIDAD_ALTA = 55.3;
    const double IVA = 1.21;
    const int EXPIRA_PRESUPUESTO = 30;
    double importe_calidadMedia;
    double importe_calidadAlta;
    double importe_sinIva;
    double importe_conIva;
    

    cout << "PRESUPUESTO"
    cout << "\ncuantos metros quiere instalar de calidad media: ";
    cin >> metros_calidadMedia;

    cout << "\ncuantos metros quiere instalar de calidad alta: ";
    cin >> metros_calidadAlta;

    // calculos
    importe_calidadMedia = PRECIO_CALIDAD_MEDIA * metros_calidadMedia;
    importe_calidadAlta = PRECIO_CALIDAD_ALTA * metros_calidadAlta;

    importe_sinIva = importe_calidadMedia + importe_calidadAlta;
    importe_conIva = importe_sinIva * IVA;

    cout << "\n******************************************";
    cout << "\nPresupuesto para la instalacion:\n" << endl;
    cout << "metros de calidad media:" << metros_calidadMedia << " m" << endl;
    cout << "metros de calidad alta:" << metros_calidadAlta << " m" << endl;
    cout << "precio de calidad media: $ " << PRECIO_CALIDAD_MEDIA << endl;
    cout << "precio de calidad alta: $ " << PRECIO_CALIDAD_ALTA << endl;

    cout << "\n******************************************";
    cout << "\nImporte total sin iva: $ " << importe_sinIva << endl;
    cout << "\nImporte total con iva: $ " << importe_conIva << endl;
    
    cout << "\n*** Presupuesto valido durante " << EXPIRA_PRESUPUESTO << " dias ***";
    
    
    return 0;
}

