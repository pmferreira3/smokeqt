//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qsound.h>
#include <qstring.h>

class x_QSound : public QSound {
public:
    static void x_0(Smoke::Stack x) {
	// QSound(const QString&, QObject*, const char*)
	x_QSound* xret = new x_QSound(*(const QString *)x[1].s_class,(QObject*)x[2].s_class,(const char*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSound(const QString& x1, QObject* x2, const char* x3) : QSound(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QSound(const QString&, QObject*)
	x_QSound* xret = new x_QSound(*(const QString *)x[1].s_class,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSound(const QString& x1, QObject* x2) : QSound(x1, x2) {
    }
    static void x_2(Smoke::Stack x) {
	// QSound(const QString&)
	x_QSound* xret = new x_QSound(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSound(const QString& x1) : QSound(x1) {
    }
    void x_3(Smoke::Stack x) const {
	// loops()
	int xret = this->QSound::loops();
	x[0].s_int = (int)xret;
    }
    void x_4(Smoke::Stack x) const {
	// loopsRemaining()
	int xret = this->QSound::loopsRemaining();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// setLoops(int)
	this->QSound::setLoops((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) const {
	// fileName()
	QString xret = this->QSound::fileName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) const {
	// isFinished()
	bool xret = this->QSound::isFinished();
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) {
	// play()
	this->QSound::play();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_9(Smoke::Stack x) {
	// stop()
	this->QSound::stop();
	x[0].s_int = x[0].s_int; // noop
    }
    static void x_10(Smoke::Stack x) {
	// isAvailable()
	bool xret = QSound::isAvailable();
	x[0].s_bool = (bool)xret;
    }
    static void x_11(Smoke::Stack x) {
	// play(const QString&)
	QSound::play(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    static void x_12(Smoke::Stack x) {
	// available()
	bool xret = QSound::available();
	x[0].s_bool = (bool)xret;
    }
    virtual bool checkConnectArgs(const char* x1, const QObject* x2, const char* x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5470, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::checkConnectArgs(x1, x2, x3);
    }
    virtual void childEvent(QChildEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5466, (void*)this, x)) return;
	this->QObject::childEvent(x1);
    }
    virtual void connectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5468, (void*)this, x)) return;
	this->QObject::connectNotify(x1);
    }
    virtual void customEvent(QCustomEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5467, (void*)this, x)) return;
	this->QObject::customEvent(x1);
    }
    virtual void disconnectNotify(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5469, (void*)this, x)) return;
	this->QObject::disconnectNotify(x1);
    }
    virtual bool event(QEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5405, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::event(x1);
    }
    virtual bool eventFilter(QObject* x1, QEvent* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(5406, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::eventFilter(x1, x2);
    }
    virtual void insertChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5428, (void*)this, x)) return;
	this->QObject::insertChild(x1);
    }
    virtual QVariant property(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5442, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QObject::property(x1);
    }
    virtual void removeChild(QObject* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5429, (void*)this, x)) return;
	this->QObject::removeChild(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QSound() {}
};
void xcall_QSound(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSound *xself = (x_QSound*)obj;
    switch(xi) {
	case 0: x_QSound::x_0(args);	break;
	case 1: x_QSound::x_1(args);	break;
	case 2: x_QSound::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: x_QSound::x_10(args);	break;
	case 11: x_QSound::x_11(args);	break;
	case 12: x_QSound::x_12(args);	break;
	case 13: delete (QSound*)xself;	break;
    }
}
