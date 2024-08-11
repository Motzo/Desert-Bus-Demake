#ifndef BUS_H 
#define BUS_H 

//class declaration for bus
class Bus {
private:
	int speed;
	bool engineOn;
public:
	Bus()
	{
		speed = 0;
		engineOn = false;

	}
	void accelerate();
	void slowDown();

};


#endif
