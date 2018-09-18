/* ***********************************************************
 *  Management of a Rotary Button (Commutateur Rotatif)
 *  
 *  Four (4) digital inputs are reserved for this library.
 *  
 * INPUT mode:
 *   Pushbutton attached to pin N from +5V
 *   10K resistor attached to pin N from Ground. 
 *   So the idle inputs (normaly open) are linked to Ground.
 ************************************************************* */


#ifndef ROTARYCLASS_H_INCLUDED
#define ROTARYCLASS_H_INCLUDED

#include <Arduino.h>

class Rotary
{
    public:
      Rotary(int pin1, int pin2, int pin3, int pin4);
      Rotary(int pin1, int pin2);
      int    readPosition();
      int    getValue();
      int    getLastValue();
      bool   hasChanged();
        
    private:

    //variables:
      int   Value;
      int   LastValue;
      bool  Changed;
      int   Pin1,Pin2,Pin3,Pin4;
 
};

#endif // ROTARYCLASS_H_INCLUDED
 
 
 
