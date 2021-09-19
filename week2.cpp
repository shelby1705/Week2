
#include<iostream>

using namespace std;

//Name Space
namespace CST8219 {

    //Class
    class vehicle {

    //Variables
    private:
        int numWheels;
        int numDoors;

     //Constructors
    public:
        vehicle(int w, int d) {
            numWheels = w;
            numDoors = d;

            cout << "In constructor with 2 parameters" << endl;
        }//End of constructor a

    public:
        vehicle(int w) : vehicle(4, w) {

            cout << "In constructor with 1 parameter, wheels = " << w << endl;

        }//End of constructor b
    

    public:
        vehicle() : vehicle(4) {
            cout << "In constructor with 0 parameters" << endl;
        
        }//End of constructor c

       

    };//End of vehicle class


}//End of nameSpace


//Destructor
    ~vehicle(){
    cout << "In Destructor" << endl;
}//End of Destructor

//Main
    int main(int argc, char** argv) {

        CST8219 vehicle();
        cout << "I made a vehicle" << endl;
        return 0;

    }//End of main
