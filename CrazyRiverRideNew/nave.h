/* 
 * File:   nave.h
 * Author: luisrbrenes
 *
 * Created on April 15, 2015, 3:37 PM
 */

#ifndef NAVE_H
#define	NAVE_H

class nave {
public:
    nave();
    nave(const nave& orig);
    virtual ~nave();
    void SetBalas(int balas);
    float GetBalas() const;
    void SetLives(int lives);
    int GetLives() const;
    void SetPosY(int posY);
    float GetPosY() const;
    void SetPosX(int posX);
    float GetPosX() const;   
    float posX;
    float posY;
    int lives;
    int balas;
    int movimientoX();
    int movimientoY();
    int tiempo2;
    void balaT(void* aArg);
private:


};

#endif	/* NAVE_H */

