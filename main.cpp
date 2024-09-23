#include<iostream>

class Temperature{
    private:
    float Celsius;
    float Fahrenheit;
    float Kelvin;

    //Function for temperature conversion.
    void Temp_conversion(float Temp_value, char Temp_unit){
        switch (Temp_unit){
            
        case 'C':
        case 'c':
        Celsius = Temp_value;
        Fahrenheit = (Celsius * 9.0/5.0) + 32;
        Kelvin = Celsius + 273.15;
            break;

        case 'f':
        case 'F':
        Fahrenheit = Temp_value;
        Celsius = (Fahrenheit - 32) * 5.0/9.0;
        Kelvin = Celsius + 273.15;  
            break;

        case 'k':
        case 'K':
        Kelvin = Temp_value;
        Celsius = Kelvin - 273.15;        
        Fahrenheit = (Celsius * 9.0/5.0) + 32;    
            break;

        default:
        std::cout<<"You have entered a wrong letter, Please try again."<<std::endl;     
        }
    }

    public:
    //Default Constructor.
    Temperature(){ 
        Celsius = 0;
        Fahrenheit = 0;
        Kelvin = 0;
    }

    //Print all temperature values.
    void Print_Temp(float Temp_value, char Temp_unit){
        Temp_conversion(Temp_value,Temp_unit);
        std::cout<<"The Temperature values are"<<std::endl;
        std::cout<<"Celsius: "<<Celsius<<std::endl;
        std::cout<<"Fahrenheit: "<<Fahrenheit<<std::endl;
        std::cout<<"Kelvin: "<<Kelvin<<std::endl;
    }
};

int main(){
    float Temp_value;
    char Temp_unit;
    Temperature temp;
    while(1)
    {
    std::cout<<"Please enter your temperature value."<<std::endl;
    std::cin>>Temp_value;
    std::cout<<"What is the unit of measurement for the value entered."<<std::endl;   
    std::cout<<"C for Celsius, F for Fahrenheit, K for Kelvin"<<std::endl;   
    std::cin.ignore(256, '\n');
    std::cin>>Temp_unit;  

    temp.Print_Temp(Temp_value,Temp_unit);
    }
    return 0;
}