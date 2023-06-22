#include<board.h>

double mod_2(complex z)
{
  return (z.r*z.r + z.i*z.i);
}

complex coordinate_change(int n, d)
{
  //function that associates a coodinate system to an int
   complex c;
    //type conversions are ugly, but int division is efficient
    int _i = c.i;
    int _r = c.r;
    _i = n / d;
    _r = n % d;
    double i_ = _i;
    double r_ = _r;
    c.i = (i_/d)*2.26 - 1.13;
    c.r = (r_/d)*2.48 - 2;
    return c;
};

complex next_s = [](complex z0, complex c) {
    complex z;
    z.i = 2 * z0.i * z0.r + c.i;
    z.r = z.r * z.r - z.i * z.i + c.r;
    return z;
};


int num_iter(complex z, complex c, int max_iter)
{
    int iter = 0;
    while (iter<max_iter && mod_2(z)<4)
      {
	z = next_s(z, c);
	++iter;
      }
    return iter;
};

