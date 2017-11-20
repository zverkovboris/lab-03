#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

enum Score
{
    Unsatisfactory = 2,
    Satisfactory,
    Good,
    Excellent
};
struct Course
{
    std::string Title;
    Score Rating;
};
struct Student
{
    std::vector<Course> RecordBook;
};
bool UnsatisfactoryMark(const Student& a)
{
    for (int i = 0; i < a.RecordBook.size(); ++i)
    {
        if (a.RecordBook[i].Rating == 2)
        {
            return true;
        }
    }
    return false;
}


bool allExcellentMarks(const Student& a)
{
    for (int i = 0; i < a.RecordBook.size(); ++i)
    {
        if (a.RecordBook[i].Rating != Score(5))
        {
            return false;
        }
    }
    return true;
}

float average(Student a)
{
    float sum = 0;
    float size = a.RecordBook.size();
    for (int i = 0; i < a.RecordBook.size(); ++i)
    {
        sum += a.RecordBook[i].Rating;
    }
    return (sum / size);
}
bool chooseTheBest(const Student& a, const Student& b)
{
    return average(a) < average(b);
}
bool mathGreat(const Student& a)
{
    for (const auto s : a.RecordBook)
    {
        if ((s.Title == "Math") && (s.Rating == 5))
        {
            return true;
        }
    }
    return false;
}
bool mlUnsatisfactory(const Student& a)
{
    for (const auto s : a.RecordBook)
    {
        if ((s.Title == "ML") && (s.Rating == 2))
        {
            return true;
        }
    }
    return false;
}
bool alPassed(const Student& a)
{
    for (const auto s : a.RecordBook)
    {
        if ((s.Title == "Al") && (s.Rating > 2))
        {
            return true;
        }
    }
    return false;
}

void main()
{
    Course al2 = { "Al", Score(2) };
    Course al3 = { "Al", Score(3) };
    Course al4 = { "Al", Score(4) };
    Course al5 = { "Al", Score(5) };
    Course math2 = { "Math", Score(2) };
    Course math3 = { "Math", Score(3) };
    Course math4 = { "Math", Score(4) };
    Course math5 = { "Math", Score(5) };
    Course ml2 = { "ML", Score(2) };
    Course ml3 = { "ML", Score(3) };
    Course ml4 = { "ML", Score(4) };
    Course ml5 = { "ML", Score(5) };
    std::vector<Course> s1 = { al3,math3, ml3 };
    std::vector<Course> s2 = { al4,math2, ml5 };
    std::vector<Course> s3 = { al5,math5, ml5 };
    std::vector<Course> s4 = { al2,math3, ml2 };
    Student student1 = { s1 };
    Student student2 = { s2 };
    Student student3 = { s3 };
    Student student4 = { s4 };
    std::vector<Student> students = { student1,student2,student3,student4 };
    std::cout << "Number of students with mark unsatisfactorily: " <<
        std::count_if(students.begin(), students.end(), UnsatisfactoryMark) << std::endl;
    std::cout << "Number of students whose all marks' excellent: " <<
        std::count_if(students.begin(), students.end(), allExcellentMarks) << std::endl;
    auto b = std::max_element(students.begin(), students.end(), chooseTheBest);
    std::cout << "Student with the best average: " << b -students.begin() << std::endl;
    auto vec = std::for_each(students.begin(), students.end(), average);
    for (int i = 0; i < students.size(); ++i)
    {
        std::cout << "Average of " << i << " student : " <<  vec(students[i]) << std::endl;
    }
    auto st = std::find_if(students.begin(), students.end(), mathGreat);
    std::cout << st - students.begin() << std::endl;
    st = std::find_if(students.begin(), students.end(), mlUnsatisfactory);
    std::cout << st - students.begin() << std::endl;
    auto l = std::all_of(students.begin(), students.end(), alPassed);
    std::cout << l;
}
