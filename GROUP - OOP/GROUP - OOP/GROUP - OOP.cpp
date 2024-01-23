using namespace std;
#include "Student.h"
#include "Date.h"
#include "Group.h"
#include "Fraction.h"

Group operator + (const Group& one, const Group two)
{

    Group result;
    result.SetGroupName(one.GetGroupName() + two.GetGroupName());
    result.SetNumberOfCourse(one.GetNumberOfCourse());
    result.SetSpecification(one.GetSpecification());

    for (int i = 0; i < one.GetCountOfStudent(); i++)
    {
        result.AddStudent(*one.classmates[i]);
    }
    for (int i = 0; i < two.GetCountOfStudent(); i++)
    {
        result.AddStudent(*two.classmates[i]);
    }

    return result;

}

int operator - (const Date& date_now, const Date& other_date)
{
    int thisDays = date_now.GetDay() + 31 * (date_now.GetMonth() - 1);
    int otherDays = other_date.GetDay() + 31 * (other_date.GetMonth() - 1);

    thisDays += (date_now.GetYear() % 4 == 0 && date_now.GetMonth() > 2);
    otherDays += (other_date.GetYear() % 4 == 0 && other_date.GetMonth() > 2);

    thisDays += (date_now.GetMonth() > 1);
    otherDays += (other_date.GetMonth() > 1);

    thisDays += date_now.GetMonth() / 2 + ((date_now.GetMonth() % 2 == 0 && date_now.GetMonth() > 7));
    otherDays += other_date.GetMonth() / 2 + ((other_date.GetMonth() % 2 == 0 && other_date.GetMonth() > 7));

    thisDays += 365 * (date_now.GetYear() - 1);
    otherDays += 365 * (other_date.GetYear() - 1);

    return thisDays - otherDays;
}

int main()
{
    /*Student a;
    a.AddExam(11);
    a.AddExam(12);
    Student b;
    b.AddExam(10);
    b.AddExam(9);
    Group g;
    g.AddStudent(a);
    g.AddStudent(b);
    g.Print();
    g.Expel();
    g.Print();

    Student copya;
    copya = a;
    Student copyb;
    copyb = b;
    Group copy;
    copy = g;
    copy.Print();    */
	//Fraction: 
	//Fraction m(1, 2);
	//Fraction x(1, 4);
	////int + Fraction
	//Fraction result = 5 + m;
	//result.Print();
	////double + Fraction
	//Fraction resul = 12.99 + x;
	//resul.Print();
	////Fraction + int
	//Fraction res = x + 2;
	//res.Print();
	////Fraction + double
	//Fraction re = x + 2;
	//re.Print();
    //Group: 
    //Group group_one;
    //Student one_student;
    //Student two_student;
    //Student three_student;
    //Student four_student;
    //Student five_student;
    //group_one.AddStudent(one_student);
    //group_one.AddStudent(two_student);
    //group_one.AddStudent(three_student);
    //group_one.AddStudent(four_student);
    //group_one.AddStudent(five_student);

    //Group group_two;
    //Student six_student;
    //Student seven_student;
    //Student eight_student;
    //Student nine_student;
    //Student ten_student;
    //Student eleven_student;
    //group_two.AddStudent(six_student);
    //group_two.AddStudent(seven_student);
    //group_two.AddStudent(eight_student);
    //group_two.AddStudent(nine_student);
    //group_two.AddStudent(ten_student);
    //group_two.AddStudent(eleven_student);

    //Group new_group = group_one + group_two;

    //new_group.Print(); 

    //Date:
    Date now;
    Date start(23, 12, 2022);
    int days = now - start;
    cout << days;
}