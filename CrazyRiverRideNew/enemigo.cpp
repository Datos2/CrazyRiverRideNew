/* 
 * File:   enemigo.cpp
 * Author: luisrbrenes
 * 
 * Created on April 17, 2015, 4:09 PM
 */

#include "enemigo.h"
#include <allegro.h>
#include "pista.h"
#include <iostream>
#include "nave.h"
#include <time.h>
#include "nave.h"
using namespace std;

int enemigo::rand2(){
srand(time(NULL));
int posEneX = rand() % 100;
return posEneX;
cout<<posEneX<<endl;
}  

enemigo::enemigo() {
        BITMAP *enemigo = load_bitmap("spaceship.bmp", NULL);
        tiempo =0;
        while(true){
            draw_sprite(screen,enemigo,this->rand2(),100);
            sleep(0.1);
        } 
        
        }

    




enemigo::~enemigo() {
}



