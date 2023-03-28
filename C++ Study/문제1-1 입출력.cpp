#include <iostream>
//1번문제
/*int main(void)
{
	int val1;
	std::cout << "1번째 정수 입력: ";
	std::cin >> val1;

	int val2;
	std::cout << "2번째 정수 입력: ";
	std::cin >> val2;

	int val3;
	std::cout << "3번째 정수 입력: ";
	std::cin >> val3;

	int val4;
	std::cout << "4번째 정수 입력: ";
	std::cin >> val4;

	int val5;
	std::cout << "5번째 정수 입력: ";
	std::cin >> val5;

	int result = val1 + val2 + val3 + val4 + val5;
	std::cout << "합계: "<<result;
}*/

//문제2번
/*
int main(void)
{
	char name[100];
	std::cout << "이름: ";
	std::cin >> name;

	char pn[100];
	std::cout << "전화번호(ex:010-1234-5678): ";
	std::cin >> pn;

	std::cout << "이름: " << name<<std::endl;
	std::cout << "전화번호: " << pn;
}*/

//문제3번
/*
int main(void)
{
	int num;
	std::cout << "원하는 숫자를 입력하세요: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++)
	{
		std::cout << num << "*" << i << "=" << num * i << std::endl;
	}
}*/

//문제4번
int main(void)
{
	while (1)
	{
		int sell;

		std::cout << "판매 금액을 만원 단위로 압력(-1 to end): ";
		std::cin >> sell;

		if (sell == -1)
		{
			std::cout << "프로그램을 종료합니다.";
			break;
		}

		else
		{
			std::cout << "이번달 급여: " << 50 + sell * 0.12 << "만원" << std::endl;
		}
	}
}