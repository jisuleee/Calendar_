


#include "calendar.h"
#include "config.h"
#include <iomanip>			// setw() �Լ��� ����ϰ� ���ִ� ��� ����


int main() {




	int year;
	int month;



	cout << "���ϴ� �⵵�� ���� �Է��ϼ���:" << endl;

	cin >> year >> month;



	printf("****************************");

	printf("\n��  ��  ȭ  ��  ��  ��  ��");

	printf("\n****************************\n");



	for (int i = 0; i < WeekDay(year, month, 1)+1; i++) {
		printf("   ");

	}



	for (int i = 1; i < EndDay(year, month)+1; i++) {


		cout << setw(3) << i << " ";   //cout���� ����� �ڸ����� �����Ѵ�.(���� ����)
        //printf(" %2d ", i);




		if (WeekDay(year,month,i) == 6 and i != EndDay(year,month)) {

			cout << endl;
            }
		}

}




