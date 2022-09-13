//입출력 라이브러리
#include <iostream>
using namespace std; // std 명명해서 코드 줄이기 

//Entry Point
int main() //메인함수. 입력값 x, 반환값 int
{
	int Ko[10] = { 0, };
	
	int Total = 0;

	// if문 버전 홀수
	for(int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			Total = Total + i;
		}
		cout << Total << endl;
	}
	cout << "홀수합 : " << Total << endl;

	Total = 0; // Total 초기화

	// no if 버전 홀수
	for (int i = 1; i <= 100; i=i+2)
	{
		Total = Total + i;

		cout << Total << endl;
	}
	cout << "홀수합 : " << Total << endl;


	return 0;
}