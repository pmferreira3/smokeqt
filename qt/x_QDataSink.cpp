//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qasyncio.h>

class x_QDataSink : public QDataSink {
public:
    void x_0(Smoke::Stack x) {
	// maybeReady()
	this->QDataSink::maybeReady();
	x[0].s_int = x[0].s_int; // noop
    }
    static void x_1(Smoke::Stack x) {
	// QDataSink()
	x_QDataSink* xret = new x_QDataSink();
	x[0].s_class = (void*)xret;
    }
    x_QDataSink() : QDataSink() {
    }
    virtual void eof() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(1325, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual int readyToReceive() {
	Smoke::StackItem x[1];
	qt_Smoke->callMethod(1323, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual void receive(const uchar* x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	qt_Smoke->callMethod(1324, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    ~x_QDataSink() {}
};
void xcall_QDataSink(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QDataSink *xself = (x_QDataSink*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: x_QDataSink::x_1(args);	break;
	case 2: delete (QDataSink*)xself;	break;
    }
}
