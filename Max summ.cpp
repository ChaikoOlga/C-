#include <iostream>
using namespace std;

int main ()
{
	int a = 2, b = 15,  c = 7, max;
	
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	cout <<"Maximum of a, b, c: " << max ;

}
