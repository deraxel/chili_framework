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

void TunnelDTK::drawSquare(Graphics& gfx)const{
	gfx.drawRect(x,y,width,height,c);
}

TunnelDTK TunnelDTK::dig(int const depth){
	if(depth==tunnelDepth){
		return tunnel;
	}
	return thunnel.dig(depth);
}

void TunnelDTK::setColor(int const depth,const Color& cPut){
	dig(depth).setColor(cPut);
}