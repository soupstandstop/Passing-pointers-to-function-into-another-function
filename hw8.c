#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef double(*Operator)(double x, int n);

double power(double x, int n);
double multiply(double x, int n);
double divide(double x, int n);
double powerpower(Operator, double x, int n, int m);

int main(int argc, char *argv[])
{
	double x;
	int n, m, y;
	y = atoi(argv[1]);
	x = atoi(argv[2]);
	n = atoi(argv[3]);
	m = atoi(argv[4]);
	if (y==0)
	{
		Operator op = power;
		printf("%.6lf\n", powerpower(op, x, n ,m));

	}
	else if (y==1)
	{
		Operator op = multiply;
		printf("%.6lf\n", powerpower(op, x, n ,m));
	}
	else if (y==2)
	{
		Operator op = divide;
		printf("%.6lf\n", powerpower(op, x, n ,m));
	}
	return 0;
}

double power(double x, int n)
{
	int i;
	double g,y=1;
	if (n>0)
	{
		for (i = 0; i < n; ++i)
		{
			g = y*x;
			y = g;
		}
		return g;
	}
	else if (n<0)
	{
		for (i = 0; i > n; --i)
		{
			g = y*(1/x);
			y = g;
		}
		return g;
	}
	else
		return 1;
}

double multiply(double x, int n)
{
	double g;
	g = x*n;
	return g;
}

double divide(double x, int n)
{
	double g;
	g = x/n;
	return g;
}

double powerpower(Operator op, double x, int n, int m)
{
	return pow(op(x,n),m);
}
