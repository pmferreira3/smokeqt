//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qrect.h>
#include <qpainter.h>
#include <qcanvas.h>

class x_QCanvasSprite : public QCanvasSprite {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QCanvasSprite::Cycle;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QCanvasSprite::Oscillate;
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasSprite(QCanvasPixmapArray*, QCanvas*)
	x_QCanvasSprite* xret = new x_QCanvasSprite((QCanvasPixmapArray*)x[1].s_class,(QCanvas*)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasSprite(QCanvasPixmapArray* x1, QCanvas* x2) : QCanvasSprite(x1, x2) {
    }
    void x_3(Smoke::Stack x) {
	// setSequence(QCanvasPixmapArray*)
	this->QCanvasSprite::setSequence((QCanvasPixmapArray*)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_4(Smoke::Stack x) {
	// move(double, double)
	this->QCanvasSprite::move((double)x[1].s_double,(double)x[2].s_double);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_5(Smoke::Stack x) {
	// move(double, double, int)
	this->QCanvasSprite::move((double)x[1].s_double,(double)x[2].s_double,(int)x[3].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_6(Smoke::Stack x) {
	// setFrame(int)
	this->QCanvasSprite::setFrame((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_7(Smoke::Stack x) {
	// setFrameAnimation(QCanvasSprite::FrameAnimationType, int, int)
	this->QCanvasSprite::setFrameAnimation(*(QCanvasSprite::FrameAnimationType *)x[1].s_class,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_8(Smoke::Stack x) {
	// setFrameAnimation(QCanvasSprite::FrameAnimationType, int)
	this->QCanvasSprite::setFrameAnimation(*(QCanvasSprite::FrameAnimationType *)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_9(Smoke::Stack x) {
	// setFrameAnimation(QCanvasSprite::FrameAnimationType)
	this->QCanvasSprite::setFrameAnimation(*(QCanvasSprite::FrameAnimationType *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_10(Smoke::Stack x) {
	// setFrameAnimation()
	this->QCanvasSprite::setFrameAnimation();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_11(Smoke::Stack x) const {
	// frame()
	int xret = this->QCanvasSprite::frame();
	x[0].s_int = (int)xret;
    }
    void x_12(Smoke::Stack x) const {
	// frameCount()
	int xret = this->QCanvasSprite::frameCount();
	x[0].s_int = (int)xret;
    }
    void x_13(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCanvasSprite::rtti();
	x[0].s_int = (int)xret;
    }
    void x_14(Smoke::Stack x) const {
	// collidesWith(const QCanvasItem*)
	bool xret = this->QCanvasSprite::collidesWith((const QCanvasItem*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_15(Smoke::Stack x) const {
	// boundingRect()
	QRect xret = this->QCanvasSprite::boundingRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_16(Smoke::Stack x) const {
	// width()
	int xret = this->QCanvasSprite::width();
	x[0].s_int = (int)xret;
    }
    void x_17(Smoke::Stack x) const {
	// height()
	int xret = this->QCanvasSprite::height();
	x[0].s_int = (int)xret;
    }
    void x_18(Smoke::Stack x) const {
	// leftEdge()
	int xret = this->QCanvasSprite::leftEdge();
	x[0].s_int = (int)xret;
    }
    void x_19(Smoke::Stack x) const {
	// topEdge()
	int xret = this->QCanvasSprite::topEdge();
	x[0].s_int = (int)xret;
    }
    void x_20(Smoke::Stack x) const {
	// rightEdge()
	int xret = this->QCanvasSprite::rightEdge();
	x[0].s_int = (int)xret;
    }
    void x_21(Smoke::Stack x) const {
	// bottomEdge()
	int xret = this->QCanvasSprite::bottomEdge();
	x[0].s_int = (int)xret;
    }
    void x_22(Smoke::Stack x) const {
	// leftEdge(int)
	int xret = this->QCanvasSprite::leftEdge((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_23(Smoke::Stack x) const {
	// topEdge(int)
	int xret = this->QCanvasSprite::topEdge((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_24(Smoke::Stack x) const {
	// rightEdge(int)
	int xret = this->QCanvasSprite::rightEdge((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_25(Smoke::Stack x) const {
	// bottomEdge(int)
	int xret = this->QCanvasSprite::bottomEdge((int)x[1].s_int);
	x[0].s_int = (int)xret;
    }
    void x_26(Smoke::Stack x) const {
	// image()
	QCanvasPixmap* xret = this->QCanvasSprite::image();
	x[0].s_class = (void*)xret;
    }
    void x_27(Smoke::Stack x) const {
	// imageAdvanced()
	QCanvasPixmap* xret = this->QCanvasSprite::imageAdvanced();
	x[0].s_class = (void*)xret;
    }
    void x_28(Smoke::Stack x) const {
	// image(int)
	QCanvasPixmap* xret = this->QCanvasSprite::image((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    void x_29(Smoke::Stack x) {
	// advance(int)
	this->QCanvasSprite::advance((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_30(Smoke::Stack x) {
	// draw(QPainter&)
	this->QCanvasSprite::draw(*(QPainter *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    virtual void advance(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(678, (void*)this, x)) return;
	this->QCanvasSprite::advance(x1);
    }
    virtual QRect boundingRect() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(664, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasSprite::boundingRect();
    }
    virtual QRect boundingRectAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(567, (void*)this, x)) {
	    QRect *xptr = (QRect *)x[0].s_class;
	    QRect xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCanvasItem::boundingRectAdvanced();
    }
    virtual bool collidesWith(const QCanvasItem* x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(663, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QCanvasSprite::collidesWith(x1);
    }
    virtual void draw(QPainter& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->callMethod(679, (void*)this, x)) return;
	this->QCanvasSprite::draw(x1);
    }
    virtual QCanvasPixmap* imageAdvanced() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(676, (void*)this, x)) return (QCanvasPixmap*)x[0].s_class;
	return this->QCanvasSprite::imageAdvanced();
    }
    virtual void move(double x1, double x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	x[3].s_int = (int)x3;
	if(qt_Smoke->callMethod(654, (void*)this, x)) return;
	this->QCanvasSprite::move(x1, x2, x3);
    }
    virtual void moveBy(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(qt_Smoke->callMethod(534, (void*)this, x)) return;
	this->QCanvasItem::moveBy(x1, x2);
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(662, (void*)this, x)) return (int)x[0].s_int;
	return this->QCanvasSprite::rtti();
    }
    virtual void setActive(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(559, (void*)this, x)) return;
	this->QCanvasItem::setActive(x1);
    }
    virtual void setAnimated(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(540, (void*)this, x)) return;
	this->QCanvasItem::setAnimated(x1);
    }
    virtual void setCanvas(QCanvas* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->callMethod(549, (void*)this, x)) return;
	this->QCanvasItem::setCanvas(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(557, (void*)this, x)) return;
	this->QCanvasItem::setEnabled(x1);
    }
    virtual void setFrameAnimation(QCanvasSprite::FrameAnimationType x1, int x2, int x3) {
	Smoke::StackItem x[4];
	x[1].s_class = (void*)&x1;
	x[2].s_int = (int)x2;
	x[3].s_int = (int)x3;
	if(qt_Smoke->callMethod(656, (void*)this, x)) return;
	this->QCanvasSprite::setFrameAnimation(x1, x2, x3);
    }
    virtual void setSelected(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(555, (void*)this, x)) return;
	this->QCanvasItem::setSelected(x1);
    }
    virtual void setVelocity(double x1, double x2) {
	Smoke::StackItem x[3];
	x[1].s_double = (double)x1;
	x[2].s_double = (double)x2;
	if(qt_Smoke->callMethod(541, (void*)this, x)) return;
	this->QCanvasItem::setVelocity(x1, x2);
    }
    virtual void setVisible(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = (bool)x1;
	if(qt_Smoke->callMethod(553, (void*)this, x)) return;
	this->QCanvasItem::setVisible(x1);
    }
    ~x_QCanvasSprite() {}
};
void xcall_QCanvasSprite(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasSprite *xself = (x_QCanvasSprite*)obj;
    switch(xi) {
	case 0: x_QCanvasSprite::x_0(args);	break;
	case 1: x_QCanvasSprite::x_1(args);	break;
	case 2: x_QCanvasSprite::x_2(args);	break;
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
	case 29: xself->x_29(args);	break;
	case 30: xself->x_30(args);	break;
	case 31: delete (QCanvasSprite*)xself;	break;
    }
}
