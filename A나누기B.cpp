#include <iostream>
#include <windows.h>
using namespace std;

//  A / B �Լ�
void abDivision(double A, double B)
{
	double result = 0;	// ������ ������ ����

	try
	{

		if (B == 0)	// B�� 0�̶�� ����ó��
		{
			throw B;
		}

		// B�� 0�� �ƴ϶�� ����� ���
		result = A / B;	
		cout << endl << "A: " << A << ", B: " << B << endl;
		cout << "A / B = " << A / B << endl;

	}

	// 
	catch(double expn)
	{
		if(expn == 0)
		{
		cout << endl << "error : B�� ���� 0 �Դϴ�." << endl;
		}
	}
}


int main()
{

	double A = 0, B = 0;

	cout << "-------- A / B --------" << endl << endl;
	cout << "A�� �Է��ϼ���: ";
	cin >> A;
	cout << "B�� �Է��ϼ���: ";
	cin >> B;

	if (!cin)	// ���ڸ� �Է¹����� 0�� ��ȯ, ���� ���� �� 1�� ��ȯ
	{
		cout << endl << endl << "error: ���ڸ� �Է����ּ���" << endl;
		exit(1);
	}

	else
	{
		abDivision(A, B);
	}

}