//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qlistbox.h>

class x_QListBoxItem : public QListBoxItem {
public:
    static void x_0(Smoke::Stack x) {
	// QListBoxItem(QListBox*)
	x_QListBoxItem* xret = new x_QListBoxItem((QListBox*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxItem(QListBox* x1) : QListBoxItem(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QListBoxItem()
	x_QListBoxItem* xret = new x_QListBoxItem();
	x[0].s_class = (void*)xret;
    }
    x_QListBoxItem() : QListBoxItem() {
    }
    static void x_2(Smoke::Stack x) {
	// QListBoxItem(QListBox*, QListBoxItem*)
	x_QListBoxItem* xret = new x_QListBoxItem((QListBox*)x[1].s_class,(QListBoxItem*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListBoxItem(QListBox* x1, QListBoxItem* x2) : QListBoxItem(x1, x2) {
    }
    void x_3(Smoke::Stack x) const {
	// text()
	QString xret = this->QListBoxItem::text();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// pixmap()
	const QPixmap* xret = this->QListBoxItem::pixmap();
	x[0].s_class = (void*)xret;
    }
    void x_5(Smoke::Stack x) const {
	// height(const QListBox*)
	int xret = this->QListBoxItem::height((const QListBox*)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) const {
	// width(const QListBox*)
	int xret = this->QListBoxItem::width((const QListBox*)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// isSelected()
	bool xret = this->QListBoxItem::isSelected();
	x[0].s_bool = (bool)xret;
    }
    void x_8(Smoke::Stack x) const {
	// isCurrent()
	bool xret = this->QListBoxItem::isCurrent();
	x[0].s_bool = (bool)xret;
    }
    void x_9(Smoke::Stack x) const {
	// selected()
	bool xret = this->QListBoxItem::selected();
	x[0].s_bool = (bool)xret;
    }
    void x_10(Smoke::Stack x) const {
	// current()
	bool xret = this->QListBoxItem::current();
	x[0].s_bool = (bool)xret;
    }
    void x_11(Smoke::Stack x) const {
	// listBox()
	QListBox* xret = this->QListBoxItem::listBox();
	x[0].s_class = (void*)xret;
    }
    void x_12(Smoke::Stack x) {
	// setSelectable(bool)
	this->QListBoxItem::setSelectable((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_13(Smoke::Stack x) const {
	// isSelectable()
	bool xret = this->QListBoxItem::isSelectable();
	x[0].s_bool = (bool)xret;
    }
    void x_14(Smoke::Stack x) const {
	// next()
	QListBoxItem* xret = this->QListBoxItem::next();
	x[0].s_class = (void*)xret;
    }
    void x_15(Smoke::Stack x) const {
	// prev()
	QListBoxItem* xret = this->QListBoxItem::prev();
	x[0].s_class = (void*)xret;
    }
    void x_16(Smoke::Stack x) const {
	// rtti()
	int xret = this->QListBoxItem::rtti();
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) {
	// setText(const QString&)
	this->QListBoxItem::setText(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_18(Smoke::Stack x) {
	// setCustomHighlighting(bool)
	this->QListBoxItem::setCustomHighlighting((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    virtual int height(const QListBox* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4403, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxItem::height(x1);
    }
    virtual void paint(QPainter* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	qt_Smoke->callMethod(4415, (void*)this, x, true /*pure virtual*/);
	return;
	// ABSTRACT
    }
    virtual const QPixmap* pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4402, (void*)this, x)) return (const QPixmap*)x[0].s_class;
	return this->QListBoxItem::pixmap();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4414, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxItem::rtti();
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(4416, (void*)this, x)) return;
	this->QListBoxItem::setText(x1);
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(4401, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QListBoxItem::text();
    }
    virtual int width(const QListBox* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4404, (void*)this, x)) return (int)x[0].s_int;
	return this->QListBoxItem::width(x1);
    }
    ~x_QListBoxItem() {}
};
void xcall_QListBoxItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QListBoxItem *xself = (x_QListBoxItem*)obj;
    switch(xi) {
	case 0: x_QListBoxItem::x_0(args);	break;
	case 1: x_QListBoxItem::x_1(args);	break;
	case 2: x_QListBoxItem::x_2(args);	break;
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
	case 19: delete (QListBoxItem*)xself;	break;
    }
}
