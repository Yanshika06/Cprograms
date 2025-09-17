#include<iostream>
#include<string>
class Car{
    public:
    std::string brand;
    std::string model;
    int year;
    Car(std::string x,std::string y,int z){
        brand=x;
        model=y;
        year=z;
    }
void displayCarDetails(){
    std::cout<<"brand: "<<brand<<std;
    std::cout<<"model: "<<model<<std;
    std::cout<<"year: "<<year<<std;
}
};
int main(){
    Car myCar("Ford","Mustang",1979);
    myCar.displayCarDetails();
    return 0;
}