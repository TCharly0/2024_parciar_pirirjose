#include<iostream>
#include <fstream>
#include <string>

using namespace std;
void creararchivos(int cantidad);
void agregarTexto();
void contarArchivosDeDirectorio();
void contarArchivosDeDirectorio2();

int main() {

    int cantidad;
    cout << "Por favor, ingresa la cantidad de archivos que deseas crear: ";
    cin >> cantidad;
    creararchivos(cantidad);
    return 0;
}

void creararchivos(int cantidad){
    string nombreArchivo = "File";
    if (cantidad % 2 == 0){
        cout << "Cantidad de Archivos par" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/pirir/OneDrive/Escritorio/par/" + nombreArchivo + to_string(i + 1) + ".txt");
            if(file.is_open()){
                agregarTexto();
                for (int j = 0; j < i+1; ++j) {
                    file << "file " << endl;
                }
                file.close();
            } else {
                cout << "No se pudo abrir el archivo" << endl;
            }
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
        contarArchivosDeDirectorio();
    }else{
        cout << "Cantidad de Archivos impar" << endl;
        for (int i = 0; i < cantidad; ++i) {
            ofstream file;
            file.open("C:/Users/pirir/OneDrive/Escritorio/impar/" + nombreArchivo + to_string(i + 1) + ".txt");
            if(file.is_open()){
                agregarTexto();
                for (int j = 0; j < i+1; ++j) {
                    file << "linea de texto" << endl;
                }
                file.close();
            } else {
                cout << "No se pudo abrir el archivo" << endl;
            }
        }
        cout << cantidad << " Archivos creados con Exito" << endl;
        contarArchivosDeDirectorio2();
    }
}

