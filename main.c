#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int D,M,Y;
	int tongNgayTrongNam = 0;
	
	printf("Day: ");
	scanf("%d", &D);
	
	printf("Month: ");
	scanf("%d", &M);
	
	printf("Year: ");
	scanf("%d", &Y);
	
	for(int i = 1; i < M; i++)
	{
		switch(i)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				tongNgayTrongNam = tongNgayTrongNam + 31;
				break;
				
			case 4: case 6: case 9: case 11: 
				tongNgayTrongNam = tongNgayTrongNam + 30;
				break;
			case 2: 
				if(M%4==0)
				{
//					printf("Nam Nhuan 29 ngay ");
					tongNgayTrongNam = tongNgayTrongNam + 29;
				}
				else
				{
//					printf("Nam Nhuan 29 ngay ");
					tongNgayTrongNam = tongNgayTrongNam + 28;
				}
				break;
		}
		
		
	}
	tongNgayTrongNam = tongNgayTrongNam + D;
	printf("Tong cac ngay trong nam la: %d ", tongNgayTrongNam);
	return 0;
}
