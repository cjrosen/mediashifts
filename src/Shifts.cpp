//
//  Shifts.cpp
//  mediaShiftsDev
//
//  Created by Carl-Johan Rosén on 2016-05-22.
//
//

#include "Shifts.h"

ofImage
Shifts::createImageFromData( unsigned char* data, unsigned int size )
{
    ofPixels pixels;
    //pixels.allocate( 34, 34, 1 );
    pixels.setFromPixels( data, 40, 40, 1);
    ofImage image(pixels);
    return image;
}