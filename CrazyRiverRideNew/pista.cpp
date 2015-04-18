/* 
 * File:   pista.cpp
 * Author: luisrbrenes
 * 
 * Created on April 15, 2015, 6:48 PM
 */

#include "pista.h"
#include <allegro.h>

pista::pista() {
        BITMAP *pista = load_bitmap("pista.bmp",NULL);
        draw_sprite(screen,pista,1,1);  
}

pista::pista(const pista& orig) {
}

pista::~pista() {
}

