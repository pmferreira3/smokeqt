//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qlistview.h>
#include <qfontmetrics.h>
#include <qpalette.h>
#include <qstring.h>
#include <qrect.h>
#include <qpixmap.h>

class x_QCheckListItem : public QCheckListItem {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QCheckListItem::RadioButton;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QCheckListItem::CheckBox;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QCheckListItem::Controller;
    }
    static void x_3(Smoke::Stack x) {
	// QCheckListItem(QCheckListItem*, const QString&, QCheckListItem::Type)
	x_QCheckListItem* xret = new x_QCheckListItem((QCheckListItem*)x[1].s_class,*(const QString *)x[2].s_class,*(QCheckListItem::Type *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QCheckListItem* x1, const QString& x2, QCheckListItem::Type x3) : QCheckListItem(x1, x2, x3) {
    }
    static void x_4(Smoke::Stack x) {
	// QCheckListItem(QCheckListItem*, const QString&)
	x_QCheckListItem* xret = new x_QCheckListItem((QCheckListItem*)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QCheckListItem* x1, const QString& x2) : QCheckListItem(x1, x2) {
    }
    static void x_5(Smoke::Stack x) {
	// QCheckListItem(QListViewItem*, const QString&, QCheckListItem::Type)
	x_QCheckListItem* xret = new x_QCheckListItem((QListViewItem*)x[1].s_class,*(const QString *)x[2].s_class,*(QCheckListItem::Type *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QListViewItem* x1, const QString& x2, QCheckListItem::Type x3) : QCheckListItem(x1, x2, x3) {
    }
    static void x_6(Smoke::Stack x) {
	// QCheckListItem(QListViewItem*, const QString&)
	x_QCheckListItem* xret = new x_QCheckListItem((QListViewItem*)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QListViewItem* x1, const QString& x2) : QCheckListItem(x1, x2) {
    }
    static void x_7(Smoke::Stack x) {
	// QCheckListItem(QListView*, const QString&, QCheckListItem::Type)
	x_QCheckListItem* xret = new x_QCheckListItem((QListView*)x[1].s_class,*(const QString *)x[2].s_class,*(QCheckListItem::Type *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QListView* x1, const QString& x2, QCheckListItem::Type x3) : QCheckListItem(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QCheckListItem(QListView*, const QString&)
	x_QCheckListItem* xret = new x_QCheckListItem((QListView*)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QListView* x1, const QString& x2) : QCheckListItem(x1, x2) {
    }
    static void x_9(Smoke::Stack x) {
	// QCheckListItem(QListViewItem*, const QString&, const QPixmap&)
	x_QCheckListItem* xret = new x_QCheckListItem((QListViewItem*)x[1].s_class,*(const QString *)x[2].s_class,*(const QPixmap *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QListViewItem* x1, const QString& x2, const QPixmap& x3) : QCheckListItem(x1, x2, x3) {
    }
    static void x_10(Smoke::Stack x) {
	// QCheckListItem(QListView*, const QString&, const QPixmap&)
	x_QCheckListItem* xret = new x_QCheckListItem((QListView*)x[1].s_class,*(const QString *)x[2].s_class,*(const QPixmap *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckListItem(QListView* x1, const QString& x2, const QPixmap& x3) : QCheckListItem(x1, x2, x3) {
    }
    void x_11(Smoke::Stack x) {
	// paintCell(QPainter*, const QColorGroup&, int, int, int)
	this->QCheckListItem::paintCell((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_12(Smoke::Stack x) {
	// paintFocus(QPainter*, const QColorGroup&, const QRect&)
	this->QCheckListItem::paintFocus((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,*(const QRect *)x[3].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_13(Smoke::Stack x) const {
	// width(const QFontMetrics&, const QListView*, int)
	int xret = this->QCheckListItem::width(*(const QFontMetrics *)x[1].s_class,(const QListView*)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = (int)xret;
    }
    void x_14(Smoke::Stack x) {
	// setup()
	this->QCheckListItem::setup();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_15(Smoke::Stack x) {
	// setOn(bool)
	this->QCheckListItem::setOn((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_16(Smoke::Stack x) const {
	// isOn()
	bool xret = this->QCheckListItem::isOn();
	x[0].s_bool = (bool)xret;
    }
    void x_17(Smoke::Stack x) const {
	// type()
	QCheckListItem::Type xret = this->QCheckListItem::type();
	x[0].s_class = (void*)new QCheckListItem::Type(xret);
    }
    void x_18(Smoke::Stack x) const {
	// text()
	QString xret = this->QCheckListItem::text();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_19(Smoke::Stack x) const {
	// text(int)
	QString xret = this->QCheckListItem::text((int)x[1].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_20(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCheckListItem::rtti();
	x[0].s_int = (int)xret;
    }
    void x_21(Smoke::Stack x) {
	// activate()
	this->QCheckListItem::activate();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_22(Smoke::Stack x) {
	// turnOffChild()
	this->QCheckListItem::turnOffChild();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_23(Smoke::Stack x) {
	// stateChange(bool)
	this->QCheckListItem::stateChange((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    virtual bool acceptDrop(const QMimeSource* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4654, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QListViewItem::acceptDrop(x1);
    }
    virtual void activate() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(914, (void*)this, x)) return;
	this->QCheckListItem::activate();
    }
    virtual void cancelRename(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4673, (void*)this, x)) return;
	this->QListViewItem::cancelRename(x1);
    }
    virtual int compare(QListViewItem* x1, int x2, bool x3) const {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_bool = (bool)x3;
	if(qt_Smoke->callMethod(4625, (void*)this, x)) return (int)x[0].s_int;
	return this->QListViewItem::compare(x1, x2, x3);
    }
    virtual void dragEntered() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4670, (void*)this, x)) return;
	this->QListViewItem::dragEntered();
    }
    virtual void dragLeft() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4671, (void*)this, x)) return;
	this->QListViewItem::dragLeft();
    }
    virtual void dropped(QDropEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4669, (void*)this, x)) return;
	this->QListViewItem::dropped(x1);
    }
    virtual void enforceSortOrder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4665, (void*)this, x)) return;
	this->QListViewItem::enforceSortOrder();
    }
    virtual void insertItem(QListViewItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4610, (void*)this, x)) return;
	this->QListViewItem::insertItem(x1);
    }
    virtual void invalidateHeight() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4614, (void*)this, x)) return;
	this->QListViewItem::invalidateHeight();
    }
    virtual QString key(int x1, bool x2) const {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(4624, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QListViewItem::key(x1, x2);
    }
    virtual void okRename(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4672, (void*)this, x)) return;
	this->QListViewItem::okRename(x1);
    }
    virtual void paintBranches(QPainter* x1, const QColorGroup& x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	if(qt_Smoke->callMethod(4634, (void*)this, x)) return;
	this->QListViewItem::paintBranches(x1, x2, x3, x4, x5);
    }
    virtual void paintCell(QPainter* x1, const QColorGroup& x2, int x3, int x4, int x5) {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_int = (int)x3;
	x[4].s_int = (int)x4;
	x[5].s_int = (int)x5;
	if(qt_Smoke->callMethod(904, (void*)this, x)) return;
	this->QCheckListItem::paintCell(x1, x2, x3, x4, x5);
    }
    virtual void paintFocus(QPainter* x1, const QColorGroup& x2, const QRect& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->callMethod(905, (void*)this, x)) return;
	this->QCheckListItem::paintFocus(x1, x2, x3);
    }
    virtual const QPixmap* pixmap(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4623, (void*)this, x)) return (const QPixmap*)x[0].s_class;
	return this->QListViewItem::pixmap(x1);
    }
    virtual void removeItem(QListViewItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4612, (void*)this, x)) return;
	this->QListViewItem::removeItem(x1);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(913, (void*)this, x)) return (int)x[0].s_int;
	return this->QCheckListItem::rtti();
    }
    virtual void setDragEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4650, (void*)this, x)) return;
	this->QListViewItem::setDragEnabled(x1);
    }
    virtual void setDropEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4651, (void*)this, x)) return;
	this->QListViewItem::setDropEnabled(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4660, (void*)this, x)) return;
	this->QListViewItem::setEnabled(x1);
    }
    virtual void setExpandable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4645, (void*)this, x)) return;
	this->QListViewItem::setExpandable(x1);
    }
    virtual void setHeight(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4666, (void*)this, x)) return;
	this->QListViewItem::setHeight(x1);
    }
    virtual void setMultiLinesEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4663, (void*)this, x)) return;
	this->QListViewItem::setMultiLinesEnabled(x1);
    }
    virtual void setOn(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(908, (void*)this, x)) return;
	this->QCheckListItem::setOn(x1);
    }
    virtual void setOpen(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4629, (void*)this, x)) return;
	this->QListViewItem::setOpen(x1);
    }
    virtual void setPixmap(int x1, const QPixmap& x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(4622, (void*)this, x)) return;
	this->QListViewItem::setPixmap(x1, x2);
    }
    virtual void setRenameEnabled(int x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(4657, (void*)this, x)) return;
	this->QListViewItem::setRenameEnabled(x1, x2);
    }
    virtual void setSelectable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4643, (void*)this, x)) return;
	this->QListViewItem::setSelectable(x1);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(4631, (void*)this, x)) return;
	this->QListViewItem::setSelected(x1);
    }
    virtual void setText(int x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)&x2;
	if(qt_Smoke->callMethod(4620, (void*)this, x)) return;
	this->QListViewItem::setText(x1, x2);
    }
    virtual void setup() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(907, (void*)this, x)) return;
	this->QCheckListItem::setup();
    }
    virtual void sort() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4648, (void*)this, x)) return;
	this->QListViewItem::sort();
    }
    virtual void sortChildItems(int x1, bool x2) {
	Smoke::StackItem x[3];
	x[1].s_int = (int)x1;
	x[2].s_bool = (bool)x2;
	if(qt_Smoke->callMethod(4626, (void*)this, x)) return;
	this->QListViewItem::sortChildItems(x1, x2);
    }
    virtual void startRename(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4659, (void*)this, x)) return;
	this->QListViewItem::startRename(x1);
    }
    virtual void stateChange(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(916, (void*)this, x)) return;
	this->QCheckListItem::stateChange(x1);
    }
    virtual void takeItem(QListViewItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4611, (void*)this, x)) return;
	this->QListViewItem::takeItem(x1);
    }
    virtual QString text(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(912, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCheckListItem::text(x1);
    }
    virtual int width(const QFontMetrics& x1, const QListView* x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_int = (int)x3;
	if(qt_Smoke->callMethod(906, (void*)this, x)) return (int)x[0].s_int;
	return this->QCheckListItem::width(x1, x2, x3);
    }
    ~x_QCheckListItem() {}
};
void xcall_QCheckListItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCheckListItem *xself = (x_QCheckListItem*)obj;
    switch(xi) {
	case 0: x_QCheckListItem::x_0(args);	break;
	case 1: x_QCheckListItem::x_1(args);	break;
	case 2: x_QCheckListItem::x_2(args);	break;
	case 3: x_QCheckListItem::x_3(args);	break;
	case 4: x_QCheckListItem::x_4(args);	break;
	case 5: x_QCheckListItem::x_5(args);	break;
	case 6: x_QCheckListItem::x_6(args);	break;
	case 7: x_QCheckListItem::x_7(args);	break;
	case 8: x_QCheckListItem::x_8(args);	break;
	case 9: x_QCheckListItem::x_9(args);	break;
	case 10: x_QCheckListItem::x_10(args);	break;
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
	case 24: delete (QCheckListItem*)xself;	break;
    }
}
