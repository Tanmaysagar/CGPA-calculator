#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

float gradeToPoint(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0; 
    }
}

int main() {
    int numCourses;
    
    cout << "Enter the number of courses: ";
    cin >> numCourses;
    
    vector<int> credits(numCourses);
    vector<char> grades(numCourses);
    float totalCredits = 0.0;
    float totalGradePoints = 0.0;
    
    for (int i = 0; i < numCourses; ++i) {
        cout << "Course " << (i + 1) << ":\n";
        cout << "  Enter number of credits: ";
        cin >> credits[i];
        cout << "  Enter grade (A, B, C, D, F): ";
        cin >> grades[i];
        
        float gradePoint = gradeToPoint(grades[i]);
        totalCredits += credits[i];
        totalGradePoints += credits[i] * gradePoint;
        
        cout << "  Grade Points for this course: " << gradePoint << "\n";
    }
    

    float gpa = totalGradePoints / totalCredits;
    
    
    cout << fixed << setprecision(2); 
    cout << "Total Credits: " << totalCredits << "\n";
    cout << "Total Grade Points: " << totalGradePoints << "\n";
    cout << "GPA for the semester: " << gpa << "\n";
    
    return 0;
}
