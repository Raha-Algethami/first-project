#include <iostream>
#include <string>
using namespace std;
int main ()
{
const int StudentNUM= 10, TestNum=5;
string names[StudentNUM];
double scores[StudentNUM][TestNum];
double average[StudentNUM];
char grade[StudentNUM];
double total_average= 0.0;

for (int i=0; i<10; i++) {
    cout<< "name of student "<< i+ 1 << ": ";
    cin>> names[i];
    cout<<endl;
    
    cout<< "enter your "<< 5 << " test grades "<< names[i]<<": \n";
    double sum=0.0;
 
    for (int j =0; j< 5; j++){
    cin>> scores[i][j];
    sum= sum + scores[i][j];
}
   cout<<"\n";
   
average[i]= sum / 5;
total_average= total_average+ average[i];

if (average[i]>= 90) 
    grade[i] = 'A';

else if (average[i]>= 80)
    grade[i] = 'B';

else if (average[i]>= 70)
    grade[i] = 'C';

else if (average[i]>= 60)
    grade[i] = 'D';

else 
    grade[i] = 'F';
}

cout<< "students:       	 average:		 grade:";
cout<< "\n";

for (int i =0; i< 10; i++) {
    cout<< names[i]<< "			" << average[i] << "			"<< grade[i]<< endl;

}
cout<< "\n";
cout << "the class average is: "<< total_average / 10 << endl;

}