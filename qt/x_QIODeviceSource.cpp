//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qasyncio.h>

class x_QIODeviceSource : public QIODeviceSource {
public:
    static void x_0(Smoke::Stack x) {
	// QIODeviceSource(QIODevice*, int)
	x_QIODeviceSource* xret = new x_QIODeviceSource((QIODevice*)x[1].s_class,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QIODeviceSource(QIODevice* x1, int x2) : QIODeviceSource(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QIODeviceSource(QIODevice*)
	x_QIODeviceSource* xret = new x_QIODeviceSource((QIODevice*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QIODeviceSource(QIODevice* x1) : QIODeviceSource(x1) {
    }
    void x_2(Smoke::Stack x) {
	// readyToSend()
	int xret = this->QIODeviceSource::readyToSend();
	x[0].s_int = (int)xret;
    }
    void x_3(Smoke::Stack x) {
	// sendTo(QDataSink*, int)
	this->QIODeviceSource::sendTo((QDataSink*)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_4(Smoke::Stack x) const {
	// rewindable()
	bool xret = this->QIODeviceSource::rewindable();
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) {
	// enableRewind(bool)
	this->QIODeviceSource::enableRewind((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) {
	// rewind()
	this->QIODeviceSource::rewind();
	x[0].s_int = x[0].s_int; // noop
    }
    virtual void enableRewind(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(3403, (void*)this, x)) return;
	this->QIODeviceSource::enableRewind(x1);
    }
    virtual int readyToSend() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(3400, (void*)this, x)) return (int)x[0].s_int;
	return this->QIODeviceSource::readyToSend();
    }
    virtual void rewind() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(3404, (void*)this, x)) return;
	this->QIODeviceSource::rewind();
    }
    virtual bool rewindable() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(3402, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QIODeviceSource::rewindable();
    }
    virtual void sendTo(QDataSink* x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(3401, (void*)this, x)) return;
	this->QIODeviceSource::sendTo(x1, x2);
    }
    ~x_QIODeviceSource() {}
};
void xcall_QIODeviceSource(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QIODeviceSource *xself = (x_QIODeviceSource*)obj;
    switch(xi) {
	case 0: x_QIODeviceSource::x_0(args);	break;
	case 1: x_QIODeviceSource::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: delete (QIODeviceSource*)xself;	break;
    }
}
