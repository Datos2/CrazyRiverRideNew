/* 
 * File:   ventana.cpp
 * Author: luisrbrenes
 * 
 * Created on April 15, 2015, 6:51 PM
 */

#include "ventana.h"
#include <allegro.h>

ventana::ventana() {
    set_color_depth(8);
    allegro_init();
    install_keyboard();
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,700,1000,0,0);
}

ventana::ventana(const ventana& orig) {
}

ventana::~ventana() {
}

