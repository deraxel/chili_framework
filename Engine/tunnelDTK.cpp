#include "tunnelDTK.h"


TunnelDTK::TunnelDTK(int const xPut,int const yPut,int const widthPut,int const heightPut,const Color& cPut){
	tunnelDepth=0;
	x=xPut;
	y=yPut;
	width=widthPut;
	height=heightPut;
	c=cPut;
}

TunnelDTK::TunnelDTK(int const oldDepth,int const xPut,int const yPut,int const widthPut,int const heightPut,const Color& cPut){
	tunnelDepth=oldDepth+1;
	x=xPut;
	y=yPut;
	width=widthPut;
	height=heightPut;
	c=cPut;
}

TunnelDTK::TunnelDTK(int const oldDepth,int const xPut,int const yPut,int const widthPut,int const heightPut){
	tunnelDepth=oldDepth+1;
	x=xPut;
	y=yPut;
	width=widthPut;
	height=heightPut;
}

void TunnelDTK::drawSquare(Graphics& gfx)const{
	gfx.drawRect(x,y,width,height,c);
}

void TunnelDTK::setColor(int const depth,Color& const cPut){
	dig(depth)->c=cPut;
}

void TunnelDTK::createTunnel(int const depth){
	int depthO=tunnelDepth;
	int xO=x;
	int yO=y;
	int widthO=width;
	int heightO=height;
	for(int i=0; i<depth; i++){
		dig(i)->tunnel=new TunnelDTK(i,xO,yO,widthO,heightO);
	}
}

TunnelDTK * TunnelDTK::dig(int depth){
	if(depth==this->tunnelDepth){
		return this;
	}
	return tunnel->dig(depth);
}

void TunnelDTK::drawSquareSpec(int const depth,Graphics& gfx){
	dig(depth)->drawSquare(gfx);
}

