#pragma once

	typedef double(*F)(double);

	double firstDer(F f, double, double);
	double soul(F f, double, double, double);
	double y(double);

