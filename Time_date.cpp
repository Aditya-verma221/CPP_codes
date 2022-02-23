#include<iostream>
#include<ctime>
using namespace std;

class time{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    private:
    int hour;
    int second;
    int minute;


    void setTime(int h,int m,int s){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        h = 5 + ltm->tm_hour;
        m = 30 + ltm->tm_min;
        s = ltm->tm_sec;
        hour = h;
        minute = m;
        second = s;
    }
    void getTime(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        cout<< 5+ltm->tm_hour<<":"<<30 + ltm->tm_min<<":"<<ltm->tm_sec<<endl;
    }
    sleepTime()


};
class date{
    public:
    int day,month,year;

    setDate(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        day = ltm->tm_mday;
        month = ltm->tm_mon + 1;
        year = ltm->tm_year + 1900;
    }
    getDate(){
        time_t now = time(0);
        tm *ltm = localtime(&now);
        cout<< 5+ltm->tm_hour<<":"<<30 + ltm->tm_min<<":"<<ltm->tm_sec<<endl;
    }
    setDoB()
    findAge()
};