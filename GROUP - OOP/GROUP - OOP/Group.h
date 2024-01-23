#pragma once
#include "Student.h"

class Group {

    unsigned short countstudent = 0;
public:
    Student** classmates = nullptr;
private:
    string group_name;
    string specification;
    unsigned short number_of_course;


public:
    Group();
    Group(const Group& original);
    void Print() const;
    void AddStudent(const Student& new_student);
    void WeanStudent(unsigned short index);
    void Expel();
    void SetCountOfStudent(int countstudent);
    int GetCountOfStudent() const;
    void SetGroupName(string group_name);
    string GetGroupName() const;
    void SetSpecification(string specification);
    string GetSpecification() const;
    void SetNumberOfCourse(int number_of_course);
    int GetNumberOfCourse() const;
    ~Group();
};