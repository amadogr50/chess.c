/*
    Preproccesors directives for managing what to type in System() depending on the OS
*/

#include <stdio.h>

#ifdef _WIN32
    void terminalClear(){
        system("cls");
    }
    void terminalWait(){
        system("pause");
    }
#elif __unix__
    void terminalClear(){
        system("clear");
    }
    void terminalWait(){
        system("pause");
    }
#endif