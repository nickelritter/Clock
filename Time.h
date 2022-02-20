class Time
{
private:  // hidden when compiled 

	// 3 integers declared for class 'Time'
	int hour;
	int minute;
	int second;

public:
	// Function prototypes
	Time();
	Time(int h, int m, int s);
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	void setTime(int h, int m, int s);
	void printMilitary();
	void printStandard();
};
