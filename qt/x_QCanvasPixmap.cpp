//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpoint.h>
#include <qimage.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qcanvas.h>

class x_QCanvasPixmap : public QCanvasPixmap {
public:
    static void x_0(Smoke::Stack x) {
	// QCanvasPixmap(const QString&)
	x_QCanvasPixmap* xret = new x_QCanvasPixmap(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmap(const QString& x1) : QCanvasPixmap(x1) {
    }
    static void x_1(Smoke::Stack x) {
	// QCanvasPixmap(const QImage&)
	x_QCanvasPixmap* xret = new x_QCanvasPixmap(*(const QImage *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmap(const QImage& x1) : QCanvasPixmap(x1) {
    }
    static void x_2(Smoke::Stack x) {
	// QCanvasPixmap(const QPixmap&, const QPoint&)
	x_QCanvasPixmap* xret = new x_QCanvasPixmap(*(const QPixmap *)x[1].s_class,*(const QPoint *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCanvasPixmap(const QPixmap& x1, const QPoint& x2) : QCanvasPixmap(x1, x2) {
    }
    void x_3(Smoke::Stack x) const {
	// offsetX()
	int xret = this->QCanvasPixmap::offsetX();
	x[0].s_int = (int)xret;
    }
    void x_4(Smoke::Stack x) const {
	// offsetY()
	int xret = this->QCanvasPixmap::offsetY();
	x[0].s_int = (int)xret;
    }
    void x_5(Smoke::Stack x) {
	// setOffset(int, int)
	this->QCanvasPixmap::setOffset((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    virtual bool cmd(int x1, QPainter* x2, QPDevCmdParam* x3) {
	Smoke::StackItem x[4];
	x[1].s_int = (int)x1;
	x[2].s_class = (void*)x2;
	x[3].s_class = (void*)x3;
	if(qt_Smoke->callMethod(5566, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QPaintDevice::cmd(x1, x2, x3);
    }
    virtual void detach() {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5934, (void*)this, x)) return;
	this->QPixmap::detach();
    }
    virtual int fontInf(QFont* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	if(qt_Smoke->callMethod(5571, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontInf(x1, x2);
    }
    virtual int fontMet(QFont* x1, int x2, const char* x3, int x4) const {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_int = (int)x2;
	x[3].s_class = (void*)x3;
	x[4].s_int = (int)x4;
	if(qt_Smoke->callMethod(5568, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::fontMet(x1, x2, x3, x4);
    }
    virtual int metric(int x1) const {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(5952, (void*)this, x)) return (int)x[0].s_int;
	return this->QPixmap::metric(x1);
    }
    virtual int resolution() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->callMethod(5564, (void*)this, x)) return (int)x[0].s_int;
	return this->QPaintDevice::resolution();
    }
    virtual void setResolution(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = (int)x1;
	if(qt_Smoke->callMethod(5563, (void*)this, x)) return;
	this->QPaintDevice::setResolution(x1);
    }
    ~x_QCanvasPixmap() {}
};
void xcall_QCanvasPixmap(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCanvasPixmap *xself = (x_QCanvasPixmap*)obj;
    switch(xi) {
	case 0: x_QCanvasPixmap::x_0(args);	break;
	case 1: x_QCanvasPixmap::x_1(args);	break;
	case 2: x_QCanvasPixmap::x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: delete (QCanvasPixmap*)xself;	break;
    }
}
