//To calculate the grade
#include <iostream>
using namespace std;
int main()
{
    int marks = 50;
    if (marks>=90){
        cout<<"Grade A+"<<endl;
    }
    else if(marks>=80){
        cout<<"Grade A"<<endl;
    }
    else if(marks>=70){
        cout<<"Grade B+"<<endl;
    }
    else if(marks>=60){
        cout<<"Grade B"<<endl;
    }
    else if(marks>=50){
        cout<<"Grade C"<<endl;
    }
    else if (marks>=40){
        cout<<"Grade D"<<endl;
    }
    else if(marks>=30){
        cout<<"Fail and Grade is E"<<endl;
    }
    else {
        cout<<"Error"<<endl;
    }
    return 0;
}