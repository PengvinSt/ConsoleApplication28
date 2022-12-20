#include <iostream>;
#include <math.h>
using namespace std;



/*void main()
{
	long X = 0,Ar = 0,G=0, Rez[8] = { 1,2,3,4,5,6,7,8}, K = 1, B=8, D=0, ten = 10,two = 2, temp = 0, Max = 0;
	long t = 0;
	double x1 = 1, arr=0, Chislo = 0;
	for (int i = 0; i < 8; i++)
	{
		arr += Rez[i];
		//cout << "[" << x << "]" << "\t";
	}
	arr /= B;
	cout << "Arr = " << "[" << arr << "]" << endl;

	for (int i = 0; i < 8; i++)
	{
		if (Rez[i] > Chislo)
		{
			Chislo = Rez[i];
		}
	}
	cout << "Max = " << "[" << Chislo << "]" << endl;
	for (int i = 0; i < 8; i++)
	{
		x1 *= Rez[i];
	}
	for (int i = 0; i < 3; i++) { x1 = sqrt(x1); }
	cout << "Mul = " << "[" << x1 << "]" << endl;

	_asm
	{
		mov ECX, 7;
		lea EBX, Rez;
		mov EAX, dword ptr[EBX];
		cmp EAX, K;
		jb m1;
		mov K, EAX;
	m1:
	l1:
		add EBX, 4;
		mov EDX, dword ptr[EBX];
		mov t, EDX;
		cmp EDX, K;
		jb m2;
		mov K, EDX;
	m2:
		add EAX, EDX;
		mov EDX, 0;

		loop l1;
		div B;
		mov temp, EAX;
		mov EAX, EDX;
		mov t, EAX;
		mul two;
		cmp EAX, B;
		mov EAX, temp;
		jb m3;
		add EAX, 1;
	m3:
		mov X, EAX;
		mov Ar, EAX;

		mov EAX, K;
		mov Max, EAX;

		mul ten;
		mov K, EAX;
	m4:
		mov EAX, D;
		add D, 1;
		cmp EAX, X;
		jb m4;
		mul ten;
		mov D, EAX;
	m5:
		mov EAX, D;
		dec D;
		cmp EAX, K;
		jae m5;
	}
	cout << "Arr2 = " << "[" << Ar << "]" << endl << "Max2 = " << "[" << Max << "]" << endl;
}*/

void main()
{
	long X = 0, Rez[8] = { 1,12,23,2,32,11,10,18 }, K = 1;
	long t = 0;
	double x1 = 1;

	for (int i = 0; i < 8; i++)
	{
		x1 *= Rez[i];
	}
	for (int i = 0; i < 3; i++) { x1 = sqrt(x1); }
	cout << "Mul = " << "[" << x1 << "]" << endl;
	_asm
	{
		mov ECX, 7;
		lea EBX, Rez;
		mov EAX, dword ptr[EBX];
		

	l1:
		add EBX, 4;
		mov EDX, dword ptr[EBX];
		
		mul EDX;
		mov EDX, 0;

		loop l1;
		mov X, EAX;
		mov t, EAX;

	m1:
		mov EAX, K;
		mov ECX, 7;
	l2:
		mul K;
		loop l2;
		add K, 1;
		cmp EAX, X;
		jb m1;
		dec K;
	}
	cout << "Mul2 = " << "[" << K << "]" << endl;
}