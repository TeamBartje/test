#ifndef Blink_h
#define Blink-h

class Blink{

	public:
		Blink(int pinNum);
		void now(void);

	private:
			int _pin;
			int _timeBetweenOnOffMillis = 1000;




};

#endif