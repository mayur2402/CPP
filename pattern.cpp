/*
	accept input from user and display below pattern

	input	:	4	4

	output	:	*  *  *  #	1,1  1,2  1,3  1,4		2  3  4  5
			*  *  #  *	2,1  2,2  2,3  2,4		3  4  5  6
			*  #  *  *	3,1  3,2  3,3  3,4		4  5  6  7
			#  *  *  *	4,1  4,2  4,3  4,4		5  6  7  8
*/

#include<iostream>
using namespace std;

class Pattern
{
	public :
	void Display_Pattern(int iRow,int iCol)
	{
		int i = 0,j = 0;

		if(iRow < 0)
		{
			iRow = -iRow;
		}
		if(iCol < 0)
		{
			iCol = -iCol;
		}
		if(iRow != iCol || iRow == 0 || iCol == 0)
		{
			return ;
		}
		else
		{
			for(i = 1;i <= iRow;i++)
			{
				for(j = 1;j <= iCol;j++)
				{
					if(i+j != iCol+1)
					{
						cout<<"*\t";
					}
					else
					{
						cout<<"#\t";
					}
				}
				printf("\n");
			}
		}
	}
};
int main()
{
	int iRow = 0,iCol = 0;

	printf("\nHow Many Rows\t");
	scanf("%d",&iRow);

	printf("\nHow Many Columns\t");
	scanf("%d",&iCol);

	Pattern Pobj;
	Pobj.Display_Pattern(iRow,iCol);
	return 0;
}
