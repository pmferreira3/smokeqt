//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qvariant.h>
#include <qstring.h>
#include <qsqlindex.h>
#include <qsqlfield.h>
#include <qstringlist.h>
#include <qsqlcursor.h>

class x_QSqlCursor : public QSqlCursor {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlCursor::ReadOnly;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlCursor::Insert;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlCursor::Update;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlCursor::Delete;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QSqlCursor::Writable;
    }
    static void x_5(Smoke::Stack x) {
	// QSqlCursor(const QString&, bool, QSqlDatabase*)
	x_QSqlCursor* xret = new x_QSqlCursor(*(const QString *)x[1].s_class,(bool)x[2].s_bool,(QSqlDatabase*)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlCursor(const QString& x1, bool x2, QSqlDatabase* x3) : QSqlCursor(x1, x2, x3) {
    }
    static void x_6(Smoke::Stack x) {
	// QSqlCursor(const QString&, bool)
	x_QSqlCursor* xret = new x_QSqlCursor(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QSqlCursor(const QString& x1, bool x2) : QSqlCursor(x1, x2) {
    }
    static void x_7(Smoke::Stack x) {
	// QSqlCursor(const QString&)
	x_QSqlCursor* xret = new x_QSqlCursor(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlCursor(const QString& x1) : QSqlCursor(x1) {
    }
    static void x_8(Smoke::Stack x) {
	// QSqlCursor()
	x_QSqlCursor* xret = new x_QSqlCursor();
	x[0].s_class = (void*)xret;
    }
    x_QSqlCursor() : QSqlCursor() {
    }
    static void x_9(Smoke::Stack x) {
	// QSqlCursor(const QSqlCursor&)
	x_QSqlCursor* xret = new x_QSqlCursor(*(const QSqlCursor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QSqlCursor(const QSqlCursor& x1) : QSqlCursor(x1) {
    }
    void x_10(Smoke::Stack x) {
	// operator=(const QSqlCursor&)
	QSqlCursor& xret = this->QSqlCursor::operator=(*(const QSqlCursor *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_11(Smoke::Stack x) const {
	// value(int)
	QVariant xret = this->QSqlCursor::value((int)x[1].s_int);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_12(Smoke::Stack x) const {
	// value(const QString&)
	QVariant xret = this->QSqlCursor::value(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_13(Smoke::Stack x) const {
	// primaryIndex(bool)
	QSqlIndex xret = this->QSqlCursor::primaryIndex((bool)x[1].s_bool);
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_14(Smoke::Stack x) const {
	// primaryIndex()
	QSqlIndex xret = this->QSqlCursor::primaryIndex();
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_15(Smoke::Stack x) const {
	// index(const QStringList&)
	QSqlIndex xret = this->QSqlCursor::index(*(const QStringList *)x[1].s_class);
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_16(Smoke::Stack x) const {
	// index(const QString&)
	QSqlIndex xret = this->QSqlCursor::index(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_17(Smoke::Stack x) const {
	// index(const char*)
	QSqlIndex xret = this->QSqlCursor::index((const char*)x[1].s_class);
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_18(Smoke::Stack x) {
	// setPrimaryIndex(const QSqlIndex&)
	this->QSqlCursor::setPrimaryIndex(*(const QSqlIndex *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_19(Smoke::Stack x) {
	// append(const QSqlFieldInfo&)
	this->QSqlCursor::append(*(const QSqlFieldInfo *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_20(Smoke::Stack x) {
	// insert(int, const QSqlFieldInfo&)
	this->QSqlCursor::insert((int)x[1].s_int,*(const QSqlFieldInfo *)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_21(Smoke::Stack x) {
	// remove(int)
	this->QSqlCursor::remove((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_22(Smoke::Stack x) {
	// clear()
	this->QSqlCursor::clear();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_23(Smoke::Stack x) {
	// setGenerated(const QString&, bool)
	this->QSqlCursor::setGenerated(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_24(Smoke::Stack x) {
	// setGenerated(int, bool)
	this->QSqlCursor::setGenerated((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_25(Smoke::Stack x) {
	// editBuffer(bool)
	QSqlRecord* xret = this->QSqlCursor::editBuffer((bool)x[1].s_bool);
	x[0].s_class = (void*)xret;
    }
    void x_26(Smoke::Stack x) {
	// editBuffer()
	QSqlRecord* xret = this->QSqlCursor::editBuffer();
	x[0].s_class = (void*)xret;
    }
    void x_27(Smoke::Stack x) {
	// primeInsert()
	QSqlRecord* xret = this->QSqlCursor::primeInsert();
	x[0].s_class = (void*)xret;
    }
    void x_28(Smoke::Stack x) {
	// primeUpdate()
	QSqlRecord* xret = this->QSqlCursor::primeUpdate();
	x[0].s_class = (void*)xret;
    }
    void x_29(Smoke::Stack x) {
	// primeDelete()
	QSqlRecord* xret = this->QSqlCursor::primeDelete();
	x[0].s_class = (void*)xret;
    }
    void x_30(Smoke::Stack x) {
	// insert(bool)
	int xret = this->QSqlCursor::insert((bool)x[1].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_31(Smoke::Stack x) {
	// insert()
	int xret = this->QSqlCursor::insert();
	x[0].s_int = (int)xret;
    }
    void x_32(Smoke::Stack x) {
	// update(bool)
	int xret = this->QSqlCursor::update((bool)x[1].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_33(Smoke::Stack x) {
	// update()
	int xret = this->QSqlCursor::update();
	x[0].s_int = (int)xret;
    }
    void x_34(Smoke::Stack x) {
	// del(bool)
	int xret = this->QSqlCursor::del((bool)x[1].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_35(Smoke::Stack x) {
	// del()
	int xret = this->QSqlCursor::del();
	x[0].s_int = (int)xret;
    }
    void x_36(Smoke::Stack x) {
	// setMode(int)
	this->QSqlCursor::setMode((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_37(Smoke::Stack x) const {
	// mode()
	int xret = this->QSqlCursor::mode();
	x[0].s_int = (int)xret;
    }
    void x_38(Smoke::Stack x) {
	// setCalculated(const QString&, bool)
	this->QSqlCursor::setCalculated(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_39(Smoke::Stack x) const {
	// isCalculated(const QString&)
	bool xret = this->QSqlCursor::isCalculated(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_40(Smoke::Stack x) {
	// setTrimmed(const QString&, bool)
	this->QSqlCursor::setTrimmed(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_41(Smoke::Stack x) const {
	// isTrimmed(const QString&)
	bool xret = this->QSqlCursor::isTrimmed(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_42(Smoke::Stack x) const {
	// isReadOnly()
	bool xret = this->QSqlCursor::isReadOnly();
	x[0].s_bool = (bool)xret;
    }
    void x_43(Smoke::Stack x) const {
	// canInsert()
	bool xret = this->QSqlCursor::canInsert();
	x[0].s_bool = (bool)xret;
    }
    void x_44(Smoke::Stack x) const {
	// canUpdate()
	bool xret = this->QSqlCursor::canUpdate();
	x[0].s_bool = (bool)xret;
    }
    void x_45(Smoke::Stack x) const {
	// canDelete()
	bool xret = this->QSqlCursor::canDelete();
	x[0].s_bool = (bool)xret;
    }
    void x_46(Smoke::Stack x) {
	// select()
	bool xret = this->QSqlCursor::select();
	x[0].s_bool = (bool)xret;
    }
    void x_47(Smoke::Stack x) {
	// select(const QSqlIndex&)
	bool xret = this->QSqlCursor::select(*(const QSqlIndex *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_48(Smoke::Stack x) {
	// select(const QSqlIndex&, const QSqlIndex&)
	bool xret = this->QSqlCursor::select(*(const QSqlIndex *)x[1].s_class,*(const QSqlIndex *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_49(Smoke::Stack x) {
	// select(const QString&, const QSqlIndex&)
	bool xret = this->QSqlCursor::select(*(const QString *)x[1].s_class,*(const QSqlIndex *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_50(Smoke::Stack x) {
	// select(const QString&)
	bool xret = this->QSqlCursor::select(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_51(Smoke::Stack x) {
	// setSort(const QSqlIndex&)
	this->QSqlCursor::setSort(*(const QSqlIndex *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_52(Smoke::Stack x) const {
	// sort()
	QSqlIndex xret = this->QSqlCursor::sort();
	x[0].s_class = (void*)new QSqlIndex(xret);
    }
    void x_53(Smoke::Stack x) {
	// setFilter(const QString&)
	this->QSqlCursor::setFilter(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_54(Smoke::Stack x) const {
	// filter()
	QString xret = this->QSqlCursor::filter();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_55(Smoke::Stack x) {
	// setName(const QString&, bool)
	this->QSqlCursor::setName(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_56(Smoke::Stack x) {
	// setName(const QString&)
	this->QSqlCursor::setName(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_57(Smoke::Stack x) const {
	// name()
	QString xret = this->QSqlCursor::name();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_58(Smoke::Stack x) const {
	// toString(const QString&, const QString&)
	QString xret = this->QSqlCursor::toString(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_59(Smoke::Stack x) const {
	// toString(const QString&)
	QString xret = this->QSqlCursor::toString(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_60(Smoke::Stack x) const {
	// toString()
	QString xret = this->QSqlCursor::toString();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_61(Smoke::Stack x) {
	// afterSeek()
	this->QSqlCursor::afterSeek();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_62(Smoke::Stack x) {
	// exec(const QString&)
	bool xret = this->QSqlCursor::exec(*(const QString *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_63(Smoke::Stack x) {
	// calculateField(const QString&)
	QVariant xret = this->QSqlCursor::calculateField(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)new QVariant(xret);
    }
    void x_64(Smoke::Stack x) {
	// update(const QString&, bool)
	int xret = this->QSqlCursor::update(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_65(Smoke::Stack x) {
	// update(const QString&)
	int xret = this->QSqlCursor::update(*(const QString *)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_66(Smoke::Stack x) {
	// del(const QString&, bool)
	int xret = this->QSqlCursor::del(*(const QString *)x[1].s_class,(bool)x[2].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_67(Smoke::Stack x) {
	// del(const QString&)
	int xret = this->QSqlCursor::del(*(const QString *)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_68(Smoke::Stack x) const {
	// toString(const QString&, QSqlField*, const QString&)
	QString xret = this->QSqlCursor::toString(*(const QString *)x[1].s_class,(QSqlField*)x[2].s_class,*(const QString *)x[3].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_69(Smoke::Stack x) const {
	// toString(QSqlRecord*, const QString&, const QString&, const QString&)
	QString xret = this->QSqlCursor::toString((QSqlRecord*)x[1].s_class,*(const QString *)x[2].s_class,*(const QString *)x[3].s_class,*(const QString *)x[4].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_70(Smoke::Stack x) const {
	// toString(const QSqlIndex&, QSqlRecord*, const QString&, const QString&, const QString&)
	QString xret = this->QSqlCursor::toString(*(const QSqlIndex *)x[1].s_class,(QSqlRecord*)x[2].s_class,*(const QString *)x[3].s_class,*(const QString *)x[4].s_class,*(const QString *)x[5].s_class);
	x[0].s_class = (void*)new QString(xret);
    }
    virtual void afterSeek() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7328, (void*)this, x)) return;
	this->QSqlCursor::afterSeek();
    }
    virtual void append(const QSqlFieldInfo& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7286, (void*)this, x)) return;
	this->QSqlCursor::append(x1);
    }
    virtual void beforeSeek() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7576, (void*)this, x)) return;
	this->QSqlQuery::beforeSeek();
    }
    virtual QVariant calculateField(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7330, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::calculateField(x1);
    }
    virtual void clear() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7289, (void*)this, x)) return;
	this->QSqlCursor::clear();
    }
    virtual void clearValues(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7606, (void*)this, x)) return;
	this->QSqlRecord::clearValues(x1);
    }
    virtual int del(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7301, (void*)this, x)) return (int)x[0].s_int;
	return this->QSqlCursor::del(x1);
    }
    virtual int del(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7333, (void*)this, x)) return (int)x[0].s_int;
	return this->QSqlCursor::del(x1, x2);
    }
    virtual QSqlRecord* editBuffer(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7292, (void*)this, x)) return (QSqlRecord*)x[0].s_class;
	return this->QSqlCursor::editBuffer(x1);
    }
    virtual bool exec(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7329, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlCursor::exec(x1);
    }
    virtual bool first() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7574, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlQuery::first();
    }
    virtual QSqlIndex index(const QStringList& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7282, (void*)this, x)) {
	    QSqlIndex *xptr = (QSqlIndex *)x[0].s_class;
	    QSqlIndex xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::index(x1);
    }
    virtual int insert(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7297, (void*)this, x)) return (int)x[0].s_int;
	return this->QSqlCursor::insert(x1);
    }
    virtual void insert(int x1, const QSqlFieldInfo& x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(7287, (void*)this, x)) return;
	this->QSqlCursor::insert(x1, x2);
    }
    virtual bool last() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7575, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlQuery::last();
    }
    virtual bool next() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7572, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlQuery::next();
    }
    virtual bool prev() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7573, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlQuery::prev();
    }
    virtual QSqlIndex primaryIndex(bool x1) const {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7280, (void*)this, x)) {
	    QSqlIndex *xptr = (QSqlIndex *)x[0].s_class;
	    QSqlIndex xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::primaryIndex(x1);
    }
    virtual QSqlRecord* primeDelete() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7296, (void*)this, x)) return (QSqlRecord*)x[0].s_class;
	return this->QSqlCursor::primeDelete();
    }
    virtual QSqlRecord* primeInsert() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7294, (void*)this, x)) return (QSqlRecord*)x[0].s_class;
	return this->QSqlCursor::primeInsert();
    }
    virtual QSqlRecord* primeUpdate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(7295, (void*)this, x)) return (QSqlRecord*)x[0].s_class;
	return this->QSqlCursor::primeUpdate();
    }
    virtual void remove(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(7288, (void*)this, x)) return;
	this->QSqlCursor::remove(x1);
    }
    virtual bool seek(int x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7570, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlQuery::seek(x1, x2);
    }
    virtual bool select(const QString& x1, const QSqlIndex& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(7316, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QSqlCursor::select(x1, x2);
    }
    virtual void setCalculated(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7305, (void*)this, x)) return;
	this->QSqlCursor::setCalculated(x1, x2);
    }
    virtual void setFilter(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7320, (void*)this, x)) return;
	this->QSqlCursor::setFilter(x1);
    }
    virtual void setGenerated(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7290, (void*)this, x)) return;
	this->QSqlCursor::setGenerated(x1, x2);
    }
    virtual void setGenerated(int x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7291, (void*)this, x)) return;
	this->QSqlCursor::setGenerated(x1, x2);
    }
    virtual void setMode(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(7303, (void*)this, x)) return;
	this->QSqlCursor::setMode(x1);
    }
    virtual void setName(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7322, (void*)this, x)) return;
	this->QSqlCursor::setName(x1, x2);
    }
    virtual void setNull(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7591, (void*)this, x)) return;
	this->QSqlRecord::setNull(x1);
    }
    virtual void setNull(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(7590, (void*)this, x)) return;
	this->QSqlRecord::setNull(x1);
    }
    virtual void setPrimaryIndex(const QSqlIndex& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7285, (void*)this, x)) return;
	this->QSqlCursor::setPrimaryIndex(x1);
    }
    virtual void setSort(const QSqlIndex& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7318, (void*)this, x)) return;
	this->QSqlCursor::setSort(x1);
    }
    virtual void setTrimmed(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7307, (void*)this, x)) return;
	this->QSqlCursor::setTrimmed(x1, x2);
    }
    virtual void setValue(const QString& x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(7585, (void*)this, x)) return;
	this->QSqlRecord::setValue(x1, x2);
    }
    virtual void setValue(int x1, const QVariant& x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(7584, (void*)this, x)) return;
	this->QSqlRecord::setValue(x1, x2);
    }
    virtual QString toString(QSqlRecord* x1, const QString& x2, const QString& x3, const QString& x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->callMethod(7336, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::toString(x1, x2, x3, x4);
    }
    virtual QString toString(const QSqlIndex& x1, QSqlRecord* x2, const QString& x3, const QString& x4, const QString& x5) const {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	if(qt_Smoke->callMethod(7337, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::toString(x1, x2, x3, x4, x5);
    }
    virtual QString toString(const QString& x1, QSqlField* x2, const QString& x3) const {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->callMethod(7335, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::toString(x1, x2, x3);
    }
    virtual QString toString(const QString& x1, const QString& x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(7325, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::toString(x1, x2);
    }
    virtual QStringList toStringList(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7612, (void*)this, x)) {
	    QStringList *xptr = (QStringList *)x[0].s_class;
	    QStringList xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlRecord::toStringList(x1);
    }
    virtual int update(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(7299, (void*)this, x)) return (int)x[0].s_int;
	return this->QSqlCursor::update(x1);
    }
    virtual int update(const QString& x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(7331, (void*)this, x)) return (int)x[0].s_int;
	return this->QSqlCursor::update(x1, x2);
    }
    virtual QVariant value(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7279, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::value(x1);
    }
    virtual QVariant value(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(7278, (void*)this, x)) {
	    QVariant *xptr = (QVariant *)x[0].s_class;
	    QVariant xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QSqlCursor::value(x1);
    }
    ~x_QSqlCursor() {}
};
void xcall_QSqlCursor(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSqlCursor *xself = (x_QSqlCursor*)obj;
    switch(xi) {
	case 0: x_QSqlCursor::x_0(args);	break;
	case 1: x_QSqlCursor::x_1(args);	break;
	case 2: x_QSqlCursor::x_2(args);	break;
	case 3: x_QSqlCursor::x_3(args);	break;
	case 4: x_QSqlCursor::x_4(args);	break;
	case 5: x_QSqlCursor::x_5(args);	break;
	case 6: x_QSqlCursor::x_6(args);	break;
	case 7: x_QSqlCursor::x_7(args);	break;
	case 8: x_QSqlCursor::x_8(args);	break;
	case 9: x_QSqlCursor::x_9(args);	break;
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
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: xself->x_31(args);	break;
	case 32: xself->x_32(args);	break;
	case 33: xself->x_33(args);	break;
	case 34: xself->x_34(args);	break;
	case 35: xself->x_35(args);	break;
	case 36: xself->x_36(args);	break;
	case 37: xself->x_37(args);	break;
	case 38: xself->x_38(args);	break;
	case 39: xself->x_39(args);	break;
	case 40: xself->x_40(args);	break;
	case 41: xself->x_41(args);	break;
	case 42: xself->x_42(args);	break;
	case 43: xself->x_43(args);	break;
	case 44: xself->x_44(args);	break;
	case 45: xself->x_45(args);	break;
	case 46: xself->x_46(args);	break;
	case 47: xself->x_47(args);	break;
	case 48: xself->x_48(args);	break;
	case 49: xself->x_49(args);	break;
	case 50: xself->x_50(args);	break;
	case 51: xself->x_51(args);	break;
	case 52: xself->x_52(args);	break;
	case 53: xself->x_53(args);	break;
	case 54: xself->x_54(args);	break;
	case 55: xself->x_55(args);	break;
	case 56: xself->x_56(args);	break;
	case 57: xself->x_57(args);	break;
	case 58: xself->x_58(args);	break;
	case 59: xself->x_59(args);	break;
	case 60: xself->x_60(args);	break;
	case 61: xself->x_61(args);	break;
	case 62: xself->x_62(args);	break;
	case 63: xself->x_63(args);	break;
	case 64: xself->x_64(args);	break;
	case 65: xself->x_65(args);	break;
	case 66: xself->x_66(args);	break;
	case 67: xself->x_67(args);	break;
	case 68: xself->x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: delete (QSqlCursor*)xself;	break;
    }
}
