#include "datastoreDTK.h"

void dataStoreDTK::setThing(int index,float val){
	thing[index]=val;
}

void dataStoreDTK::setColor(Color cIn){
	c=cIn;
}

float dataStoreDTK::getThing(int index) const{
	return thing[index];
}

Color dataStoreDTK::getColor() const{
	return c;
}
