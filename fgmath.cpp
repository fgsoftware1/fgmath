#include "iostream"
#include "Vector3.h"

int main(int argc, const char * argv[]){
	Fgmath::Vector3 v(0,1,0);
	Fgmath::Vector3 axis(1,0,0);

	Fgmath::Vector3 rotatedVector=v.rotateVectorAboutAngleAndAxis(90,axis);

	rotatedVector.show();

	return 0;
}
