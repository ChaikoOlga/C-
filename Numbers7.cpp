#include <iostream>
using namespace std;
//фиолетовых цифр в коде быть не должно, столько цифр не должно быть в коде
//могут быть только 0 или 1, остального быть не должно
int main()
{
	int i,j =1;
	for (int i = 1; i <= 5; i++) {
	    cout << j << " ";
	    j += i;
	}
	return 0;
}
