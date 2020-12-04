using namespace std;
#include<iostream>
#include<string.h>

class Stud
{
    int roll;
    char name[20];
    char course[20];
public:
    Stud()
    {
       // cout<<"constr. called "<<endl;
        this->roll=1;
        strcpy(this->name,"Not_given");
        strcpy(this->course,"Engineering");
    }
    Stud(int roll, char* name, char* course)
    {
       // cout<<"para constr. called "<<endl;
        this->roll=roll;
        strcpy(this->name,name);
        strcpy(this->course,course);
    }
    void Set_roll(int roll)
    {
        this->roll=roll;
    }
    int Get_roll()
    {
        return this->roll;
    }
    
     void Set_name(char* name)
    {
        strcpy(this->name,name);
    }
    char* Get_name()
    {
        return this->name;
    }
    
    void Set_course(char* course)
    {
        strcpy(this->course,course);
    }
    char* Get_course()
    {
        return this->course;
    }

   void Enter_data()
    {
        cout<<"Enter name : "<<ends;
        cin>>this->name;

        cout<<"Enter roll no :"<<ends;
        cin>>this->roll;

        cout<<"Enter course name : "<<ends;
        cin>>this->course;

    }

    void display_data()
    {
        cout<<"Name of student is : "<<this->name<<endl;
        cout<<"Roll no. of student is : "<<this->roll<<endl;
        cout<<"Course Name of student is : "<<this->course<<endl;
    }

   void search_by_roll(Stud* s3, int id, int no)
    {
        int i;
        for(i=0;i<no;i++)
        {
        if(id==s3[i].roll)
        {
            cout<<"student is available";   
            break;
        }
        }
        if(id!=s3[i].roll)
        {
            cout<<"student is not available";
        }
        
    }

    ~Stud()
    {
        //cout<<"Destructor called";
    }
};

int main()
{
    Stud s1, s2(101, "Avinash_Kadam", "Prod_engg");
    
    //s1.Enter_data();
    //s1.display_data();

    //s2.display_data();

    int no;
    cout<<"Enter no of students : "<<ends;
    cin>>no;
    Stud s3[no];

    int i;
    for ( i = 0; i < no; i++)
    {
        cout<<"Enter details of student : "<<i+1<<endl;
        s3[i].Enter_data();
        cout<<endl;
    }

    cout<<endl;
    
    for ( i = 0; i < no; i++)
    {
        cout<<"Details of student"<<i+1<<endl;
        s3[i].display_data();
        cout<<endl;
    }

    int id;
    cout<<"Enter the roll no to find : "<<ends;
    cin>>id;
    s3[no].search_by_roll(s3,id,no);

    return 0;
}