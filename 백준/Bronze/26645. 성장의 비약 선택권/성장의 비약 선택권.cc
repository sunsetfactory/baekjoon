#include <iostream>

using namespace std;

int cnt[4] = {4, 2, 1};
int level[4] = {210, 220, 230};

int main(void)
{
	int N;
	cin >> N;

	int item = 0;

	for (int i = 0; i < 3; i++)
	{
		if ((level[i] - N) > cnt[i])
		{
			item = i + 1;
			break;
		}
	}
	if (item == 0)
	{
		cout << "4" << endl;
	}
	else
	{
		cout << item << endl;
	}
}