#include<bits/stdc++.h>
using namespace std;
class student{
protected:
int roll_no;
public:
void set_roll(int r){
    roll_no=r;
}
};
class test:virtual public student{
    protected:
    float marks1;
float marks2;
public:
void set_marks(float m1,float m2){
    marks1=m1;
    marks2=m2;
}
void get_marks(){
    cout<<"marks obtained is maths"<<marks1<<endl;
    cout<<"marks obtained is physics"<<marks2<<endl;
}
};
class sports:virtual public student{
    protected:
    float score;
public:
void set_sccore(float sc){
    score=sc;
}
void get_score(){
    cout<<"score in sports"<<score<<endl;
}
};
class result :public test,public sports{
private:
float total_score;
public:
void display(){
    total_score=marks1+marks2+score;
}
void print_number(){
    get_marks();
    get_score();
    cout<<"your total score is"<<total_score<<endl;

}
};
int main(){
result r;
r.set_marks(12.3,44.6);
r.set_sccore(9.12);
r.set_roll(20505);
r.print_number();
    return 0;
}