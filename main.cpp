//����� ���̺귯��
#include <iostream>
using namespace std; // std ����ؼ� �ڵ� ���̱� 

//Entry Point
int main() //�����Լ�. �Է°� x, ��ȯ�� int
{
	int Ko[10] = { 0, };
	
	int Total = 0;

	// if�� ���� Ȧ��
	for(int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			Total = Total + i;
		}
		cout << Total << endl;
	}
	cout << "Ȧ���� : " << Total << endl;

	Total = 0; // Total �ʱ�ȭ

	// no if ���� Ȧ��
	for (int i = 1; i <= 100; i=i+2)
	{
		Total = Total + i;

		cout << Total << endl;
	}
	cout << "Ȧ���� : " << Total << endl;


	return 0;
}