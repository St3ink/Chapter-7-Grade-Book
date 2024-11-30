/*
Title: Chapter 7 Grade Book
File Name:
Programmer: Kason Steiner
Date: 11/2024
A teacher has five students who have taken four tests. The teacher uses the following 
grading scale to assign a letter grade to a student, based on the average of his or her four test scores:
Write a program that uses an array of string objects to hold the five student names, 
an array of five characters to hold the five students' letter grades, and five arrays of
four doubles to hold each student's set of test scores. The program should allow the user to enter each 
student's name and his or her four test scores. It should then calculate and display each student's average test score, 
and a letter grade based on the average. Input Validation: Do not accept test scores less than 0 or greater than 100.
*/
#include <iostream>
using namespace std;
const int STUDENTS = 5;
const int TESTS = 4;

void getNames(string studentName[]);
void student1scores(double student1[], string studentName[], int studenIndex);
void student2scores(double student2[], string studentName[], int studenIndex);
void student3scores(double student3[], string studentName[], int studenIndex);
void student4scores(double student4[], string studentName[], int studenIndex);
void student5scores(double student5[], string studentName[], int studenIndex);
double getAvg1(double student1[]);
double getAvg2(double student2[]);
double getAvg3(double student3[]);
double getAvg4(double student4[]);
double getAvg5(double student5[]);
char getLetterGrade(double avg);
int main() 
{
  string studentName[STUDENTS];
  double student1[TESTS];
  double student2[TESTS];
  double student3[TESTS];
  double student4[TESTS];
  double student5[TESTS];
  double avg1, avg2, avg3, avg4, avg5;
  char grade1, grade2, grade3, grade4, grade5;
  int count = 0;
  

  getNames(studentName);
  student1scores(student1,studentName,0);
  student1scores(student2,studentName,1);
  student1scores(student3,studentName,2);
  student1scores(student4,studentName,3);
  student1scores(student5,studentName,4);
  avg1 = getAvg1(student1);
  avg2 = getAvg2(student2);
  avg3 = getAvg3(student3);
  avg4 = getAvg4(student4);
  avg5 = getAvg5(student5);
  grade1 = getLetterGrade(avg1);
  grade2 = getLetterGrade(avg2);
  grade3 = getLetterGrade(avg3);
  grade4 = getLetterGrade(avg4);
  grade5 = getLetterGrade(avg5);

  cout << studentName[count] << "\n Average: " << avg1 << "\n Letter Grade: " << grade1 << endl;
  cout << studentName[count + 1] << "\n Average: " << avg2 << "\n Letter Grade: " << grade2 << endl;
  cout << studentName[count + 2] << "\n Average: " << avg3 << "\n Letter Grade: " << grade3 << endl;
  cout << studentName[count + 3] << "\n Average: " << avg4 << "\n Letter Grade: " << grade4 << endl;
  cout << studentName[count + 4] << "\n Average: " << avg5 << "\n Letter Grade: " << grade5 << endl;
  return 0;
}
void getNames(string studentName[])
{
  int num = 1;
  for (int i =0; i < STUDENTS; i++)
    {
      cout << "Please enter the name of student number " << num << endl;
      cin >> studentName[i];
      num++;
    }
}
void student1scores(double student1[], string studentName[], int studenIndex)
{
  for (int i = 0; i < TESTS; i++) {
      double score;
      do {
        cout << "Enter the score for " << studentName[studenIndex] << ": ";
        cin >> score;
        if (score < 0 || score > 100) {
          cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        }
      } while (score < 0 || score > 100); 
      student1[i] = score;
    }
}
void student2scores(double student2[], string studentName[], int studenIndex)
{
  for (int i = 0; i < TESTS; i++) {
      double score;
      do {
        cout << "Enter the score for " << studentName[studenIndex] << ": ";
        cin >> score;
        if (score < 0 || score > 100) {
          cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        }
      } while (score < 0 || score > 100); 
      student2[i] = score;
    }
}
void student3scores(double student3[], string studentName[], int studenIndex)
{
  for (int i = 0; i < TESTS; i++) {
      double score;
      do {
        cout << "Enter the score for " << studentName[studenIndex] << ": ";
        cin >> score;
        if (score < 0 || score > 100) {
          cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        }
      } while (score < 0 || score > 100); 
      student3[i] = score;
    }
}
void student4scores(double student4[], string studentName[], int studenIndex)
{
  for (int i = 0; i < TESTS; i++) {
      double score;
      do {
        cout << "Enter the score for " << studentName[studenIndex] << ": ";
        cin >> score;
        if (score < 0 || score > 100) {
          cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        }
      } while (score < 0 || score > 100); 
      student4[i] = score;
    }
}
void student5scores(double student5[], string studentName[], int studenIndex)
{
  for (int i = 0; i < TESTS; i++) {
      double score;
      do {
        cout << "Enter the score for " << studentName[studenIndex] << ": ";
        cin >> score;
        if (score < 0 || score > 100) {
          cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        }
      } while (score < 0 || score > 100); 
      student5[i] = score;
    }
}
double getAvg1(double student1[])
{
    double total = 0;
  double avg;
  for (int i = 0; i < 4; ++i)
      total += student1[i];
    avg = total/4;
    return avg;
}
double getAvg2(double student2[])
{
    double total = 0;
  double avg;
  for (int i = 0; i < 4; ++i)
      total += student2[i];
    avg = total/4;
    return avg;
}
double getAvg3(double student3[])
{
    double total = 0;
  double avg;
  for (int i = 0; i < 4; ++i)
      total += student3[i];
    avg = total/4;
    return avg;
}
double getAvg4(double student4[])
{
    double total = 0;
  double avg;
  for (int i = 0; i < 4; ++i)
      total += student4[i];
    avg = total/4;
    return avg;
}
double getAvg5(double student5[])
{
    double total = 0;
  double avg;
  for (int i = 0; i < 4; ++i)
      total += student5[i];
    avg = total/4;
    return avg;
}
char getLetterGrade(double avg) {
  char grade;
  switch (int(avg / 10)) {
    case 9:
    case 10:
      grade = 'A';
      break;
    case 8:
      grade = 'B';
      break;
    case 7:
      grade = 'C';
      break;
    case 6:
      grade = 'D';
      break;
    default:
      grade = 'F';
  }
  return grade;
}