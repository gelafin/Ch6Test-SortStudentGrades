#include <iostream>
#include <vector>
#include <string>
#include <utility>

struct Student{
  std::string firstName;
  int grade;
};

void setScores(Student *const students, const int numStudents){
  std::cout << "Enter each student's first name and grade on separate lines.\n\n";
  for (int index {0}; index < numStudents; index++){
    std::cout << "Student " << index + 1 << " first name: ";
    std::cin >> students[index].firstName;
    std::cout << "Student " << index + 1 << " grade: ";
    std::cin >> students[index].grade;
    std::cout << "\n";
  }
}

void printScores(const Student *const students, const int numStudents){
for (int index {0}; index < numStudents; index++){
  std::cout << students[index].firstName << " got a grade of " << students[index].grade << ".\n";
  }
}

void sortScores(Student *const students, const int numStudents){
  for (int progress {0}; progress < numStudents; progress++){
    int highestIndex {0};
    bool highestFound {false};
    for (int highestFinder = progress + 1; highestFinder < numStudents; highestFinder++){
      if (students[highestFinder].grade > students[highestIndex].grade){
        highestIndex = highestFinder;
        highestFound = true;
      }
    }
      if (highestFound){
        std::swap(students[highestIndex], students[progress]);
      }
      else{
        break;
      }
  }
}

int main(){

std::cout << "How many students in this class? ";
int numStudents;
std::cin >> numStudents;
//use built-in dynamic arr for this quiz question
Student *students = new Student[numStudents];

setScores(students, numStudents);

std::cout << "sorting scores...\n";

sortScores(students, numStudents);

printScores(students, numStudents);

delete[] students;

int sillyViewerVariable;
std::cin >> sillyViewerVariable;
  return 0;
}
