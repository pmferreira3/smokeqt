//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qsqlrecord.h>
#include <qstring.h>
#include <qsqlerror.h>
#include <qvariant.h>
#include <qsqldatabase.h>
#include <qsqlquery.h>
#include <qsqlindex.h>
#include <qstringlist.h>

class x_QSqlDatabase : public QSqlDatabase {
public:
    void x_0(Smoke::Stack x) {
	// open()
	bool xret = this->QSqlDatabase::open();
	x[0].s_bool = (bool)xret;
    }
    void x_1(Smoke::Stack x) {
	// open(const QString&, const QString&)
	bool xret = this->QSqlDatabase::open(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_2(Smoke::Stack x) {
	// close()
	this->QSqlDatabase::close();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_3(Smoke::Stack x) const {
	// isOpen()
	bool xret = this->QSqlDatabase::isOpen();
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) const {
	// isOpenError()
	bool xret = this->QSqlDatabase::isOpenError();
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) const {
	// tables()
	QStringList xret = this->QSqlDatabase::tables();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_6(Smoke::Stack x) const {
	// primaryIndex(const QString&)
	QSqlIndex xret = this->QSqlDatabase::primaryIndex(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_7(Smoke::Stack x) const {
	// record(const QString&)
	QSqlRecord xret = this->QSqlDatabase::record(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QSqlRecord(xret);
    }
    void x_8(Smoke::Stack x) const {
	// record(const QSqlQuery&)
	QSqlRecord xret = this->QSqlDatabase::record(*(const QSqlQuery *)x[1].s_class);
	x[0].s_class = (void*)new QSqlRecord(xret);
    }
    void x_9(Smoke::Stack x) const {
	// recordInfo(const QString&)
	QSqlRecordInfo xret = this->QSqlDatabase::recordInfo(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QSqlRecordInfo(xret);
    }
    void x_10(Smoke::Stack x) const {
	// recordInfo(const QSqlQuery&)
	QSqlRecordInfo xret = this->QSqlDatabase::recordInfo(*(const QSqlQuery *)x[1].s_class);
	x[0].s_class = (void*)new QSqlRecordInfo(xret);
    }
    void x_11(Smoke::Stack x) const {
	// exec(const QString&)
	QSqlQuery xret = this->QSqlDatabase::exec(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QSqlQuery(xret);
    }
    void x_12(Smoke::Stack x) const {
	// exec()
	QSqlQuery xret = this->QSqlDatabase::exec();
	x[0].s_class = (void*)new QSqlQuery(xret);
    }
    void x_13(Smoke::Stack x) const {
	// lastError()
	QSqlError xret = this->QSqlDatabase::lastError();
	x[0].s_class = (void*)new QSqlError(xret);
    }
    void x_14(Smoke::Stack x) {
	// transaction()
	bool xret = this->QSqlDatabase::transaction();
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) {
	// commit()
	bool xret = this->QSqlDatabase::commit();
	x[0].s_bool = (bool)xret;
    }
    void x_16(Smoke::Stack x) {
	// rollback()
	bool xret = this->QSqlDatabase::rollback();
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) {
	// setDatabaseName(const QString&)
	this->QSqlDatabase::setDatabaseName(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_18(Smoke::Stack x) {
	// setUserName(const QString&)
	this->QSqlDatabase::setUserName(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_19(Smoke::Stack x) {
	// setPassword(const QString&)
	this->QSqlDatabase::setPassword(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_20(Smoke::Stack x) {
	// setHostName(const QString&)
	this->QSqlDatabase::setHostName(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_21(Smoke::Stack x) {
	// setPort(int)
	this->QSqlDatabase::setPort((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_22(Smoke::Stack x) const {
	// databaseName()
	QString xret = this->QSqlDatabase::databaseName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_23(Smoke::Stack x) const {
	// userName()
	QString xret = this->QSqlDatabase::userName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_24(Smoke::Stack x) const {
	// password()
	QString xret = this->QSqlDatabase::password();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_25(Smoke::Stack x) const {
	// hostName()
	QString xret = this->QSqlDatabase::hostName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_26(Smoke::Stack x) const {
	// driverName()
	QString xret = this->QSqlDatabase::driverName();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_27(Smoke::Stack x) const {
	// port()
	int xret = this->QSqlDatabase::port();
	x[0].s_int = (int)xret;
    }
    void x_28(Smoke::Stack x) const {
	// driver()
	QSqlDriver* xret = this->QSqlDatabase::driver();
	x[0].s_class = (void*)xret;
    }
    static void x_29(Smoke::Stack x) {
	// addDatabase(const QString&, const QString&)
	QSqlDatabase* xret = QSqlDatabase::addDatabase(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_30(Smoke::Stack x) {
	// addDatabase(const QString&)
	QSqlDatabase* xret = QSqlDatabase::addDatabase(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_31(Smoke::Stack x) {
	// database(const QString&, bool)
	QSqlDatabase* xret = QSqlDatabase::database(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    static void x_32(Smoke::Stack x) {
	// database(const QString&)
	QSqlDatabase* xret = QSqlDatabase::database(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_33(Smoke::Stack x) {
	// database()
	QSqlDatabase* xret = QSqlDatabase::database();
	x[0].s_class = (void*)xret;
    }
    static void x_34(Smoke::Stack x) {
	// removeDatabase(const QString&)
	QSqlDatabase::removeDatabase(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    static void x_35(Smoke::Stack x) {
	// contains(const QString&)
	bool xret = QSqlDatabase::contains(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    static void x_36(Smoke::Stack x) {
	// contains()
	bool xret = QSqlDatabase::contains();
	x[0].s_bool = (bool)xret;
    }
    static void x_37(Smoke::Stack x) {
	// drivers()
	QStringList xret = QSqlDatabase::drivers();
	x[0].s_class = (void*)new QStringList(xret);
    }
    static void x_38(Smoke::Stack x) {
	// registerSqlDriver(const QString&, const QSqlDriverCreatorBase*)
	QSqlDatabase::registerSqlDriver(*(const QString *)x[1].s_class,(const QSqlDriverCreatorBase*)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    static void x_39(Smoke::Stack x) {
	// QSqlDatabase(const QString&, const QString&, QObject*, const char*)
	x_QSqlDatabase* xret = new x_QSqlDatabase(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(QObject*)x[3].s_class,(const char*)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlDatabase(const QString& x1, const QString& x2, QObject* x3, const char* x4) : QSqlDatabase(x1, x2, x3, x4) {
    }
    static void x_40(Smoke::Stack x) {
	// QSqlDatabase(const QString&, const QString&, QObject*)
	x_QSqlDatabase* xret = new x_QSqlDatabase(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class,(QObject*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlDatabase(const QString& x1, const QString& x2, QObject* x3) : QSqlDatabase(x1, x2, x3) {
    }
    static void x_41(Smoke::Stack x) {
	// QSqlDatabase(const QString&, const QString&)
	x_QSqlDatabase* xret = new x_QSqlDatabase(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlDatabase(const QString& x1, const QString& x2) : QSqlDatabase(x1, x2) {
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
    virtual void setDatabaseName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7356, (void*)this, x)) return;
	this->QSqlDatabase::setDatabaseName(x1);
    }
    virtual void setHostName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7359, (void*)this, x)) return;
	this->QSqlDatabase::setHostName(x1);
    }
    virtual void setName(const char* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5411, (void*)this, x)) return;
	this->QObject::setName(x1);
    }
    virtual void setPassword(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7358, (void*)this, x)) return;
	this->QSqlDatabase::setPassword(x1);
    }
    virtual void setPort(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(7360, (void*)this, x)) return;
	this->QSqlDatabase::setPort(x1);
    }
    virtual bool setProperty(const char* x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(5441, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QObject::setProperty(x1, x2);
    }
    virtual void setUserName(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7357, (void*)this, x)) return;
	this->QSqlDatabase::setUserName(x1);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    ~x_QSqlDatabase() {}
};
void xcall_QSqlDatabase(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlDatabase *xself = (x_QSqlDatabase*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
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
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: xself->x_27(args);	break;
	case 28: xself->x_28(args);	break;
	case 29: x_QSqlDatabase::x_29(args);	break;
	case 30: x_QSqlDatabase::x_30(args);	break;
	case 31: x_QSqlDatabase::x_31(args);	break;
	case 32: x_QSqlDatabase::x_32(args);	break;
	case 33: x_QSqlDatabase::x_33(args);	break;
	case 34: x_QSqlDatabase::x_34(args);	break;
	case 35: x_QSqlDatabase::x_35(args);	break;
	case 36: x_QSqlDatabase::x_36(args);	break;
	case 37: x_QSqlDatabase::x_37(args);	break;
	case 38: x_QSqlDatabase::x_38(args);	break;
	case 39: x_QSqlDatabase::x_39(args);	break;
	case 40: x_QSqlDatabase::x_40(args);	break;
	case 41: x_QSqlDatabase::x_41(args);	break;
	case 42: delete (QSqlDatabase*)xself;	break;
    }
}
