//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qcolor.h>
#include <qstring.h>
#include <qsize.h>
#include <qvariant.h>
#include <qpalette.h>
#include <qplatinumstyle.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qstyle.h>

class x_QPlatinumStyle : public QPlatinumStyle {
public:
    static void x_0(Smoke::Stack x) {
	// QPlatinumStyle()
	x_QPlatinumStyle* xret = new x_QPlatinumStyle();
	x[0].s_class = (void*)xret;
    }
    x_QPlatinumStyle() : QPlatinumStyle() {
    }
    void x_1(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QPlatinumStyle::drawPrimitive(*(QStyle::PrimitiveElement *)x[1].s_class,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,*(const QColorGroup *)x[4].s_class,*(QStyle::SFlags *)x[5].s_class,*(const QStyleOption *)x[6].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_2(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QPlatinumStyle::drawPrimitive(*(QStyle::PrimitiveElement *)x[1].s_class,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,*(const QColorGroup *)x[4].s_class,*(QStyle::SFlags *)x[5].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_3(Smoke::Stack x) const {
	// drawPrimitive(QStyle::PrimitiveElement, QPainter*, const QRect&, const QColorGroup&)
	this->QPlatinumStyle::drawPrimitive(*(QStyle::PrimitiveElement *)x[1].s_class,(QPainter*)x[2].s_class,*(const QRect *)x[3].s_class,*(const QColorGroup *)x[4].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_4(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, const QStyleOption&)
	this->QPlatinumStyle::drawControl(*(QStyle::ControlElement *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,*(QStyle::SFlags *)x[6].s_class,*(const QStyleOption *)x[7].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_5(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QPlatinumStyle::drawControl(*(QStyle::ControlElement *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,*(QStyle::SFlags *)x[6].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) const {
	// drawControl(QStyle::ControlElement, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QPlatinumStyle::drawControl(*(QStyle::ControlElement *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_7(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags, const QStyleOption&)
	this->QPlatinumStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,*(QStyle::SFlags *)x[6].s_class,*(QStyle::SCFlags *)x[7].s_class,*(QStyle::SCFlags *)x[8].s_class,*(const QStyleOption *)x[9].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_8(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags, QStyle::SCFlags)
	this->QPlatinumStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,*(QStyle::SFlags *)x[6].s_class,*(QStyle::SCFlags *)x[7].s_class,*(QStyle::SCFlags *)x[8].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_9(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags, QStyle::SCFlags)
	this->QPlatinumStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,*(QStyle::SFlags *)x[6].s_class,*(QStyle::SCFlags *)x[7].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_10(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&, QStyle::SFlags)
	this->QPlatinumStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class,*(QStyle::SFlags *)x[6].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_11(Smoke::Stack x) const {
	// drawComplexControl(QStyle::ComplexControl, QPainter*, const QWidget*, const QRect&, const QColorGroup&)
	this->QPlatinumStyle::drawComplexControl(*(QStyle::ComplexControl *)x[1].s_class,(QPainter*)x[2].s_class,(const QWidget*)x[3].s_class,*(const QRect *)x[4].s_class,*(const QColorGroup *)x[5].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_12(Smoke::Stack x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl, const QStyleOption&)
	QRect xret = this->QPlatinumStyle::querySubControlMetrics(*(QStyle::ComplexControl *)x[1].s_class,(const QWidget*)x[2].s_class,*(QStyle::SubControl *)x[3].s_class,*(const QStyleOption *)x[4].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_13(Smoke::Stack x) const {
	// querySubControlMetrics(QStyle::ComplexControl, const QWidget*, QStyle::SubControl)
	QRect xret = this->QPlatinumStyle::querySubControlMetrics(*(QStyle::ComplexControl *)x[1].s_class,(const QWidget*)x[2].s_class,*(QStyle::SubControl *)x[3].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_14(Smoke::Stack x) const {
	// pixelMetric(QStyle::PixelMetric, const QWidget*)
	int xret = this->QPlatinumStyle::pixelMetric(*(QStyle::PixelMetric *)x[1].s_class,(const QWidget*)x[2].s_class);
	x[0].s_int = (int)xret;
    }
    void x_15(Smoke::Stack x) const {
	// pixelMetric(QStyle::PixelMetric)
	int xret = this->QPlatinumStyle::pixelMetric(*(QStyle::PixelMetric *)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_16(Smoke::Stack x) const {
	// subRect(QStyle::SubRect, const QWidget*)
	QRect xret = this->QPlatinumStyle::subRect(*(QStyle::SubRect *)x[1].s_class,(const QWidget*)x[2].s_class);
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_17(Smoke::Stack x) const {
	// mixedColor(const QColor&, const QColor&)
	QColor xret = this->QPlatinumStyle::mixedColor(*(const QColor *)x[1].s_class,*(const QColor *)x[2].s_class);
	x[0].s_class = (void*)new QColor(xret);
    }
    void x_18(Smoke::Stack x) const {
	// drawRiffles(QPainter*, int, int, int, int, const QColorGroup&, bool)
	this->QPlatinumStyle::drawRiffles((QPainter*)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int,(int)x[4].s_int,(int)x[5].s_int,*(const QColorGroup *)x[6].s_class,(bool)x[7].s_bool);
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
    virtual void drawComplexControl(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, QStyle::SCFlags x7, QStyle::SCFlags x8, const QStyleOption& x9) const {
	Smoke::StackItem x[10];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	x[6].s_class = (void*)&x6;
	x[7].s_class = (void*)&x7;
	x[8].s_class = (void*)&x8;
	x[9].s_class = (void*)&x9;
	if(qt_Smoke->callMethod(5969, (void*)this, x)) return;
	this->QPlatinumStyle::drawComplexControl(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawComplexControlMask(QStyle::ComplexControl x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	if(qt_Smoke->callMethod(1170, (void*)this, x)) return;
	this->QCommonStyle::drawComplexControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawControl(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QColorGroup& x5, QStyle::SFlags x6, const QStyleOption& x7) const {
	Smoke::StackItem x[8];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	x[6].s_class = (void*)&x6;
	x[7].s_class = (void*)&x7;
	if(qt_Smoke->callMethod(5966, (void*)this, x)) return;
	this->QPlatinumStyle::drawControl(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual void drawControlMask(QStyle::ControlElement x1, QPainter* x2, const QWidget* x3, const QRect& x4, const QStyleOption& x5) const {
	Smoke::StackItem x[6];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	if(qt_Smoke->callMethod(1162, (void*)this, x)) return;
	this->QCommonStyle::drawControlMask(x1, x2, x3, x4, x5);
    }
    virtual void drawItem(QPainter* x1, const QRect& x2, int x3, const QColorGroup& x4, bool x5, const QPixmap* x6, const QString& x7, int x8, const QColor* x9) const {
	Smoke::StackItem x[10];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_int = (int)x3;
	x[4].s_class = (void*)&x4;
	x[5].s_bool = (bool)x5;
	x[6].s_class = (void*)x6;
	x[7].s_class = (void*)&x7;
	x[8].s_int = (int)x8;
	x[9].s_class = (void*)x9;
	if(qt_Smoke->callMethod(7944, (void*)this, x)) return;
	this->QStyle::drawItem(x1, x2, x3, x4, x5, x6, x7, x8, x9);
    }
    virtual void drawPrimitive(QStyle::PrimitiveElement x1, QPainter* x2, const QRect& x3, const QColorGroup& x4, QStyle::SFlags x5, const QStyleOption& x6) const {
	Smoke::StackItem x[7];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	x[5].s_class = (void*)&x5;
	x[6].s_class = (void*)&x6;
	if(qt_Smoke->callMethod(5963, (void*)this, x)) return;
	this->QPlatinumStyle::drawPrimitive(x1, x2, x3, x4, x5, x6);
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
    virtual QRect itemRect(QPainter* x1, const QRect& x2, int x3, bool x4, const QPixmap* x5, const QString& x6, int x7) const {
	Smoke::StackItem x[8];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_int = (int)x3;
	x[4].s_bool = (bool)x4;
	x[5].s_class = (void*)x5;
	x[6].s_class = (void*)&x6;
	x[7].s_int = (int)x7;
	if(qt_Smoke->callMethod(7942, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QStyle::itemRect(x1, x2, x3, x4, x5, x6, x7);
    }
    virtual int pixelMetric(QStyle::PixelMetric x1, const QWidget* x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(5976, (void*)this, x)) return (int)x[0].s_int;
	return this->QPlatinumStyle::pixelMetric(x1, x2);
    }
    virtual void polish(QApplication* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7938, (void*)this, x)) return;
	this->QStyle::polish(x1);
    }
    virtual void polish(QPalette& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(7940, (void*)this, x)) return;
	this->QStyle::polish(x1);
    }
    virtual void polish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7936, (void*)this, x)) return;
	this->QStyle::polish(x1);
    }
    virtual void polishPopupMenu(QPopupMenu* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(9888, (void*)this, x)) return;
	this->QWindowsStyle::polishPopupMenu(x1);
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
    virtual QStyle::SubControl querySubControl(QStyle::ComplexControl x1, const QWidget* x2, const QPoint& x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->callMethod(1174, (void*)this, x)) {
	    QStyle::SubControl *xptr = (QStyle::SubControl *)x[0].s_class;
	    QStyle::SubControl xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCommonStyle::querySubControl(x1, x2, x3, x4);
    }
    virtual QRect querySubControlMetrics(QStyle::ComplexControl x1, const QWidget* x2, QStyle::SubControl x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->callMethod(5974, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QPlatinumStyle::querySubControlMetrics(x1, x2, x3, x4);
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
    virtual QSize sizeFromContents(QStyle::ContentsType x1, const QWidget* x2, const QSize& x3, const QStyleOption& x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)&x4;
	if(qt_Smoke->callMethod(9902, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWindowsStyle::sizeFromContents(x1, x2, x3, x4);
    }
    virtual int styleHint(QStyle::StyleHint x1, const QWidget* x2, const QStyleOption& x3, QStyleHintReturn* x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	x[4].s_class = (void*)x4;
	if(qt_Smoke->callMethod(9904, (void*)this, x)) return (int)x[0].s_int;
	return this->QWindowsStyle::styleHint(x1, x2, x3, x4);
    }
    virtual QPixmap stylePixmap(QStyle::StylePixmap x1, const QWidget* x2, const QStyleOption& x3) const {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)&x3;
	if(qt_Smoke->callMethod(9907, (void*)this, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].s_class;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QWindowsStyle::stylePixmap(x1, x2, x3);
    }
    virtual QRect subRect(QStyle::SubRect x1, const QWidget* x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)&x1;
	x[2].s_class = (void*)x2;
	if(qt_Smoke->callMethod(5978, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QPlatinumStyle::subRect(x1, x2);
    }
    virtual void timerEvent(QTimerEvent* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(5465, (void*)this, x)) return;
	this->QObject::timerEvent(x1);
    }
    virtual void unPolish(QApplication* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7939, (void*)this, x)) return;
	this->QStyle::unPolish(x1);
    }
    virtual void unPolish(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(7937, (void*)this, x)) return;
	this->QStyle::unPolish(x1);
    }
    ~x_QPlatinumStyle() {}
};
void xcall_QPlatinumStyle(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPlatinumStyle *xself = (x_QPlatinumStyle*)obj;
    switch(xi) {
	case 0: x_QPlatinumStyle::x_0(args);	break;
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
	case 19: delete (QPlatinumStyle*)xself;	break;
    }
}
