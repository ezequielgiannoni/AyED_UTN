//============================================================================
// Name        : Archivos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void escribir();

int main() {
   escribir ();

   system("Pause");
	return 0;
}

void escribir(){
   ofstream archivo;
   string nombreArchivo,frase;

   cout<<"Digite el nombre del archivo: ";
   getline(cin,nombreArchivo);

   archivo.open(nombreArchivo.c_str(),ios::out); //Abre el archivo

   if(archivo.fail()){
      cout<<"No se pude abrir el archivo";
      exit(1);
   }

   cout<<"\nDigite el texto del archivo: ";
   getline(cin,frase);

   archivo<<frase;

   archivo.close(); //Cierra el archivo
}
