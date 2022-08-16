//
// Created by Key Cortés on 14/8/2022.
//
#include "iostream"
#include "ITextProcess.h"
#include "TxtFile.h"
#include "Utility.h"

using namespace std;
int main(){
    string filename = "D:/Estructura-De-Datos_Tarea01/files/salarios.txt";
    List userList;
    auto *csvManager = new TxtFile();
    
    userList = csvManager->dataReadingProcess(filename);


    userList.sortList();
    cout << userList.showFromStartToEnd();

    csvManager->dataWritingProcess("D:/Estructura-De-Datos_Tarea01/files/salarios2.txt", userList);



    return 0;
}