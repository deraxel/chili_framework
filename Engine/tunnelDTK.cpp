#include "tunnelDTK.h"

TunnelDTK::TunnelDTK()
	:
	data(){
	tunnelDepth=0;
}

TunnelDTK::TunnelDTK(int const oldDepth)
	:
	data(){
	tunnelDepth=oldDepth+1;
}

void TunnelDTK::createTunnel(int const depth){
	for(int i=0; i<depth; i++){
		dig(i)->tunnel=new TunnelDTK(i);
	}
}

TunnelDTK* TunnelDTK::dig(int const depth){
	if(depth==this->tunnelDepth){
		return this;
	}
	return tunnel->dig(depth);
}

dataStoreDTK& TunnelDTK::dataFile(int const depth){
	return dig(depth)->data;
}


