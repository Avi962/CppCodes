using namespace std;
#include<iostream>

class Date
{
    int dd, mm, yyyy;

    public:

    Date()
    {
        this->dd=01;
        this->mm=01;
        this->yyyy=2001;
    }

    Date(int d, int m, int y)
    {
        this->dd=d;
        this->mm=m;
        this->yyyy=y;
    }

    void SetDay(int d)
    {
        this->dd=d;
    }
    void SetMonth(int m)
    {
        this->mm=m;
    }
    void SetYear(int y)
    {
        this->yyyy=y;
    }

    void display_date()
    {
        cout<<"Date is : "<<this->dd<<"/"<<this->mm<<"/"<<this->yyyy<<endl;
    }

    Date operator-(const Date& d4)
    {
        Date d3;
        d3.dd=this->dd-d4.dd;
        d3.mm=this->mm-d4.mm;
        d3.yyyy=this->yyyy-d4.yyyy;
        return d3;
    }
    
    ~Date()
    {
       // cout<<"Destructor is called";
    }
};

int main()
{
    Date d1, d2(30, 04, 2020),d3;
    d1.display_date();
    d2.display_date();

    Date d4;
    int d, m, y;
    cout<<"Enter day";
    cin>>d;
    d4.SetDay(d);
    cout<<"Enter Month";
    cin>>m;
    d4.SetMonth(m);
    cout<<"Enter year";
    cin>>y;
    d4.SetYear(y);
    d3=d2-d4;   //  d2.operator-(const Date& d4);
    cout<<"Difference is : ";
    d3.display_date();
}