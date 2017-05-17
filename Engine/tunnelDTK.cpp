#include "tunnelDTK.h"

TunnelDTK::TunnelDTK(){
}

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

void TunnelDTK::setColor(int const depth,const Color& cPut){
	/*dig(depth).*/c=cPut;
}

void TunnelDTK::createTunnel(int const depth){
	int depthO=tunnelDepth;
	int xO=x;
	int yO=y;
	int widthO=width;
	int heightO=height;
	dig(depth).tunnel.height=heightO;
}

TunnelDTK TunnelDTK::dig(int depth){
	if(depth==tunnelDepth){
		return tunnel;
	}
	return tunnel.dig(depth);
}