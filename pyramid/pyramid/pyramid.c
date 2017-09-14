#include <stdio.h>
#include < conio.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77


void main()
{
	int a, n, i, j;

	while (1)
	{
		printf("층수를 입력하시오 : ");
		scanf_s("%d", &a);

		for (n = 1; n <= a; n++)
		{
			for (i = 1; i <= a - n; i++)
			{
				printf(" ");
			}

			for (j = 1; j <= 2 * n - 1; j++)
			{
				printf("*");
			}
			printf("\n");

		}

		printf("\n피라미드 회전은 방향키로 조작하세요.");

		while (1)
		{
			char ch;

			if (!_kbhit()){

				ch = _getch();

				if (ch == -32) {

					ch = _getch();

					switch (ch)
					{
					case RIGHT:
						for (n = a; n >= 0; n--) //90°
						{
							for (i = 1; i < a - n; i++)
							{
								printf("*");
							}
							printf("\n");
						}

						for (n = a; n >= 0; n--)
						{
							for (j = a; j > a - n; j--)
							{
								printf("*");
							}
							printf("\n");
						}
						printf("\n");

						break;

					case DOWN:
						for (n = a; n >= 0; n--) //180°
						{
							for (i = 1; i <= a - n; i++)
							{
								printf(" ");
							}

							for (j = 1; j <= 2 * n - 1; j++)
							{
								printf("*");
							}
							printf("\n");
						}
						printf("\n");

						break;

					case LEFT:
						for (n = 1; n <= a; n++) //270°
						{
							for (i = 1; i <= a - n; i++)
							{
								printf(" ");
							}

							for (j = 1; j <= n; j++)
							{
								printf("*");
							}
							printf("\n");

						}

						for (n = a; n >= 0; n--)
						{
							for (i = 0; i <= a - n; i++)
							{
								printf(" ");
							}

							for (j = a - 1; j > a - n; j--)
							{
								printf("*");
							}
							printf("\n");
						}
						printf("\n");

						break;

					case UP:
						for (n = 1; n <= a; n++) //360°
						{
							for (i = 1; i <= a - n; i++)
							{
								printf(" ");
							}

							for (j = 1; j <= 2 * n - 1; j++)
							{
								printf("*");
							}
							printf("\n");
						}
						break;
					}
				}
			}
		}
	}
}