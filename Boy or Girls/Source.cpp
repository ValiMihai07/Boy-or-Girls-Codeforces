#include <iostream>
#include <string>

using namespace std;

int main()
{
	int lun=0;
	int i;
	int j;
	int num=0;
	string word;
	cin >> word;
	lun = word.length();

	for (j = 0; j <  lun ; j++)
	{
		for(i=lun ; i > 0 ; i--)
		{
			if (word[j] == word[i])
			{
				num++;
				cout << num;

			}
		} 
	}
	lun = num - lun;
	if (lun % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else
		cout << "IGNORE HIM!";
	return 0;
}