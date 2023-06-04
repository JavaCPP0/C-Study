#include <iostream>

using namespace std;

typedef struct __point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point *pptr = new Point;

	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;

	return *pptr;
}


int main(void)
{
	Point* ptr1 = new Point;
	ptr1->xpos = 10;
	ptr1->ypos = 20;

	Point* ptr2 = new Point;
	(*ptr2).xpos = 5;
	(*ptr2).ypos = 15;
	

	

	Point &pref = PntAdder(*ptr1, *ptr2);

	cout <<pref.xpos<<","<<pref.ypos << endl;

	delete ptr1;
	delete ptr2;
	delete &pref;

	return 0;
}

