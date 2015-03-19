#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int MAXN = 1000*1000*1000;
int main()
{
	srand(time(NULL));
	int a = rand()%MAXN;
	int b = rand()%MAXN;
	cout << a << " " << b << endl;
	return 0;
}
