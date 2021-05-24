//calcuate percentages of numbers;

#include <iostream>

using namespace std;

// Student structure
struct Student
{
    // Stores the name of Student
    string name;
    // Stores the marks of student in 4 subjects
    double marks[4];
};

// calculate_percentage function
double calculate_percentage(struct Student s)
{
    // Initialize variables
    double total = 0, percentage = 0;
    // for loop to traverse marks of Student
    for (int i = 0; i < 4; i++)
    {
        // Add marks of Student in total
        total = total + s.marks[i];
    }
    // Calculate percentage
    percentage = (total / 400) * 100;
    // Return percentage of Student
    return percentage;
}

// print_Student function
void print_Student(struct Student s)
{

    cout << "Name of student = " << s.name << endl;
    cout << "Student marks:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Student marks in subject" << i + 1 << "=" << s.marks[i] << endl;
    }
}

// main function
int main()
{
    // Declare structure variable s of type Student
    struct Student s;
    // Declare variable of type double
    double result;
    // Initialize members of s
    s = {"John", {30.5, 49.7, 22.3, 32.9}};
    // Call function calculate_percentage and store output in result
    result = calculate_percentage(s);
    // Call print_Student function to print members of s
    print_Student(s);
    // Print percentage of Student
    cout << "percentage = " << result << "%";
    return 0;
}