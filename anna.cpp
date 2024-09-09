/*Anna is a contender for the position of valedictorian at her high school and is curious about how many students have achieved higher
 scores than she has in the exams taken this semester. To address this, you need to create a class named Student with specific features. 
 This class should include an instance variable scores that stores a student's five exam scores. It should also have a method void input() 
 to read five integer scores from standard input and save them to the scores variable. Additionally, the class should provide a method int 
 calculateTotalScore() that returns the sum of the scores. Once this class is implemented, the code will compare Anna's total score against 
 those of other students to determine and print the number of students who have scored higher than her. */

#include <iostream>
using namespace std;

class Student{
int scores[5];

public:

//Member Function to Take Input
void input(){
   for(int i=0;i<5;i++){
      cin>>scores[i];
   }
}

// Member function to Calculate the total Score
int calculateTotalScore(){
   int sum;
   for(int i=0;i<5;i++){
      sum +=scores[i];
   }
}

};

int main(){
Student d1[5];    

for(int i=0;i<5;i++){
   d1[i].input();
}

// Store 1st student marks as anna Marks.

int annaScore = d1[0].calculateTotalScore();

// Store marks for Rest of students.
int c=0;
for(int i=1;i<5;i++){
   int StudentScores = d1[i].calculateTotalScore();
   if(StudentScores > annaScore) c++;
}

cout<<"Number of Students who scored higher than Anna : " << c <<endl;



}