#include<iostream>
#include<vector>
using namespace std;

class subject{

    public:
    string subjectName;
    int credit;
    float gradepoint;
    //constructor
    subject(string sName, int cr, float grade){
        subjectName=sName;
        credit=cr;
        gradepoint=grade;
    }
};

class student{

    public:
    string Name;
    vector<subject>subjects;

    //constructor

    student(string studentName){
        Name=studentName;
    }

    void addSubject(string subjectName, int credit, float gradepoint){
        subject newSubject(subjectName, credit, gradepoint);
        subjects.push_back(newSubject);
    }

    float calculatecgpa()
    {
        int totalcredit=0;
        float weightgradepoint=0;
        for(const subject & Subject:subjects){
            totalcredit+=Subject.credit;
            weightgradepoint+=Subject.credit*Subject.gradepoint;
        }
        return (totalcredit>0)?(weightgradepoint/totalcredit):0;
    }

    void displaycgpa()
    {
        cout<<"student name:"<<Name<<"\n";
        float cgpa=calculatecgpa();
        cout<<"CGPA:"<<cgpa<<"\n";
    }

    // void addsubject(string subjectname, int credit, float gradepoint);

    


};


int main(){
    string studentName;
    int numofsub;

    cout<<"enter student's name:";
    getline(cin, studentName);

    cout<<"enter the number of subjects:";
    cin>>numofsub;
    student Student(studentName);

    for(int i=0; i<numofsub; i++){
        string subjectName;
        int credit;
        float gradepoint;

        cout<<"enter the subject's name:";

        cin.ignore();
        getline(cin, subjectName);

        cout<<"enter the credit:";
        cin>>credit;

        cout<<"enter the gradepoint:";
        cin>>gradepoint;
        //add the subject to the student's recored
        Student.addSubject(subjectName, credit, gradepoint);

    }
    Student.displaycgpa();
    return 0;

}