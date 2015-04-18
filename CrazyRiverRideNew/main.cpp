#include <allegro.h>
#include <iostream>
#include "ventana.h"
#include "pista.h"
#include "nave.h"
#include "enemigo.h"
#include "tinythread.h"
#include "bala.h"

using namespace std;
using namespace tthread;


void naveT(void* aArg){
    nave newNave;
    
}

void eneT(void* aArg){
    enemigo newEnemigo;
}

void balaT(void* aArg){
    bala newBala;   
}    

int main()
{     
    ventana newVentana;
    pista newPista;
    thread enem(eneT,0);
    thread naveM(naveT,0);
    thread balaM(balaT,0);
        while(true){
             if(key[KEY_B]){

            balaM.join();
        }
}

    enem.join(); 
    naveM.join();

    
    
        
    
    return 0;
}
END_OF_MAIN();
