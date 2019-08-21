
bool isLeapYear(int year){



	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? true : false;

}


int EndDay(int year, int month) {

	int m[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (isLeapYear(year)) {

		m[1] = 29;

	}
	return m[month - 1];
}




int totalDay(int year, int month, int day) {


	int total = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

	//for (int i = 0; i < month - 1; i++)

	for (int i = 1; i< month; i++){        //EndDay의 return값이 m[month-1]이므로 i가 1 부터 시작해도 1월달로 계산됨

		//total += EndDay(year, month);

		total += EndDay(year, i);
	}


	total += day;
	return total;

}



int WeekDay(int year, int month, int day) {


	int n = totalDay(year, month, day) % 7;
	return n;

}


