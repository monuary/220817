#include <iostream>

//급여 계산 프로그램

int main()
{
	int x;
	for (int i = 0; i < 1; i++)//조건부 반복 시스템. i=0를 반복한다.
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> x;
		if (x >= 0)
		{
			std::cout << "이번 달 급여: " << 50 + (x * 12 / 100) << "만원\n";
			i = i - 1;
		}
		else if (x != -1)
		{
			std::cout << "판매 금액이 0보다 적을 수는 없습니다. 재입력해주십시오.\n";
			i = i - 1;
		}
	}
	std::cout << "프로그램을 종료합니다.";
	return 0;
}