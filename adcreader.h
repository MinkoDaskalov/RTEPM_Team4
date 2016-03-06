#ifndef ADCREADER
#define ADCREADER

#include <QThread>

class ADCreader : public QThread
{
public:
    ADCreader();
	void quit();
	void run();
    int get_samples();
    bool read_enable();
private:
	bool running;
    int ret;           //Minko Not needed?
    int fd;            //Minko Not needed?
    int no_tty;        //Minko Not needed?
    int buffer[100];
    int in;
    int out;

};

#endif
