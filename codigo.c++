#include <iostream>
#include <windows.h>
#define cedula 11756176127;
#define nombre  kevin llugcha; 
//capacidad velga
const int a=7;
const int b=2;
const int c=1;
const int d=6;
const int e=7;
const int f=1;
const int g=6;
const int h=5;
const int i=7;
const int j=1;


using namespace std;
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
    KLLset_color(FOREGROUND_RED);
    cout << "Cuantas ciudades y su poblacion va a ingresar: ";
    return 0;
}
