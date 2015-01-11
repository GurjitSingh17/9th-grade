#include <iostream>  // includes streams for outputing or inputing data ex. (cin and cout)
#include <string> 
#include <iomanip> 
using namespace std;
                  

bool check_error() // function checking input stream
{
if(!cin){
cout<<"Input Failure"<<endl;
return 1; }

return 0; 
}


int main()  
{	
	string temp;                         // variable declarations
	float max=0, grade1=0, sum=0,total=0;
     int i=0,top=0,low=0,c=0,b=0, n=0,x;
	
	struct students{ // a structured data type
	float grade;
	string name;
	int absent;};

	cout<<" Welcome to Class Grader"<<endl;      // intro and asking you to input a value into x
	cout<<"Enter the Number of students"<<endl;
	cin>>x;
	if(check_error()) return 1; // Function call
     
	students  *p;    // creates a pointer(p in this case) of type students
	p = new students[x]; //creates an array in the free store with x amount of elements
      
	while (c<x){
			getline(cin, temp);    // inputs data
		cout<<"Input name of student "<<c+1<<endl;
		getline(cin, temp);
		p[c].name=temp;
		cout<<endl;
          cout<<"Input the grade of student: "<<p[c].name<<endl;
		cin>>p[c].grade;
		if(check_error()) return 1; 
		cout<<endl;
		cout<<"Input the nuber of times absent for this grading period"<<endl;
		cin>>p[c].absent;
		if(check_error()) return 1; 
		cout<<endl;
		c++;}
		cout<<p[1].*name<<endl;
	
//---------------------------------------Print---------------------------------------------------------------------------------

cout<<"---------------------Report------------------------"<<endl;
       
	   while (b<x){
		cout<<"Name: "<<p[b].name<<endl;
		cout<<"Grade: "<<p[b].grade<<"%"<<endl;
		cout<<"Absent "<<p[b].absent<<" times."<<endl; 
		b++;}
			
	    while (i<x){
		    if(p[i].grade>max){   // finds max value
			max=p[i].grade;
			top=i; }
		           i++;}
	   
	    float min=p[0].grade;
	    while (n<x){    
		    sum=sum+p[n].grade;  // adds the grades together
		    total=total+p[n].absent; // sums up the absences
		    if(p[n].grade<=min){// finds min value
			   min= p[n].grade;
			   low=n;}
		    n++;}
         cout<<"---------------------STAT Report-------------------"<<endl;
	    cout<<"The class average is: "<<setprecision(4)<<(sum/x)<<"%"<<endl<<endl;
	    cout<<"The student with the highest grade is "<<p[top].name<<endl;
	    cout<<"With a presentage of:"<<p[top].grade<<"%"<<endl<<endl;
         cout<<"The student with the lowest grade is "<<p[low].name<<endl;
	    cout<<"With a presentage of:"<<p[low].grade<<"%"<<endl<<endl;
	    cout<<"Total number of absences: "<<total<<". The class average for absences is: "<<setprecision(4)<<(total/x)<<endl;

	    
	delete [] p;  // deletes array
	return 0;
}
    
	
  	
  

	

		
  
	