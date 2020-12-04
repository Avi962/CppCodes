using namespace std;
#include<iostream>
#include<string.h>

class Time
{
private:
    int hours, min, sec ;
public:
    Time()
    {
        this->hours=12;
        this->min=00;
        this->sec=00;
    }
    Time(int h, int m, int s)
    {
        this->hours=h;
        this->min=m;
        this->sec=s;
    }
    void display_time()
    {
        cout<<"Time is : "<<this->hours<<":"<<this->min<<":"<<this->sec<<endl;
    }

   bool operator==(const Time& t3)
   {
       return(this->hours==t3.hours && this->min==t3.min && this->sec==t3.sec);
   }

    Time operator-(const Time& t2)
    {
        Time t1;
        t1.hours=this->hours-t2.hours;
        t1.min=this->min-t2.min;
        t1.sec=this->sec-t2.sec;
        return t1;
    }

    ~Time()
    {
        //cout<<"Destructor called";
    }
};

int main()
{
    Time t1,t2(1,12,56),t3(3,24,56);
    t1.display_time();
    t2.display_time();
    t3.display_time();
    if(t2==t3)          //t2.operator==(const Time& t3);
    {
        cout<<"Time is same"<<endl;
    }
    else{
        cout<<"Time is not same"<<endl;
    }
    t1=t3-t2;       //t3.operator-(const Time& t2);
    cout<<"The difference between time is : "<<endl;
    t1.display_time();
}