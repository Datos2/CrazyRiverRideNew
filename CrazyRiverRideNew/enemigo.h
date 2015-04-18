/* 
 * File:   enemigo.h
 * Author: luisrbrenes
 *
 * Created on April 17, 2015, 4:09 PM
 */

#ifndef ENEMIGO_H
#define	ENEMIGO_H

class enemigo {
public:
    enemigo();
    enemigo(const enemigo& orig);
    virtual ~enemigo();
    int rand2();
    int posEneX;
    int tiempo;
private:

};

#endif	/* ENEMIGO_H */

