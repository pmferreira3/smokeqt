//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qlistview.h>
#include <qpalette.h>
#include <qfontmetrics.h>
#include <qstring.h>
#include <qrect.h>
#include <qpixmap.h>

class x_QListViewItem : public QListViewItem {
public:
    static void x_0(Smoke::Stack x) {
	// QListViewItem(QListView*)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1) : QListViewItem(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QListViewItem(QListViewItem*)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1) : QListViewItem(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2) : QListViewItem(x1, x2) {
    }
    static void x_3(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2) : QListViewItem(x1, x2) {
    }
    static void x_4(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class,*(QString *)x[9].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8, QString x9) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8, x9) {
    }
    static void x_5(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8) {
    }
    static void x_6(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3, QString x4, QString x5, QString x6, QString x7) : QListViewItem(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_7(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3, QString x4, QString x5, QString x6) : QListViewItem(x1, x2, x3, x4, x5, x6) {
    }
    static void x_8(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3, QString x4, QString x5) : QListViewItem(x1, x2, x3, x4, x5) {
    }
    static void x_9(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3, QString x4) : QListViewItem(x1, x2, x3, x4) {
    }
    static void x_10(Smoke::Stack x) {
	// QListViewItem(QListView*, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2, QString x3) : QListViewItem(x1, x2, x3) {
    }
    static void x_11(Smoke::Stack x) {
	// QListViewItem(QListView*, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,*(QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QString x2) : QListViewItem(x1, x2) {
    }
    static void x_12(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class,*(QString *)x[9].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8, QString x9) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8, x9) {
    }
    static void x_13(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8) {
    }
    static void x_14(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3, QString x4, QString x5, QString x6, QString x7) : QListViewItem(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_15(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3, QString x4, QString x5, QString x6) : QListViewItem(x1, x2, x3, x4, x5, x6) {
    }
    static void x_16(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3, QString x4, QString x5) : QListViewItem(x1, x2, x3, x4, x5) {
    }
    static void x_17(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3, QString x4) : QListViewItem(x1, x2, x3, x4) {
    }
    static void x_18(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class,*(QString *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2, QString x3) : QListViewItem(x1, x2, x3) {
    }
    static void x_19(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,*(QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QString x2) : QListViewItem(x1, x2) {
    }
    static void x_20(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class,*(QString *)x[9].s_class,*(QString *)x[10].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8, QString x9, QString x10) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10) {
    }
    static void x_21(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class,*(QString *)x[9].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8, QString x9) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8, x9) {
    }
    static void x_22(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8) {
    }
    static void x_23(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7) : QListViewItem(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_24(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6) : QListViewItem(x1, x2, x3, x4, x5, x6) {
    }
    static void x_25(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4, QString x5) : QListViewItem(x1, x2, x3, x4, x5) {
    }
    static void x_26(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3, QString x4) : QListViewItem(x1, x2, x3, x4) {
    }
    static void x_27(Smoke::Stack x) {
	// QListViewItem(QListView*, QListViewItem*, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListView*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListView* x1, QListViewItem* x2, QString x3) : QListViewItem(x1, x2, x3) {
    }
    static void x_28(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class,*(QString *)x[9].s_class,*(QString *)x[10].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8, QString x9, QString x10) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10) {
    }
    static void x_29(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class,*(QString *)x[9].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8, QString x9) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8, x9) {
    }
    static void x_30(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class,*(QString *)x[8].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7, QString x8) : QListViewItem(x1, x2, x3, x4, x5, x6, x7, x8) {
    }
    static void x_31(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class,*(QString *)x[7].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6, QString x7) : QListViewItem(x1, x2, x3, x4, x5, x6, x7) {
    }
    static void x_32(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class,*(QString *)x[6].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4, QString x5, QString x6) : QListViewItem(x1, x2, x3, x4, x5, x6) {
    }
    static void x_33(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class,*(QString *)x[5].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4, QString x5) : QListViewItem(x1, x2, x3, x4, x5) {
    }
    static void x_34(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class,*(QString *)x[4].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3, QString x4) : QListViewItem(x1, x2, x3, x4) {
    }
    static void x_35(Smoke::Stack x) {
	// QListViewItem(QListViewItem*, QListViewItem*, QString)
	x_QListViewItem* xret = new x_QListViewItem((QListViewItem*)x[1].s_class,(QListViewItem*)x[2].s_class,*(QString *)x[3].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QListViewItem(QListViewItem* x1, QListViewItem* x2, QString x3) : QListViewItem(x1, x2, x3) {
    }
    void x_36(Smoke::Stack x) {
	// insertItem(QListViewItem*)
	this->QListViewItem::insertItem((QListViewItem*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_37(Smoke::Stack x) {
	// takeItem(QListViewItem*)
	this->QListViewItem::takeItem((QListViewItem*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_38(Smoke::Stack x) {
	// removeItem(QListViewItem*)
	this->QListViewItem::removeItem((QListViewItem*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_39(Smoke::Stack x) const {
	// height()
	int xret = this->QListViewItem::height();
	x[0].s_int = (int)xret;
    }
    void x_40(Smoke::Stack x) {
	// invalidateHeight()
	this->QListViewItem::invalidateHeight();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_41(Smoke::Stack x) const {
	// totalHeight()
	int xret = this->QListViewItem::totalHeight();
	x[0].s_int = (int)xret;
    }
    void x_42(Smoke::Stack x) const {
	// width(const QFontMetrics&, const QListView*, int)
	int xret = this->QListViewItem::width(*(const QFontMetrics *)x[1].s_class,(const QListView*)x[2].s_class,(int)x[3].s_int);
	x[0].s_int = (int)xret;
    }
    void x_43(Smoke::Stack x) const {
	// widthChanged(int)
	this->QListViewItem::widthChanged((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_44(Smoke::Stack x) const {
	// widthChanged()
	this->QListViewItem::widthChanged();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_45(Smoke::Stack x) const {
	// depth()
	int xret = this->QListViewItem::depth();
	x[0].s_int = (int)xret;
    }
    void x_46(Smoke::Stack x) {
	// setText(int, const QString&)
	this->QListViewItem::setText((int)x[1].s_int,*(const QString *)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_47(Smoke::Stack x) const {
	// text(int)
	QString xret = this->QListViewItem::text((int)x[1].s_int);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_48(Smoke::Stack x) {
	// setPixmap(int, const QPixmap&)
	this->QListViewItem::setPixmap((int)x[1].s_int,*(const QPixmap *)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_49(Smoke::Stack x) const {
	// pixmap(int)
	const QPixmap* xret = this->QListViewItem::pixmap((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_50(Smoke::Stack x) const {
	// key(int, bool)
	QString xret = this->QListViewItem::key((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_class = (void*)new QString(xret);
    }
    void x_51(Smoke::Stack x) const {
	// compare(QListViewItem*, int, bool)
	int xret = this->QListViewItem::compare((QListViewItem*)x[1].s_class,(int)x[2].s_int,(bool)x[3].s_bool);
	x[0].s_int = (int)xret;
    }
    void x_52(Smoke::Stack x) {
	// sortChildItems(int, bool)
	this->QListViewItem::sortChildItems((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_53(Smoke::Stack x) const {
	// childCount()
	int xret = this->QListViewItem::childCount();
	x[0].s_int = (int)xret;
    }
    void x_54(Smoke::Stack x) const {
	// isOpen()
	bool xret = this->QListViewItem::isOpen();
	x[0].s_bool = (bool)xret;
    }
    void x_55(Smoke::Stack x) {
	// setOpen(bool)
	this->QListViewItem::setOpen((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_56(Smoke::Stack x) {
	// setup()
	this->QListViewItem::setup();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_57(Smoke::Stack x) {
	// setSelected(bool)
	this->QListViewItem::setSelected((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_58(Smoke::Stack x) const {
	// isSelected()
	bool xret = this->QListViewItem::isSelected();
	x[0].s_bool = (bool)xret;
    }
    void x_59(Smoke::Stack x) {
	// paintCell(QPainter*, const QColorGroup&, int, int, int)
	this->QListViewItem::paintCell((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_60(Smoke::Stack x) {
	// paintBranches(QPainter*, const QColorGroup&, int, int, int)
	this->QListViewItem::paintBranches((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_61(Smoke::Stack x) {
	// paintFocus(QPainter*, const QColorGroup&, const QRect&)
	this->QListViewItem::paintFocus((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,*(const QRect *)x[3].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_62(Smoke::Stack x) const {
	// firstChild()
	QListViewItem* xret = this->QListViewItem::firstChild();
	x[0].s_class = (void*)xret;
    }
    void x_63(Smoke::Stack x) const {
	// nextSibling()
	QListViewItem* xret = this->QListViewItem::nextSibling();
	x[0].s_class = (void*)xret;
    }
    void x_64(Smoke::Stack x) const {
	// parent()
	QListViewItem* xret = this->QListViewItem::parent();
	x[0].s_class = (void*)xret;
    }
    void x_65(Smoke::Stack x) {
	// itemAbove()
	QListViewItem* xret = this->QListViewItem::itemAbove();
	x[0].s_class = (void*)xret;
    }
    void x_66(Smoke::Stack x) {
	// itemBelow()
	QListViewItem* xret = this->QListViewItem::itemBelow();
	x[0].s_class = (void*)xret;
    }
    void x_67(Smoke::Stack x) const {
	// itemPos()
	int xret = this->QListViewItem::itemPos();
	x[0].s_int = (int)xret;
    }
    void x_68(Smoke::Stack x) const {
	// listView()
	QListView* xret = this->QListViewItem::listView();
	x[0].s_class = (void*)xret;
    }
    void x_69(Smoke::Stack x) {
	// setSelectable(bool)
	this->QListViewItem::setSelectable((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_70(Smoke::Stack x) const {
	// isSelectable()
	bool xret = this->QListViewItem::isSelectable();
	x[0].s_bool = (bool)xret;
    }
    void x_71(Smoke::Stack x) {
	// setExpandable(bool)
	this->QListViewItem::setExpandable((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_72(Smoke::Stack x) const {
	// isExpandable()
	bool xret = this->QListViewItem::isExpandable();
	x[0].s_bool = (bool)xret;
    }
    void x_73(Smoke::Stack x) const {
	// repaint()
	this->QListViewItem::repaint();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_74(Smoke::Stack x) {
	// sort()
	this->QListViewItem::sort();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_75(Smoke::Stack x) {
	// moveItem(QListViewItem*)
	this->QListViewItem::moveItem((QListViewItem*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_76(Smoke::Stack x) {
	// setDragEnabled(bool)
	this->QListViewItem::setDragEnabled((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_77(Smoke::Stack x) {
	// setDropEnabled(bool)
	this->QListViewItem::setDropEnabled((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_78(Smoke::Stack x) const {
	// dragEnabled()
	bool xret = this->QListViewItem::dragEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_79(Smoke::Stack x) const {
	// dropEnabled()
	bool xret = this->QListViewItem::dropEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_80(Smoke::Stack x) const {
	// acceptDrop(const QMimeSource*)
	bool xret = this->QListViewItem::acceptDrop((const QMimeSource*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_81(Smoke::Stack x) {
	// setVisible(bool)
	this->QListViewItem::setVisible((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_82(Smoke::Stack x) const {
	// isVisible()
	bool xret = this->QListViewItem::isVisible();
	x[0].s_bool = (bool)xret;
    }
    void x_83(Smoke::Stack x) {
	// setRenameEnabled(int, bool)
	this->QListViewItem::setRenameEnabled((int)x[1].s_int,(bool)x[2].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_84(Smoke::Stack x) const {
	// renameEnabled(int)
	bool xret = this->QListViewItem::renameEnabled((int)x[1].s_int);
	x[0].s_bool = (bool)xret;
    }
    void x_85(Smoke::Stack x) {
	// startRename(int)
	this->QListViewItem::startRename((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_86(Smoke::Stack x) {
	// setEnabled(bool)
	this->QListViewItem::setEnabled((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_87(Smoke::Stack x) const {
	// isEnabled()
	bool xret = this->QListViewItem::isEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_88(Smoke::Stack x) const {
	// rtti()
	int xret = this->QListViewItem::rtti();
	x[0].s_int = (int)xret;
    }
    void x_89(Smoke::Stack x) {
	// setMultiLinesEnabled(bool)
	this->QListViewItem::setMultiLinesEnabled((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_90(Smoke::Stack x) const {
	// multiLinesEnabled()
	bool xret = this->QListViewItem::multiLinesEnabled();
	x[0].s_bool = (bool)xret;
    }
    void x_91(Smoke::Stack x) const {
	// enforceSortOrder()
	this->QListViewItem::enforceSortOrder();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_92(Smoke::Stack x) {
	// setHeight(int)
	this->QListViewItem::setHeight((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_93(Smoke::Stack x) {
	// activate()
	this->QListViewItem::activate();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_94(Smoke::Stack x) {
	// activatedPos(QPoint&)
	bool xret = this->QListViewItem::activatedPos(*(QPoint *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_95(Smoke::Stack x) {
	// dropped(QDropEvent*)
	this->QListViewItem::dropped((QDropEvent*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_96(Smoke::Stack x) {
	// dragEntered()
	this->QListViewItem::dragEntered();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_97(Smoke::Stack x) {
	// dragLeft()
	this->QListViewItem::dragLeft();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_98(Smoke::Stack x) {
	// okRename(int)
	this->QListViewItem::okRename((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_99(Smoke::Stack x) {
	// cancelRename(int)
	this->QListViewItem::cancelRename((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_100(Smoke::Stack x) {
	// ignoreDoubleClick()
	this->QListViewItem::ignoreDoubleClick();
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
	if(qt_Smoke->callMethod(4667, (void*)this, x)) return;
	this->QListViewItem::activate();
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
	if(qt_Smoke->callMethod(4633, (void*)this, x)) return;
	this->QListViewItem::paintCell(x1, x2, x3, x4, x5);
    }
    virtual void paintFocus(QPainter* x1, const QColorGroup& x2, const QRect& x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->callMethod(4635, (void*)this, x)) return;
	this->QListViewItem::paintFocus(x1, x2, x3);
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
	if(qt_Smoke->callMethod(4662, (void*)this, x)) return (int)x[0].s_int;
	return this->QListViewItem::rtti();
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
	if(qt_Smoke->callMethod(4630, (void*)this, x)) return;
	this->QListViewItem::setup();
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
    virtual void takeItem(QListViewItem* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(4611, (void*)this, x)) return;
	this->QListViewItem::takeItem(x1);
    }
    virtual QString text(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(4621, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QListViewItem::text(x1);
    }
    virtual int width(const QFontMetrics& x1, const QListView* x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_int = (int)x3;
	if(qt_Smoke->callMethod(4616, (void*)this, x)) return (int)x[0].s_int;
	return this->QListViewItem::width(x1, x2, x3);
    }
    ~x_QListViewItem() {}
};
void xcall_QListViewItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QListViewItem *xself = (x_QListViewItem*)obj;
    switch(xi) {
	case 0: x_QListViewItem::x_0(args);	break;
	case 1: x_QListViewItem::x_1(args);	break;
	case 2: x_QListViewItem::x_2(args);	break;
	case 3: x_QListViewItem::x_3(args);	break;
	case 4: x_QListViewItem::x_4(args);	break;
	case 5: x_QListViewItem::x_5(args);	break;
	case 6: x_QListViewItem::x_6(args);	break;
	case 7: x_QListViewItem::x_7(args);	break;
	case 8: x_QListViewItem::x_8(args);	break;
	case 9: x_QListViewItem::x_9(args);	break;
	case 10: x_QListViewItem::x_10(args);	break;
	case 11: x_QListViewItem::x_11(args);	break;
	case 12: x_QListViewItem::x_12(args);	break;
	case 13: x_QListViewItem::x_13(args);	break;
	case 14: x_QListViewItem::x_14(args);	break;
	case 15: x_QListViewItem::x_15(args);	break;
	case 16: x_QListViewItem::x_16(args);	break;
	case 17: x_QListViewItem::x_17(args);	break;
	case 18: x_QListViewItem::x_18(args);	break;
	case 19: x_QListViewItem::x_19(args);	break;
	case 20: x_QListViewItem::x_20(args);	break;
	case 21: x_QListViewItem::x_21(args);	break;
	case 22: x_QListViewItem::x_22(args);	break;
	case 23: x_QListViewItem::x_23(args);	break;
	case 24: x_QListViewItem::x_24(args);	break;
	case 25: x_QListViewItem::x_25(args);	break;
	case 26: x_QListViewItem::x_26(args);	break;
	case 27: x_QListViewItem::x_27(args);	break;
	case 28: x_QListViewItem::x_28(args);	break;
	case 29: x_QListViewItem::x_29(args);	break;
	case 30: x_QListViewItem::x_30(args);	break;
	case 31: x_QListViewItem::x_31(args);	break;
	case 32: x_QListViewItem::x_32(args);	break;
	case 33: x_QListViewItem::x_33(args);	break;
	case 34: x_QListViewItem::x_34(args);	break;
	case 35: x_QListViewItem::x_35(args);	break;
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
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: xself->x_78(args);	break;
	case 79: xself->x_79(args);	break;
	case 80: xself->x_80(args);	break;
	case 81: xself->x_81(args);	break;
	case 82: xself->x_82(args);	break;
	case 83: xself->x_83(args);	break;
	case 84: xself->x_84(args);	break;
	case 85: xself->x_85(args);	break;
	case 86: xself->x_86(args);	break;
	case 87: xself->x_87(args);	break;
	case 88: xself->x_88(args);	break;
	case 89: xself->x_89(args);	break;
	case 90: xself->x_90(args);	break;
	case 91: xself->x_91(args);	break;
	case 92: xself->x_92(args);	break;
	case 93: xself->x_93(args);	break;
	case 94: xself->x_94(args);	break;
	case 95: xself->x_95(args);	break;
	case 96: xself->x_96(args);	break;
	case 97: xself->x_97(args);	break;
	case 98: xself->x_98(args);	break;
	case 99: xself->x_99(args);	break;
	case 100: xself->x_100(args);	break;
	case 101: delete (QListViewItem*)xself;	break;
    }
}
