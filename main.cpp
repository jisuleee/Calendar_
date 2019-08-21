


#include "calendar.h"
#include "config.h"
#include <iomanip>			// setw() 함수를 사용하게 해주는 헤더 파일


int main() {




	int year;
	int month;



	cout << "원하는 년도와 월을 입력하세요:" << endl;

	cin >> year >> month;



	printf("****************************");

	printf("\n일  월  화  수  목  금  토");

	printf("\n****************************\n");



	for (int i = 0; i < WeekDay(year, month, 1)+1; i++) {
		printf("   ");

	}



	for (int i = 1; i < EndDay(year, month)+1; i++) {


		cout << setw(3) << i << " ";   //cout으로 출력할 자리수를 지정한다.(간격 조정)
        //printf(" %2d ", i);




		if (WeekDay(year,month,i) == 6 and i != EndDay(year,month)) {

			cout << endl;
            }
		}

}




