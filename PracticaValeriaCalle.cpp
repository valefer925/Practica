
#include <iostream>
using namespace std;

int inverso(int n)
{
	int a = n;
	int d = 1;
	while (a > 10)
	{
		a /= 10;
		d *= 10;
	}
	int inv = 0;
	while (n >= 1)
	{
		inv += (n % 10)*d;
		n /= 10;
		d /= 10;
	}
	return inv;
}

int power(int b, int e)
{
	if (e == 1)
		return b;
	else
		return b * power(b, e-1 );
}

int fib_rec(int n) {

	if (n < 2)
		return n;
	else
		return fib_rec(n - 2) + fib_rec(n - 1);

}
int fib_it(int n) {
	int c = 0, f_0 = 0, f_1 = 1, rpta = 0;

	while (++c < n)
	{
		rpta = f_0 + f_1;
		f_0 = f_1;
		f_1 = rpta;
	}
	return rpta;


}

int main()
{
	int c = 0;
	int i = 3;
	while (i < 1000000)
	{
		if (i % 3 == 0 or i % 5 == 0)
			c += i;
		i++;
	}
	cout << c << endl;


	int h = 1234;
	cout << inverso(h) << endl;
	int b = 3;
	int e = 3;
	cout << power(b, e) << endl;
	cout << fib_rec(5) << endl;
	cout << fib_it(5);
}




