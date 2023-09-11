#include <iostream>
using namespace std;

class studInfo{
    public:
    int id;
    double gpa;
    //function
    void show(){
        cout<<"Student ID is : "<<id<<" \nStudent gpa is : "<<gpa<<endl<<endl;
    }
// Constructor dont need to call as function
    studInfo(int x, double y){
        id=x;
        gpa=y;
    }
};

int main(){
    studInfo ryan(101, 3.43);
    ryan.show();
    studInfo rumpa(102, 3.33);
    rumpa.show();

return 0;
}

// class studInfo{
//     public:
//     int id;
//     double gpa;

//     //function
//     void show(){
//         cout<<"Student ID is : "<<id<<" \nStudent gpa is : "<<gpa<<endl<<endl;
//     }

//     //function for addin value
//     void setValeu(int x, double y){
//             id=x;
//             gpa=y;
//     }
// };
//              ------Main function----
// int main(){

// studInfo ryan,rumpa;
//     ryan.setValeu(101, 3.43);
//     ryan.show();

//     rumpa.setValeu(102, 3.33);
//     rumpa.show();

// return 0;
// }