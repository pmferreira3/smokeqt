//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qvalidator.h>
#include <qregexp.h>

class x_QRegExpValidator : public QRegExpValidator {
public:
    static void x_0(Smoke::Stack x) {
	// QRegExpValidator(QObject*, const char*)
	x_QRegExpValidator* xret = new x_QRegExpValidator((QObject*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(QObject* x1, const char* x2) : QRegExpValidator(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QRegExpValidator(QObject*)
	x_QRegExpValidator* xret = new x_QRegExpValidator((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(QObject* x1) : QRegExpValidator(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QRegExpValidator(const QRegExp&, QObject*, const char*)
	x_QRegExpValidator* xret = new x_QRegExpValidator(*(const QRegExp *)x[1].s_class,(QObject*)x[2].s_class,(const char*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(const QRegExp& x1, QObject* x2, const char* x3) : QRegExpValidator(x1, x2, x3) {
    }
    static void x_3(Smoke::Stack x) {
	// QRegExpValidator(const QRegExp&, QObject*)
	x_QRegExpValidator* xret = new x_QRegExpValidator(*(const QRegExp *)x[1].s_class,(QObject*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QRegExpValidator(const QRegExp& x1, QObject* x2) : QRegExpValidator(x1, x2) {
    }
    void x_4(Smoke::Stack x) const {
	// validate(QString&, int&)
	QValidator::State xret = this->QRegExpValidator::validate(*(QString *)x[1].s_class,*(int *)x[2].s_class);
	x[0].s_class = (void*)new QValidator::State(xret);
    }
    void x_5(Smoke::Stack x) {
	// setRegExp(const QRegExp&)
	this->QRegExpValidator::setRegExp(*(const QRegExp *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) const {
	// regExp()
	const QRegExp& xret = this->QRegExpValidator::regExp();
	x[0].s_class = (void*)&xret;
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
    virtual void fixup(QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(9333, (void*)this, x)) return;
	this->QValidator::fixup(x1);
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
    virtual QValidator::State validate(QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(6495, (void*)this, x)) {
	    QValidator::State *xptr = (QValidator::State *)x[0].s_class;
	    QValidator::State xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QRegExpValidator::validate(x1, x2);
    }
    ~x_QRegExpValidator() {}
};
void xcall_QRegExpValidator(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QRegExpValidator *xself = (x_QRegExpValidator*)obj;
    switch(xi) {
	case 0: x_QRegExpValidator::x_0(args);	break;
	case 1: x_QRegExpValidator::x_1(args);	break;
	case 2: x_QRegExpValidator::x_2(args);	break;
	case 3: x_QRegExpValidator::x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: delete (QRegExpValidator*)xself;	break;
    }
}
