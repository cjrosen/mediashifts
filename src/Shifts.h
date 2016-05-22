//
//  Shifts.hpp
//  mediaShiftsDev
//
//  Created by Carl-Johan Rosén on 2016-05-22.
//
//

#ifndef Shifts_hpp
#define Shifts_hpp

#include <stdio.h>

#include "ofImage.h"

class Shifts {
public:
    static ofImage createImageFromData( unsigned char* data, unsigned int size );
};


#endif /* Shifts_hpp */
