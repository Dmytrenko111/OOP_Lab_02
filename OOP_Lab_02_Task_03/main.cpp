#include<iostream>

using namespace std;

class Time {
private:
    int *hour;
    int *minute;
    int *second;
public:
    Time();
    Time(int hour, int minute, int second);
    Time(const Time &one);
    ~Time();
    
    void SetHour(int hhour);
    void SetMinute(int mminute);
    void SetSecond(int ssecond);
    int GetHour();
    int GetMinute();
    int GetSecond();
};

Time::Time()
{
    this->hour = new int;
    this->minute = new int;
    this->second = new int;
}

Time::Time(int hour, int minute, int second)
{
    this->hour = new int(hour);
    this->minute = new int(minute);
    this->second = new int(second);
}

Time::Time(const Time &one)
{
    hour = new int(*one.hour);
    minute = new int(*one.minute);
    second = new int(*one.second);
}

Time::~Time()
{
    delete hour;
    delete minute;
    delete second;
}

void Time::SetHour(int hhour)
{
    if (hhour < 0 || hhour > 23)
    {
        throw "false hour";
    }
    
    *hour = hhour;
}

void Time::SetMinute(int mminute)
{
    if (mminute < 0 || mminute > 59)
    {
        throw "false minute";
    }
    
    *minute = mminute;
}

void Time::SetSecond(int ssecond)
{
    if (ssecond < 0 || ssecond > 59)
    {
        throw "false second";
    }
    
    *second = ssecond;
}

int Time::GetHour()
{
    return *hour;
}

int Time::GetMinute()
{
    return *minute;
}

int Time::GetSecond()
{
    return *second;
}

int main(void)
{
    Time* one = new Time;
    int hour = 0, minute = 0, second = 0;
    cout << "\t\t\t    Enter the time:" << endl;
    cout << "Hour: ";
    cin >> hour;
    one->SetHour(hour);
    cout << "Minute: ";
    cin >> minute;
    one->SetMinute(minute);
    cout << "Second: ";
    cin >> second;
    one->SetSecond(second);
    cout << endl << "\t\t\t    Time:" << endl<<endl;
    cout <<"First variant:\n" << one->GetHour() << " hour " << one->GetMinute() << " minute " << one->GetSecond() << " second" << endl<<endl;
    cout << "Second variant:\n" <<one->GetHour() << ":" << one->GetMinute() << ":" << one->GetSecond() << endl;
    return 0;
}
