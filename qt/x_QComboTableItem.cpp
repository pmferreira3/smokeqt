//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpalette.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstringlist.h>
#include <qsize.h>
#include <qtable.h>

class x_QComboTableItem : public QComboTableItem {
public:
    static void x_0(Smoke::Stack x) {
	// QComboTableItem(QTable*, const QStringList&, bool)
	x_QComboTableItem* xret = new x_QComboTableItem((QTable*)x[1].s_class,*(const QStringList *)x[2].s_class,(bool)x[3].s_bool);
	x[0].s_class = (void*)xret;
    }
    x_QComboTableItem(QTable* x1, const QStringList& x2, bool x3) : QComboTableItem(x1, x2, x3) {
    }
    static void x_1(Smoke::Stack x) {
	// QComboTableItem(QTable*, const QStringList&)
	x_QComboTableItem* xret = new x_QComboTableItem((QTable*)x[1].s_class,*(const QStringList *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QComboTableItem(QTable* x1, const QStringList& x2) : QComboTableItem(x1, x2) {
    }
    void x_2(Smoke::Stack x) const {
	// createEditor()
	QWidget* xret = this->QComboTableItem::createEditor();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// setContentFromEditor(QWidget*)
	this->QComboTableItem::setContentFromEditor((QWidget*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_4(Smoke::Stack x) {
	// paint(QPainter*, const QColorGroup&, const QRect&, bool)
	this->QComboTableItem::paint((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,*(const QRect *)x[3].s_class,(bool)x[4].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_5(Smoke::Stack x) {
	// setCurrentItem(int)
	this->QComboTableItem::setCurrentItem((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) {
	// setCurrentItem(const QString&)
	this->QComboTableItem::setCurrentItem(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_7(Smoke::Stack x) const {
	// currentItem()
	int xret = this->QComboTableItem::currentItem();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// currentText()
	QString xret = this->QComboTableItem::currentText();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_9(Smoke::Stack x) const {
	// count()
	int xret = this->QComboTableItem::count();
	x[0].s_int = (int)xret;
    }
    void x_10(Smoke::Stack x) const {
	// text(int)
	QString xret = this->QComboTableItem::text((int)x[1].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) {
	// setEditable(bool)
	this->QComboTableItem::setEditable((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_12(Smoke::Stack x) const {
	// isEditable()
	bool xret = this->QComboTableItem::isEditable();
	x[0].s_bool = (bool)xret;
    }
    void x_13(Smoke::Stack x) {
	// setStringList(const QStringList&)
	this->QComboTableItem::setStringList(*(const QStringList *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_14(Smoke::Stack x) const {
	// rtti()
	int xret = this->QComboTableItem::rtti();
	x[0].s_int = (int)xret;
    }
    virtual int alignment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8453, (void*)this, x)) return (int)x[0].s_int;
	return this->QTableItem::alignment();
    }
    virtual QWidget* createEditor() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(1141, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QComboTableItem::createEditor();
    }
    virtual QString key() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8461, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::key();
    }
    virtual void paint(QPainter* x1, const QColorGroup& x2, const QRect& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = (bool)x4;
	if(qt_Smoke->callMethod(1143, (void*)this, x)) return;
	this->QComboTableItem::paint(x1, x2, x3, x4);
    }
    virtual QPixmap pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8448, (void*)this, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].s_class;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::pixmap();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(1153, (void*)this, x)) return (int)x[0].s_int;
	return this->QComboTableItem::rtti();
    }
    virtual void setCol(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(8467, (void*)this, x)) return;
	this->QTableItem::setCol(x1);
    }
    virtual void setContentFromEditor(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(1142, (void*)this, x)) return;
	this->QComboTableItem::setContentFromEditor(x1);
    }
    virtual void setCurrentItem(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(1145, (void*)this, x)) return;
	this->QComboTableItem::setCurrentItem(x1);
    }
    virtual void setCurrentItem(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(1144, (void*)this, x)) return;
	this->QComboTableItem::setCurrentItem(x1);
    }
    virtual void setEditable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(1150, (void*)this, x)) return;
	this->QComboTableItem::setEditable(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(8472, (void*)this, x)) return;
	this->QTableItem::setEnabled(x1);
    }
    virtual void setPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(8450, (void*)this, x)) return;
	this->QTableItem::setPixmap(x1);
    }
    virtual void setReplaceable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(8459, (void*)this, x)) return;
	this->QTableItem::setReplaceable(x1);
    }
    virtual void setRow(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(8466, (void*)this, x)) return;
	this->QTableItem::setRow(x1);
    }
    virtual void setSpan(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(8463, (void*)this, x)) return;
	this->QTableItem::setSpan(x1, x2);
    }
    virtual void setStringList(const QStringList& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(1152, (void*)this, x)) return;
	this->QComboTableItem::setStringList(x1);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(8451, (void*)this, x)) return;
	this->QTableItem::setText(x1);
    }
    virtual void setWordWrap(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(8454, (void*)this, x)) return;
	this->QTableItem::setWordWrap(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8462, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::sizeHint();
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(8449, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::text();
    }
    ~x_QComboTableItem() {}
};
void xcall_QComboTableItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QComboTableItem *xself = (x_QComboTableItem*)obj;
    switch(xi) {
	case 0: x_QComboTableItem::x_0(args);	break;
	case 1: x_QComboTableItem::x_1(args);	break;
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
	case 15: delete (QComboTableItem*)xself;	break;
    }
}
