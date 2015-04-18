/* 
 * File:   nave.cpp
 * Author: luisrbrenes
 * 
 * Created on April 15, 2015, 3:37 PM
 */

#include "nave.h"
#include <allegro.h>
#include <iostream>
#include "pista.h"
#include "bala.h"
#include "tinythread.h"
#include "enemigo.h"
using namespace std;
using namespace tthread;

        

float posX=200;

        int nave::movimientoX(){
    

            
        while(true){
    
        if(key[KEY_RIGHT]){
        posX = posX+0.1;
        cout << posX << endl;
       
        sleep(0.1);
        }
              

         if(key[KEY_LEFT]){
        posX = posX-0.1; 
        cout << posX << endl;
        
        sleep(0.1);     
        }   
        
        if (posX<50){
            posX=50;
            }  
        
        if (posX>520) {
            posX=520;
            } 
        
        return posX;
        }
        
        }
 
float posY= 800;
        
        int nave::movimientoY(){
        
            
            
            while(true){
            
        if(key[KEY_DOWN]){
        posY=posY+0.1;
       
        cout << posY << endl;  
        sleep(0.1);     
    }



        if(key[KEY_UP]){
        posY= posY-0.1;
       
        cout << posY << endl;
        sleep(0.1); 
        }
        
        return posY;
            }
        }
            
        

           


nave::nave() {  
        BITMAP *nave = load_bitmap("nave.bmp", NULL);

        while(true){
        draw_sprite(screen,nave,this->movimientoX(),this->movimientoY()); 

        }
        
        
       
}





nave::~nave() {
}

void nave::SetBalas(int balas) {
    this->balas = balas;
}

float nave::GetBalas() const {
    return balas;
}

void nave::SetLives(int lives) {
    this->lives = lives;
}

int nave::GetLives() const {
    return lives;
}

void nave::SetPosY(int posY) {
    this->posY = posY;
}

float nave::GetPosY() const {
    return posY;
}

void nave::SetPosX(int posX) {
    this->posX = posX;
}

float nave::GetPosX() const {
    return posX;
}


