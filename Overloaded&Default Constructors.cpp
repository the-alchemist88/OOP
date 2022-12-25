#include <iostream>

using std::cout;

class Floating 
{
private:
//members
    float X{40.0}; // No effect of value since initializer list in constructors has already done the initialization
    float Y{80.0};
    float Z{120.0};
    
public:
//methods
    float get_X () {cout<<"X = "<< X<<"\n"; return X;}
    float get_Y () {cout<<"Y = "<< Y<<"\n"; return Y;}
    float get_Z () {cout<<"Z = "<< Z<<"\n"; return Z;}
    
    void set_X (float value) { X = value ;}
    void set_Y (float value) { Y = value ;}
    void set_Z (float value) { Z = value ;}

//overloaded constructors
    Floating() : X {0.0}, Y {0.0}, Z{0.0} { cout<<"No arg constructor is called\n"; };
    Floating(float X_val) : X {X_val}, Y {0.0}, Z{0.0} { cout<<"One arg constructor is called\n"; };
    Floating(float X_val, float Y_val) : X {X_val} , Y {Y_val}, Z{0.0}  { cout<<"Two args constructor is called\n"; };
    Floating(float X_val, float Y_val, float Z_val) : X {X_val} , Y {Y_val}, Z{Z_val}  { cout<<"Three args constructor is called\n"; };
};

class Integer
{
private:
//members
    int X{40}; // No effect of value since initializer list in constructors has already done initialization
    int Y{80};
    int Z{120};
    
public:
//methods
    int get_X () {cout<<"X = "<< X<<"\n"; return X;}
    int get_Y () {cout<<"Y = "<< Y<<"\n"; return Y;}
    int get_Z () {cout<<"Z = "<< Z<<"\n"; return Z;}
    
    void set_X (int value) { X = value ;}
    void set_Y (int value) { Y = value ;}
    void set_Z (int value) { Z = value ;}
// Default constructor prototype
		Integer(int X_val = 0 , int Y_val = 0, int Z_val = 0 );
};

//Default constructor outside class implementation
	Integer::Integer(int X_val, int Y_val, int Z_val): X{X_val}, Y{Y_val}, Z{Z_val} { cout<<"Default constructor is called\n";}; 

int main(int argc, char **argv)
{
		Floating Floats;
		Floats.get_X();
		Floats.get_Y();
		Floats.get_Z();
    Floating Floats1(5.0);
		Floats1.get_X();
		Floats1.get_Y();
		Floats1.get_Z();
    Floating Floats2(5.0, 12.0);
		Floats2.get_X();
		Floats2.get_Y();
		Floats2.get_Z();
    Floating Floats3(5.0, 12.0, 13.0);
		Floats3.get_X();
		Floats3.get_Y();
		Floats3.get_Z();
		Integer myInt;
		myInt.get_X();
		myInt.get_Y();
		myInt.get_Z();
		Integer myInt1(3);
		myInt1.get_X();
		myInt1.get_Y();
		myInt1.get_Z();
		Integer myInt2(3,4);
		myInt2.get_X();
		myInt2.get_Y();
		myInt2.get_Z();
		Integer myInt3(3,4,5);
		myInt3.get_X();
		myInt3.get_Y();
		myInt3.get_Z();
    
	  return 0;
}

