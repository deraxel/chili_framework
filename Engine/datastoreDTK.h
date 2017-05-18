#pragma once
#include "Graphics.h"
#include "Colors.h"

class dataStoreDTK{
private:
	float thing[4];
	Color c;
public:
	float thing2;
	dataStoreDTK()=default;
	void setThing(int index,float val);
	void setColor(Color cIn);
	float getThing(int index)const;
	Color getColor()const;

};