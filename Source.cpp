#include<bits/stdc++.h>
using namespace std;

void permute(string s)
{
	sort(s.begin(), s.end());
	do
	{
		cout << s << endl;

	} while (next_permutation(s.begin(), s.end()));
}
int main()
{
	string str = "ABCD";
	permute(str);

}