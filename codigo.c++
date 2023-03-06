#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
const int CE= 11756176127;
const char NOMBRE = 'Kevin_Alexander_Llugcha_Cepeda'; 
using namespace std;
//capacidad velga
const int A=7;
const int B=2;
const int C=1;
const int D=6;
const int E=7;
const int F=1;
const int G=6;
const int H=5;
const int I=7;
const int J=1;
//ubicacion 
const string KLLUB1="GPS7";
const string KLLUB2="GPS2";
const string KLLUB3="GPS1";
const string KLLUB4="GPS6";
const string KLLUB5="GPS7";
const string KLLUB6="GPS1";
const string KLLUB7="GPS6";
const string KLLUB8="GPS5";
const string KLLUB9="GPS7";
const string KLLUB10="GPS1";
//armamento
const string KLLAR1="aaabbct";
const string KLLAR2="ac";
const string KLLAR3="bc";
const string KLLAR4="act";
const string KLLAR5="aaabbct";
const string KLLAR6="bc";
const string KLLAR7="act";
const string KLLAR8="bct";
const string KLLAR9="aaabbct";
const string KLLAR10="bc";
void klmostrarCarga() {
    const int totalLineas = 10;
    int carga = 0;
    for (int i = 0; i <= totalLineas; i++) {
        cout << "\r" << carga * 10 << "%";
        carga++;
        Sleep(500); 
}
}
void KLLmostrarArchivo() {
    // Crea un objeto ifstream para leer el archivo
    ifstream archivo("datos.txt");

    // Verifica si el archivo se abrió correctamente
    if (archivo.is_open()) {
        string linea;
        int contador = 0; // Variable contador para saltar las primeras dos líneas
        // Lee el archivo línea por línea y muestra su contenido en la consola
        while (getline(archivo, linea)) {
            contador++;
            if (contador > 2) { 
                klmostrarCarga();// Salta las primeras dos líneas
                cout <<" "<< linea << endl;
            }
        }
        // Cierra el archivo
        archivo.close();
    } else {
        // Si no se pudo abrir el archivo, muestra un mensaje de error
        cout << "No se pudo abrir el archivo." << endl;
    }
}
void KLLcrearArchivo() {
    // Crea un objeto ofstream para escribir en el archivo
    ofstream archivo("datos.txt");

    // Verifica si el archivo se abrió correctamente
    if (archivo.is_open()) {
        // Escribe los datos en el archivo
        archivo << "Ubicación: " << endl;
        archivo<<"cap "<<"cor "<<" tipo "<<endl;
        archivo <<A<<", "<<KLLUB1<<", "<<KLLAR1 << endl;
        archivo <<B<<", "<<KLLUB2<<", "<<KLLAR2<< endl;
        archivo <<C<<", " <<KLLUB3<<", "<<KLLAR3<< endl;
        archivo <<D<<", " <<KLLUB4<<", "<<KLLAR4<< endl;
        archivo <<E<<", " <<KLLUB5<<", "<<KLLAR5<< endl;
        archivo <<F<<", " <<KLLUB6<<", "<<KLLAR6<< endl;
        archivo <<G<<", " <<KLLUB7<<", "<<KLLAR7<< endl;
        archivo << H<<", " <<KLLUB8<<", "<<KLLAR8<< endl;
        archivo << I<<", " <<KLLUB9<<", "<<KLLAR9<< endl;
        archivo << J <<", "<<KLLUB10<<", "<<KLLAR10<< endl;

        // Cierra el archivo
        archivo.close();
    } else {
        // Si no se pudo abrir el archivo, muestra un mensaje de error
        cout << "No se pudo crear el archivo." << endl;
    }
}


void KLLset_color(int color) 
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
struct KLLataque {
    char geoposicionamiento;
    int capacidad_belica;
    char arcenal;
};

int main() {
    int r;
    KLLset_color(FOREGROUND_GREEN);
    cout<<"cedula:"<<CE<<endl;
    cout<<"nombre"<<NOMBRE<<endl;
    KLLset_color(FOREGROUND_BLUE);
    cout<<"     cap, beo, tipo de ar"<<endl; ;
    KLLset_color(FOREGROUND_RED);
    KLLcrearArchivo();
    KLLmostrarArchivo();
}


