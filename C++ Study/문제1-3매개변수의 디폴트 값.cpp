#include <iostream>

using namespace std;

int BoxVolume(int i, int w, int h);
int BoxVolume(int i, int w);
int BoxVolume(int i);

int main(void)
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5,5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	//cout << "[D, D, D] : " << BoxVolume() << endl;
	CommitCheck();
}

int BoxVolume(int i, int w, int h)
{
	return i * w * h;
}

int BoxVolume(int i, int w)
{
	return i * w * 1;
}

int BoxVolume(int i)
{
	return i * 1 * 1;
}

void CommitCheck()
{
	cout << "Ä¿¹ÔÃ¼Å©";
}