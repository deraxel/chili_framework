#pragma once
#include "Graphics.h"

class TunnelDTK{
	
public:
	TunnelDTK();
	TunnelDTK(int const xPut,int const yPut,int const widthPut,int const heightPut,const Color& cPut);
	TunnelDTK(int const oldDepth, int const xPut, int const yPut, int const widthPut,int const heightPut,const Color& cPut);
	void drawSquare(Graphics& gfx)const;
	TunnekDTK dig(int const depth);
	void setColor(int const depth,const Color& cPut);

private:
	TunnelDTK tunnel;
	int tunnelDepth;
	Color c;
	int height;
	int width;
	int x;
	int y;
};
