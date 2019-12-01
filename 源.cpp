#include <stdio.h>
#include <string.h>

//void _0x_return_();
//int main()
//{
//	_0x_return_();
//
//	return 0;
//}
//void _0x_return_()
//{
//	char getin[80] = {NULL};
//	int sum = 0;
//	scanf("%s", getin);
//	for (int i = 0; i < strlen(getin); i++)
//	{
//		switch (getin[i])
//		{
//		case '0':
//			sum += 0;
//			break;
//		case '1':
//			sum += 1;
//			break;
//		case '2':
//			sum += 2;
//			break;
//		case '3':
//			sum += 3;
//			break;
//		case '4':
//			sum += 4;
//			break;
//		case '5':
//			sum += 5;
//			break;
//		case '6':
//			sum += 6;
//			break;
//		case '7':
//			sum += 7;
//			break;
//		case '8':
//			sum += 8;
//			break;
//		case '9':
//			sum += 9;
//			break;
//		case 'a':
//			sum += 10;
//			break;
//		case 'b':
//			sum += 11;
//			break;
//		case 'c':
//			sum += 12;
//			break;
//		case 'd':
//			sum += 13;
//			break;
//		case 'e':
//			sum += 14;
//			break;
//		case 'f':
//			sum += 15;
//		case 'A':
//			sum += 10;
//			break;
//		case 'B':
//			sum += 11;
//			break;
//		case 'C':
//			sum += 12;
//			break;
//		case 'D':
//			sum += 13;
//			break;
//		case 'E':
//			sum += 14;
//			break;
//		case 'F':
//			sum += 15;
//			break;
//		default:
//			break;
//		}
//		if (getin[i+1])
//		{
//			sum *= 16;
//		}
//		else
//		{
//			printf("%d",sum);
//			break;
//		}
//	}
//
//}

void Changer(int in, char c[], int num);
int main()
{
	int in = 0, n = 0;
	char c[72] = { NULL };
	scanf("%d", &in);
	for (int i = in; i; i /= 10)
	{
		n++;
	}
	Changer(in, c, n - 1);
	printf(c);
	return 0;
}

void Changer(int in, char* c, int num)
{

	if (in / 10)
	{
		Changer(in / 10, c, num - 1);
	}
	c[num] = (in % 10) + 48;
}