#include <iostream>
#include <windows.h>
using namespace std;

//  A / B 함수
void abDivision(double A, double B)
{
	double result = 0;	// 나누기 최종값 저장

	try
	{

		if (B == 0)	// B가 0이라면 예외처리
		{
			throw B;
		}

		// B가 0이 아니라면 결과값 계산
		result = A / B;	
		cout << endl << "A: " << A << ", B: " << B << endl;
		cout << "A / B = " << A / B << endl;

	}

	// 
	catch(double expn)
	{
		if(expn == 0)
		{
		cout << endl << "error : B의 값이 0 입니다." << endl;
		}
	}
}


int main()
{

	double A = 0, B = 0;

	cout << "-------- A / B --------" << endl << endl;
	cout << "A를 입력하세요: ";
	cin >> A;
	cout << "B를 입력하세요: ";
	cin >> B;

	if (!cin)	// 숫자만 입력받으면 0을 반환, 문자 포함 시 1을 반환
	{
		cout << endl << endl << "error: 숫자만 입력해주세요" << endl;
		exit(1);
	}

	else
	{
		abDivision(A, B);
	}

}