//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qtooltip.h>

class x_QToolTipGroup : public QToolTipGroup {
public:
    static void x_0(Smoke::Stack x) {
	// QToolTipGroup(QObject*, const char*)
	x_QToolTipGroup* xret = new x_QToolTipGroup((QObject*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QToolTipGroup(QObject* x1, const char* x2) : QToolTipGroup(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QToolTipGroup(QObject*)
	x_QToolTipGroup* xret = new x_QToolTipGroup((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QToolTipGroup(QObject* x1) : QToolTipGroup(x1) {
    }
    void x_2(Smoke::Stack x) const {
	// delay()
	bool xret = this->QToolTipGroup::delay();
	x[0].s_bool = (bool)xret;
    }
    void x_3(Smoke::Stack x) const {
	// enabled()
	bool xret = this->QToolTipGroup::enabled();
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) {
	// setDelay(bool)
	this->QToolTipGroup::setDelay((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_5(Smoke::Stack x) {
	// setEnabled(bool)
	this->QToolTipGroup::setEnabled((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) {
	// showTip(const QString&)
	this->QToolTipGroup::showTip(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_7(Smoke::Stack x) {
	// removeTip()
	this->QToolTipGroup::removeTip();
	x[0].s_int = x[0].s_int; // noop
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
    ~x_QToolTipGroup() {}
};
void xcall_QToolTipGroup(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QToolTipGroup *xself = (x_QToolTipGroup*)obj;
    switch(xi) {
	case 0: x_QToolTipGroup::x_0(args);	break;
	case 1: x_QToolTipGroup::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: delete (QToolTipGroup*)xself;	break;
    }
}
