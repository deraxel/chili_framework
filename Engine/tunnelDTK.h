#pragma once
#include "Graphics.h"

class TunnelDTK{
public:
	TunnelDTK()=default;
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
	void setColor(int const depth,Color& const cPut);
	void drawSquareSpec(int const depth,Graphics& gfx);
	void createTunnel(int depth);
	TunnelDTK*dig(int depth);
	TunnelDTK*tunnel;
};
