/* 
 * File:   bala.cpp
 * Author: luisrbrenes
 * 
 * Created on April 18, 2015, 2:38 AM
 */

#include "bala.h"
#include <allegro.h>
#include <iostream>
#include "nave.h"
using namespace std;


float posBY= /*nave.GetPosY();*/700;
float bala::trayBala(){

while(posBY>=-5){
    posBY= posBY-0.0001;
    cout<<posBY<<endl;
    sleep(0.5);
    return posBY; 
    break;
    

}
}

float posBX= /*nave.GetPosX();*/300;
bala::bala() {
    BITMAP *bala = load_bitmap("bala.bmp", NULL);
        cout<<"bala"<<endl;
    while(true){
    draw_sprite(screen,bala,300,this->trayBala());

    }
    }

bala::bala(const bala& orig) {
}

bala::~bala() {
}

