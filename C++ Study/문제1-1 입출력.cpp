#include <iostream>
//1������
/*int main(void)
{
	int val1;
	std::cout << "1��° ���� �Է�: ";
	std::cin >> val1;

	int val2;
	std::cout << "2��° ���� �Է�: ";
	std::cin >> val2;

	int val3;
	std::cout << "3��° ���� �Է�: ";
	std::cin >> val3;

	int val4;
	std::cout << "4��° ���� �Է�: ";
	std::cin >> val4;

	int val5;
	std::cout << "5��° ���� �Է�: ";
	std::cin >> val5;

	int result = val1 + val2 + val3 + val4 + val5;
	std::cout << "�հ�: "<<result;
}*/

//����2��
/*
int main(void)
{
	char name[100];
	std::cout << "�̸�: ";
	std::cin >> name;

	char pn[100];
	std::cout << "��ȭ��ȣ(ex:010-1234-5678): ";
	std::cin >> pn;

	std::cout << "�̸�: " << name<<std::endl;
	std::cout << "��ȭ��ȣ: " << pn;
}*/

//����3��
/*
int main(void)
{
	int num;
	std::cout << "���ϴ� ���ڸ� �Է��ϼ���: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++)
	{
		std::cout << num << "*" << i << "=" << num * i << std::endl;
	}
}*/

//����4��
int main(void)
{
	while (1)
	{
		int sell;

		std::cout << "�Ǹ� �ݾ��� ���� ������ �з�(-1 to end): ";
		std::cin >> sell;

		if (sell == -1)
		{
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}

		else
		{
			std::cout << "�̹��� �޿�: " << 50 + sell * 0.12 << "����" << std::endl;
		}
	}
}