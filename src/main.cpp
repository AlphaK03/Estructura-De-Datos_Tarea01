//
// Created by Key Cortés on 14/8/2022.
//
#include "iostream"
#include "ITextProcess.h"
#include "TxtFile.h"
#include "Utility.h"
#include "BinaryFile.h"
using namespace std;
int main(){



    string filename = "D:/Estructura-De-Datos_Tarea01/files/salarios.txt";   /*  CAMBIAR RUTA DE ARCHIVO */
    List userList;
    auto *csvManager = new TxtFile();

    // LECTURA DE ARCHIVO
    userList = csvManager->dataReadingProcess(filename);

    //ORDENAMIENTO
    userList.sortList();

    //REPORTE
    cout << userList.report();

    // ESCRITURA DE ARCHIVO
    csvManager->dataWritingProcess("D:/Estructura-De-Datos_Tarea01/files/reporteGenerado.txt", userList);

    return 0;
}