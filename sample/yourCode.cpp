// Sum of two positive bignum number
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
string a,b;
int main()
{
	cin >> a >> b;
	vector<int> A,B,result;
	for(int i=a.size()-1;i>=0;i--)
		A.push_back(a[i] - '0');
	for(int i=b.size()-1;i>=0;i--)
		B.push_back(b[i] - '0');

	int carry = 0;
	for(int i=0;i<max(A.size(),B.size());i++)
	{
		result.push_back(((i<A.size() ? A[i] : 0) + (i<B.size() ? B[i] : 0) + carry) % 10);
		carry = ((i<A.size() ? A[i] : 0) + (i<B.size() ? B[i] : 0) + carry) / 10;
	}
	while(carry)
	{
		result.push_back(carry%10);
		carry/=10;
	}
	for(int i=result.size()-1;i>=0;i--)
		cout << result[i];
	cout << endl;
	return 0;
}
