//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qsqlform.h>

class x_QSqlForm : public QSqlForm {
public:
    static void x_0(Smoke::Stack x) {
	// QSqlForm(QObject*, const char*)
	x_QSqlForm* xret = new x_QSqlForm((QObject*)x[1].s_class,(const char*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlForm(QObject* x1, const char* x2) : QSqlForm(x1, x2) {
    }
    static void x_1(Smoke::Stack x) {
	// QSqlForm(QObject*)
	x_QSqlForm* xret = new x_QSqlForm((QObject*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlForm(QObject* x1) : QSqlForm(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QSqlForm()
	x_QSqlForm* xret = new x_QSqlForm();
	x[0].s_class = (void*)xret;
    }
    x_QSqlForm() : QSqlForm() {
    }
    void x_3(Smoke::Stack x) {
	// insert(QWidget*, const QString&)
	this->QSqlForm::insert((QWidget*)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_4(Smoke::Stack x) {
	// remove(const QString&)
	this->QSqlForm::remove(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_5(Smoke::Stack x) const {
	// count()
	uint xret = this->QSqlForm::count();
	x[0].s_uint = (uint)xret;
    }
    void x_6(Smoke::Stack x) const {
	// widget(uint)
	QWidget* xret = this->QSqlForm::widget((uint)x[1].s_uint);
	x[0].s_class = (void*)xret;
    }
    void x_7(Smoke::Stack x) const {
	// widgetToField(QWidget*)
	QSqlField* xret = this->QSqlForm::widgetToField((QWidget*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    void x_8(Smoke::Stack x) const {
	// fieldToWidget(QSqlField*)
	QWidget* xret = this->QSqlForm::fieldToWidget((QSqlField*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    void x_9(Smoke::Stack x) {
	// installPropertyMap(QSqlPropertyMap*)
	this->QSqlForm::installPropertyMap((QSqlPropertyMap*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_10(Smoke::Stack x) {
	// setRecord(QSqlRecord*)
	this->QSqlForm::setRecord((QSqlRecord*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_11(Smoke::Stack x) {
	// readField(QWidget*)
	this->QSqlForm::readField((QWidget*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_12(Smoke::Stack x) {
	// writeField(QWidget*)
	this->QSqlForm::writeField((QWidget*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_13(Smoke::Stack x) {
	// readFields()
	this->QSqlForm::readFields();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_14(Smoke::Stack x) {
	// writeFields()
	this->QSqlForm::writeFields();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_15(Smoke::Stack x) {
	// clear()
	this->QSqlForm::clear();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_16(Smoke::Stack x) {
	// clearValues(bool)
	this->QSqlForm::clearValues((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_17(Smoke::Stack x) {
	// clearValues()
	this->QSqlForm::clearValues();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_18(Smoke::Stack x) {
	// insert(QWidget*, QSqlField*)
	this->QSqlForm::insert((QWidget*)x[1].s_class,(QSqlField*)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_19(Smoke::Stack x) {
	// remove(QWidget*)
	this->QSqlForm::remove((QWidget*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_20(Smoke::Stack x) {
	// clearMap()
	this->QSqlForm::clearMap();
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
    virtual void clear() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7514, (void*)this, x)) return;
	this->QSqlForm::clear();
    }
    virtual void clearValues(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7515, (void*)this, x)) return;
	this->QSqlForm::clearValues(x1);
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
    virtual void insert(QWidget* x1, QSqlField* x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(7517, (void*)this, x)) return;
	this->QSqlForm::insert(x1, x2);
    }
    virtual void insert(QWidget* x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(7502, (void*)this, x)) return;
	this->QSqlForm::insert(x1, x2);
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
    virtual void readField(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7510, (void*)this, x)) return;
	this->QSqlForm::readField(x1);
    }
    virtual void readFields() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7512, (void*)this, x)) return;
	this->QSqlForm::readFields();
    }
    virtual void remove(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7518, (void*)this, x)) return;
	this->QSqlForm::remove(x1);
    }
    virtual void remove(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7503, (void*)this, x)) return;
	this->QSqlForm::remove(x1);
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
    virtual void setRecord(QSqlRecord* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7509, (void*)this, x)) return;
	this->QSqlForm::setRecord(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void writeField(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7511, (void*)this, x)) return;
	this->QSqlForm::writeField(x1);
    }
    virtual void writeFields() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7513, (void*)this, x)) return;
	this->QSqlForm::writeFields();
    }
    ~x_QSqlForm() {}
};
void xcall_QSqlForm(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlForm *xself = (x_QSqlForm*)obj;
    switch(xi) {
	case 0: x_QSqlForm::x_0(args);	break;
	case 1: x_QSqlForm::x_1(args);	break;
	case 2: x_QSqlForm::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: delete (QSqlForm*)xself;	break;
    }
}
