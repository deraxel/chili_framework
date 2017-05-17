#pragma once
#include "Graphics.h"

class TunnelDTK{
public:
	TunnelDTK();
	TunnelDTK(int const xPut,int const yPut,int const widthPut,int const heightPut,const Color& cPut);
	TunnelDTK(int const oldDepth,int const xPut,int const yPut,int const widthPut,int const heightPut,const Color& cPut);
	TunnelDTK(int const oldDepth,int const xPut,int const yPut,int const widthPut,int const heightPut);
private:
	int tunnelDepth;
	Color c;
	int height;
	int width;
	int x;
	int y;
public:
	void drawSquare(Graphics& gfx) const;
	void setColor(int const depth,const Color& cPut);
	void createTunnel(int depth);
	TunnelDTK tunnel;
	TunnelDTK dig(int depth);
};
