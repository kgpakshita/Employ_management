#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

class employee{
    string identity_number;
    string Full_name;
    string Res_address;
    string date_of_birth;
    string mobile_number;
    string date_of_joining;
    string marital_status;
    string cost_to_company;
    string email_id;

public:
    employee(string id,string name,string address,string dob,string mobile_no,string doj,string marstatus,string ctc,string email){
        identity_number=id;
        Full_name=name;
        Res_address=address;
        date_of_birth=dob;
        mobile_number=mobile_no;
        date_of_joining=doj;
        marital_status=marstatus;
        cost_to_company=ctc;
        email_id=email;
    }

    string getid(){
        return identity_number;
    }

    string getname(){
        return Full_name;
    }

    string getadd(){
        return Res_address;
    }

    string getdob(){
        return date_of_birth;
    }

    string getmob(){
        return mobile_number;
    }

    string getdoj(){
        return date_of_joining;
    }

    string getmartstatus(){
        return marital_status;
    }

    string getctc(){
        return cost_to_company;
    }

    string getmail(){
        return email_id;
    }

    void setid(string id){
        identity_number=id;
    }

    void setname(string name){
        Full_name=name;
    }

    void setadd(string add){
        Res_address=add;
    }

    void setdob(string dob){
        date_of_birth=dob;
    }

    void setmob(string mob){
        mobile_number=mob;
    }

    void setdoj(string doj){
        date_of_joining=doj;
    }

    void setmart(string marstatus){
        marital_status=marstatus;
    }

    void setctc(string ctc){
        cost_to_company=ctc;
    }

    void setmail(string mail){
        email_id=mail;
    }

           
    

};

vector<employee> employee_list;

void enter()
{
    system("cls");
    string id,name, address, dob, mobile_no, doj, marstatus, ctc, email;
            string temp;

            cout << "\n\t**ENTER THE DATA OF EMPLOYEE** " << endl
                 << endl;

            cout<< left;            

            cout <<setw(25)<< "\tEnter Name: ";
            cin>>name;
            getline(cin,temp);
            name+=temp;

            cout <<setw(25)<< "\tEnter Address: ";

            getline(cin,address);
            

            cout <<setw(25)<<  "\tEnter Date of Birth: ";

            getline(cin,dob);

            cout <<setw(25)<<  "\tIs Employee Married?: ";

            getline(cin,marstatus);

            cout <<setw(25)<<  "\tEnter Id: ";

            getline(cin,id);
            
            cout <<setw(25)<<  "\tEnter Date of Joing: ";

            getline(cin,doj);
            
            cout <<setw(25)<<  "\tEnter CTC: ";

            getline(cin,ctc);

            cout << setw(25)<< "\tEnter Mobile NO: " ;

            getline(cin,mobile_no);            

            cout << setw(25)<< "\tEnter Email: " ;

            getline(cin,email);
            
            employee new_employee(id,name,address,dob,mobile_no, doj,marstatus,ctc,email);
            employee_list.push_back(new_employee);
             
}

void show()
{
    if(employee_list.empty()){
        cout<< "No Details found"<<endl;
        //return;
    }

    cout << "\nData of Employees: "  << endl
                 << endl;

    for(auto person : employee_list){

        cout<<"\n";

        cout << "\t=======================================================" << endl;
        
            cout << "\t|\t\t** PERSONAL DETAILS **" <<"                |"<<endl;

            cout << "\t=======================================================" << endl;
                 
            cout<<left;

            cout <<setw(25)<<  "\t|Full Name: " << setw(30)<< person.getname() <<"|"<< endl;
            cout <<setw(25)<<  "\t|Address: " << setw(30)<< person.getadd() <<"|"<< endl;
            cout << setw(25)<< "\t|Date of Birth: " << setw(30)<< person.getdob() <<"|"<< endl;
            cout << setw(25)<< "\t|Marital Status: " << setw(30)<< person.getmartstatus() <<"|"<< endl;
            
            cout << "\t=======================================================" << endl;
            cout << "\t|\t\t** WORK DETAILS **" <<"                    |"<<endl;
            cout << "\t=======================================================" << endl;
                

            cout <<setw(25)<<  "\t|Id: " << setw(30)<< person.getid() << "|" << endl;
            cout << setw(25)<< "\t|Date of Joing: " <<setw(30)<<  person.getdoj() <<"|"<< endl;
            
            cout << setw(25)<< "\t|CTC: " << setw(30)<< person.getctc() <<"|"<< endl;
            //cout <<  endl;

            cout << "\t=======================================================" << endl;                 

            cout << "\t|\t\t** CONTACT DETAILS **" << "                 |"<<endl;
            cout << "\t=======================================================" << endl;
            cout << setw(25)<<  "\t|Mobile NO: " << setw(30)<< person.getmob() <<"|"<< endl;
            cout << setw(25)<< "\t|Email Id: " << setw(30)<< person.getmail() << "|"<<endl;
            cout << "\t=======================================================" << endl;
            cout << "\t|_____________________________________________________|" << endl << endl;

    }
    string trash;
    cout<<"\tENTER 1 TO CONTINUE: ";
    cin>>trash;
    return;
}

void search()
{
    if(employee_list.empty()){
        cout<<"No details found"<<endl;
        string trash;
        cout<<"\tENTER 1 TO CONTINUE: ";
        cin>>trash;
        return;
    }
    string id;
    string temp;
    cout << "Enter the id of Employee you want to Search: " ;
    cin>>id;

    for( auto person : employee_list){
        if(id == person.getid())
        {
            cout<<"\n";

        cout << "\t=======================================================" << endl;
        
            cout << "\t|\t\t** PERSONAL DETAILS **" <<"                |"<<endl;

            cout << "\t=======================================================" << endl;
                 
            cout<<left;

            cout <<setw(25)<<  "\t|Full Name: " << setw(30)<< person.getname() <<"|"<< endl;
            cout <<setw(25)<<  "\t|Address: " << setw(30)<< person.getadd() <<"|"<< endl;
            cout << setw(25)<< "\t|Date of Birth: " << setw(30)<< person.getdob() <<"|"<< endl;
            cout << setw(25)<< "\t|Marital Status: " << setw(30)<< person.getmartstatus() <<"|"<< endl;
            
            cout << "\t=======================================================" << endl;
            cout << "\t|\t\t** WORK DETAILS **" <<"                    |"<<endl;
            cout << "\t=======================================================" << endl;
                

            cout <<setw(25)<<  "\t|Id: " << setw(30)<< person.getid() << "|" << endl;
            cout << setw(25)<< "\t|Date of Joing: " <<setw(30)<<  person.getdoj() <<"|"<< endl;
            
            cout << setw(25)<< "\t|CTC: " << setw(30)<< person.getctc() <<"|"<< endl;
            //cout <<  endl;

            cout << "\t=======================================================" << endl;                 

            cout << "\t|\t\t** CONTACT DETAILS **" << "                 |"<<endl;
            cout << "\t=======================================================" << endl;
            cout << setw(25)<<  "\t|Mobile NO: " << setw(30)<< person.getmob() <<"|"<< endl;
            cout << setw(25)<< "\t|Email Id: " << setw(30)<< person.getmail() << "|"<<endl;
            cout << "\t=======================================================" << endl;
            cout << "\t|_____________________________________________________|" << endl << endl;
            string trash;
            cout<<"\tENTER 1 TO CONTINUE: ";
            cin>>trash;
            return;
        }
    }
    cout<<"No such employee found"<<endl;
    return;
}

void update()
{
    if(employee_list.empty()){
        cout<<"No details found"<<endl;
        string trash;
        cout<<"\tENTER 1 TO CONTINUE: ";
        cin>>trash;
        return;
    }
    string idno;

        cout << "ENTER THE ID OF EMPLOYEE WHICH YOU WANT TO UPDATE: " ;

        cin >> idno;

    for( auto &person : employee_list){
        if(idno==person.getid()){
            system("cls");
            string id,name, address, dob, mobile_no, doj, marstatus, ctc, email;
            string temp;

            cout << "\n\t**ENTER THE DATA OF EMPLOYEE** " << endl
                 << endl;

            cout<< left;            

            cout <<setw(25)<< "\tEnter Name: ";
            cin>>name;
            getline(cin,temp);
            name+=temp;

            cout <<setw(25)<< "\tEnter Address: ";

            getline(cin,address);
            

            cout <<setw(25)<<  "\tEnter Date of Birth: ";

            getline(cin,dob);

            cout <<setw(25)<<  "\tIs Employee Married?: ";

            getline(cin,marstatus);

            cout <<setw(25)<<  "\tEnter Id: ";

            getline(cin,id);
            
            cout <<setw(25)<<  "\tEnter Date of Joing: ";

            getline(cin,doj);
            
            cout <<setw(25)<<  "\tEnter CTC: ";

            getline(cin,ctc);

            cout << setw(25)<< "\tEnter Mobile NO: " ;

            getline(cin,mobile_no);            

            cout << setw(25)<< "\tEnter Email: " ;

            getline(cin,email);
            
            employee new_employee(id,name,address,dob,mobile_no, doj,marstatus,ctc,email);
            person = new_employee;
            return;
        }
    }
    cout<<"No such employee found"<<endl;
    string trash;
    cout<<"\tENTER 1 TO CONTINUE: ";
    cin>>trash;
    return;
}

void Delete(){
    if(employee_list.empty()){
        cout<<"No details found"<<endl;
        return;
    }
        int a;

        cout << "Are you Sure to Delete Data?" << endl;
        cout << "Press 1 to delete all record" << endl;

        cin >> a;

        if (a == 1)

        {

            employee_list.clear();

            cout << "All record is deleted..!!" << endl;
        }

    return;
}

int main()

{

    int value;

    while (1) // always in Loop

    {
        cout << "\t  ===========EMPLOYEE RECORD MANAGEMENT SYSTEM============" << endl;

        cout << "\n\t\t\tPRESS 1: To Enter data" << endl;

        cout << "\t\t\t-------------------------" << endl;

        cout << "\t\t\tPRESSS 2: To Show data" << endl;
        cout << "\t\t\t-------------------------" << endl;

        cout << "\t\t\tPRESSS 3: To Search data" << endl;
        cout << "\t\t\t-------------------------" << endl;

        cout << "\t\t\tPRESSS 4: To Update data" << endl;
        cout << "\t\t\t-------------------------" << endl;

        cout << "\t\t\tPRESSS 5: To Delete data" << endl;
        cout << "\t\t\t-------------------------" << endl;

        cout << "\t\t\tPRESSS 6: To Quit" << endl;
        cout << "\t\t\t-------------------------" << endl<<"\n\t\t\t";

        cout<< "ENTER YOUR CHOICE: ";

        cin >> value;

        switch (value)

        {

        case 1:
            enter();
            break;

        case 2:
            show();
            break;

        case 3:
            search();
            break;

        case 4:
            update();
            break;

        case 5:
            Delete();
            break;

        case 6:
            exit(0);
            break;

        default:
            cout << "\tInvalid input" << endl;
            break;
        }
        system("cls");
    }
}
