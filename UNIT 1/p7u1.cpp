#include<iostream>
using namespace std;
class Patient{
    public:
    int patientID;
    string name;
    string disease;
    void setPatient(int id, string n, string d){
        patientID=id;
        name=n;
        disease=d;
    }
    void showPatient();
};
void Patient::showPatient(){
    cout<<"PATIENT ID:"<<patientID
        <<",NAME:"<<name
        <<",DISEASE:"<<disease<<endl;
}
int main(){
    Patient p1,p2;
    p1.setPatient(101,"Ravi","fever");
    p2.setPatient(102,"Priya","diabetes");
    p1.showPatient();
    p2.showPatient();
    return 0;
}