#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
/*
문제1

int main(void)
{
	char len[20]="computer";
	char cat[20]="class";
	char cpy1[20]="super computer";
	char cpy2[20]="empty";
	char cmp1[20]="big computer";
	char cmp2[20] = "samll computer";
	char cmp3[20] = "big computer";

	cout << strlen(len) << endl;
	cout << strcat(len, cat) << endl;
	strcpy(cpy2, cpy1);
	cout << cpy2 << endl;
	cout << strcmp(cmp1, cmp2) << endl;
	cout << strcmp(cmp1, cmp3) << endl;

	return 0;

}
*/

//문제2

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		cout << "Random number #" << i << ": " << rand()%100 << endl;
	}

	return 0;
}
