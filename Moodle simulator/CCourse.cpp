#include "CCourse.h" 
#include<iostream>
using namespace std;
using namespace xclass;

void CCourse:: setnew_cost(int w){ // this function will take a value for w 
    new_cost=w; // then the value of the w will be in the new_cost 
}
int CCourse:: getnew_cost(){ // this function will return the new_cost 
    return new_cost;
}
void CCourse:: setcourse_name(char name[100]){ // this function wil take from the user a value for the name 
course_name[100]=name[100]; // here the value of the name will be in the course_name
}
char CCourse:: getcourse_name(){ // this function will return to you the value of thr course name
return course_name[100];
}
void CCourse:: setcourse_code(char code[50]){ // this function will take from the user the code of the course from the variable code  
course_code[50]=code[50]; // the value of the code will be in the course_code

}
char CCourse:: getcourse_code(){ // this function will return you the value of the course_code 
return course_code[50];
}
void CCourse::setcourse_cost(float cost[50]){ // this function will take a value from the user which is the cost 
course_cost[50]=cost[50]; //  the value of the cost will be in the course_cost

}
float CCourse::getcourse_cost(){ // this function will take a value from the user which is the cost 
return course_cost[50]; //the value of the cost will be in the course_cost

}

void CCourse:: AddCourse(){ // this function will take from the user all the information about the course 

    cout<< "Enter the value of course name:"<<endl;
    cin>>course_name;
    cout<< "Enter the value of course code:"<<endl;
    cin>>course_code;
    cout<< "Enter the value of course cost:"<<endl;
    for(int j=0;j<1;j++){ // this for loop will iterate for one time to take the course cost for each course 
    cin>>course_cost[j];
    }
}







void CCourse::getCourseinfo(){ // this function will give you all the information of each course 
  
cout<<"course name is: \n"<<course_name<<endl; // this print the name  of each course
cout<<"course code is:\n"<<course_code<<endl; //this print the code of each course
cout<<"the course cost is:\n"; //this print the cost of each course


for (int e=0;e < 1;e++) { // this for loop will iterate for one time to give you the cost of each course 
    cout<<course_cost[e]<<endl; // this print the cost of each course 
         
     }
  }
