//============================================================================
// Name        : main.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "FractalCreator.h"
using namespace std;
using namespace rfh;

int main() {
	int const height = 600;

	FractalCreator fractalCreator(800, 600);

	fractalCreator.addZoom(Zoom(295, height - 202, 0.1));
	fractalCreator.addZoom(Zoom(312, height - 304, 0.1));

	fractalCreator.calculateIteration();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();
	fractalCreator.writeBitmap("test.bmp");

	cout << "Finished" << endl;
	return 0;
}
