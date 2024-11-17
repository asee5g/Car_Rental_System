#include <iostream>  //input/output
#include<cstdlib>   //system operator
#include <unistd.h>   //sleep
#include <iomanip>  //setting width

using namespace std;

class Customer{
        protected:
        string customerName;
        int age;
        int carModel;
};
class Rent : public Customer{
    private :
      int numberofdays;
      int rentFee;
    public:
    Rent();
    void welcome();
    void data();
    void amount();
    void record();

};
Rent::Rent(){
    numberofdays = 0;
    rentFee = 0;

}

void Rent::welcome(){
    cout<<"\n\n\t\t\t--------------------------------------------------";
    cout<<"\n\t\t\t WELCOME TO CAR RENTAL SYSTEM "<<'\n';
    cout<<"\t\t\t--------------------------------------------------"<<'\n';
    sleep(1);

}
void Rent::data(){
    cout<<"\n\t\t\tEnter Your Name: ";
    cin>>customerName;
    cout<<"\n\t\t\tEnter Your Age: ";
    cin>>age;
    cout<<endl;
    do{
        cout<<"\n\t\t\t--------------------------------------------------";
        cout<<"\n\t\t\t  Choose a Car from the option Below "<<'\n';
        cout<<"\t\t\t  Choose a number corresponding to the car you want to select"<<'\n';
        cout<<"\t\t\t--------------------------------------------------"<<'\n';
        cout<<"\t\t\t  1. Tata Punch 2022 "<<'\n';
        cout<<"\t\t\t  2. Maruti Suzuki Invicto 2023"<<'\n';
        cout<<"\t\t\t  3. Hyundai Motors Creta 2022 "<<'\n';
        cout<<"\t\t\t  4. Mahindra Scorpio 2022"<<'\n';
        cout<<"\t\t\t  5. Nissan Magnite 2022"<<'\n';
        cout<<endl;
        cout<<"\t\t\t--------------------------------------------------"<<'\n';
        cout<<"\t\t\tChoose a Number : ";
        cin>>carModel;
        cout<<endl;

        switch (carModel)
        {
        case 1:
            system("CLS");
            cout<<"\t\tYou Choose Tata Punch 2022 Model"<<'\n';
            cout<<"\t\tFuel Economy : 19km/l combined"<<'\n';
            cout<<"\t\tEngine : 1.2L 3-cylinder"<<'\n';
            cout<<"\t\tHorse Power : 63 kW"<<'\n';
            cout<<"\t\tFuel Tank Capacity : 37 L"<<'\n';
            cout<<"\t\tCargo Volume : 366 L"<<'\n';
            cout<<"\t\tDimension : 3,827 mm L x 1,742 mm W x 1,615 mm H";
            sleep(1);
            break;
        case 2:
            system("CLS");
            cout<<"\t\tYou Choose Maruti Suzuki Invicto 2023 Model"<<'\n';
            cout<<"\t\tFuel Economy : 23km/l combined"<<'\n';
            cout<<"\t\tEngine :  4-cylinder"<<'\n';
            cout<<"\t\tFuel Tank Capacity : 52 L"<<'\n';
            cout<<"\t\tCargo Volume : 239 L"<<'\n';
            cout<<"\t\tDimension : 4,755 mm L x 1,845-1,850 mm W x 1,790 mm H";
            sleep(1);
            break;
        case 3:
            system("CLS");
            cout<<"\t\tYou Choose Hyundai Motors Creta 2022 Model"<<'\n';
            cout<<"\t\tFuel Economy : 17 - 21 km/l combined"<<'\n';
            cout<<"\t\tEngine : 1.4L 4-cylinder"<<'\n';
            cout<<"\t\tHorse Power : 85 to 103 kW"<<'\n';
            cout<<"\t\tFuel Tank Capacity : 50 L"<<'\n';
            cout<<"\t\tCargo Volume : 433 L"<<'\n';
            cout<<"\t\tDimension : 4,300 mm L x 1,790 mm W x 1,620 mm H";
            sleep(1);
            break;
        case 4:
            system("CLS");
            cout<<"\t\tYou Choose Mahindra Scorpio 2022 Model"<<'\n';
            cout<<"\t\tFuel Economy : 13 - 16 km/l combined"<<'\n';
            cout<<"\t\tEngine : 2.2L 4-cylinder"<<'\n';
            cout<<"\t\tHorse Power : 97 kW"<<'\n';
            cout<<"\t\tFuel Tank Capacity : 57 L"<<'\n';
            cout<<"\t\tCargo Volume : 460 L"<<'\n';
            cout<<"\t\tDimension : 4,456 mm L x 1,820 mm W x 1,995 mm H";
            sleep(1);
            break;
        case 5:
            system("CLS");
            cout<<"\t\tYou Choose Nissan Magnite 2022 Model"<<'\n';
            cout<<"\t\tFuel Economy : 18 - 20 km/l combined"<<'\n';
            cout<<"\t\tEngine : 1.0L 4-cylinder"<<'\n';
            cout<<"\t\tHorse Power : 53 - 74 kW"<<'\n';
            cout<<"\t\tFuel Tank Capacity : 40 L"<<'\n';
            cout<<"\t\tCargo Volume : 336 L"<<'\n';
            cout<<"\t\tDimension : 3,994 mm L x 1,758 mm W x 1,572 mm H";
            sleep(1);
            break;
        
        default:
            cout<<"\t\tinvalid Car Model Number Please Select 1 to 5 "<<'\n';
        }
    }while(carModel < 1 || carModel >= 6);

    cout<<"\n\n\t\t--------------------------------------------"<<'\n';
    cout<<"\t\t-----please provide Following Information-----"<<'\n';
    cout<<"\t\t--------------------------------------------"<<'\n';
    cout<<"\n\t\tNumber of days you wish to rent the car : ";
    cin>>numberofdays;
    cout<<endl;

}

void Rent::amount(){
    sleep(1);
    system("CLS");
    cout<<"Calculating Rent."<<'\n';
    cout<<"\nPlease Wait..........."<<endl;
    sleep(2);
    system("CLS");
    if(carModel==1){
    rentFee = numberofdays*250;
    }
    else if(carModel==2){
    rentFee = numberofdays*450;
    }
    else if(carModel==3){
    rentFee = numberofdays*350;
    }
    else if(carModel==4){
    rentFee = numberofdays*350;
    }
    else {
    rentFee = numberofdays*350;
    }
}

void Rent::record(){
    cout<<"\n\t\t     --------------------CAR RENT - CUSTOMER INVOICE--------------------"<<endl;
    cout<<"\t\t-------------------------------------------------------------------------------"<<endl;
    cout << "\t\t	| Customer Name "<<"				|"<< setw(10) <<customerName<<" |"<<endl;
    cout << "\t\t	| Customer Age "<<"		           		|"<< setw(10) <<age<<" |"<<endl;
    cout << "\t\t	| Car Model  "<<"					|"<< setw(10) <<carModel<<" |"<<endl;
    cout << "\t\t	| Number of days  "<<"				|"<< setw(10) <<numberofdays<<" |"<<endl;
    cout << "\t\t	| Rental Amount  "<<"				|"<< setw(10) <<rentFee<<" |"<<endl;
    cout << "\t\t	| Advanced  "<<"					|"<< setw(10) <<rentFee*0.25<<" |"<<endl;
    cout<<"\t\t-------------------------------------------------------------------------------"<<endl;
    cout <<"\t\t	| Total Rental Amount    "<<"			|"<<setw(6)<<"Rupees : " << rentFee + rentFee*0.25<<" |"<<endl;
    cout<<"\t\t-------------------------------------------------------------------------------"<<endl;
    cout << "\n\t\t	***********************************************************" << endl;
	cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
	cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
	cout << "\t\t	***********************************************************\n" << endl;

    
    cout<<"\t\t\t     --------------------THANKS FOR VISITING--------------------"<<endl;
    cout<<"\t\t\t           --------------------DRIVE SAFE--------------------"<<endl;
    system("PAUSE");

}   
int main(){
    Rent rent;
    rent.welcome();
    rent.data();
    rent.amount();
    rent.record();

}