#ifndef BIRTHDAY_H
#define BIRTHDAY_H
using namespace std;

class Birthday {
    public:
        Birthday(int d, int m, int y)
        :day(d), month(m), year(y) {
        }

        void printDate() {
            cout<<day<<'/'<<month<<'/'<<year<<'\n';
        }

    private:
        int day;
        int month;
        int year;
};

#endif