//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qtable.h>

class x_QTableSelection : public QTableSelection {
public:
    static void x_0(Smoke::Stack x) {
	// QTableSelection()
	x_QTableSelection* xret = new x_QTableSelection();
	x[0].s_class = (void*)xret;
    }
    x_QTableSelection() : QTableSelection() {
    }
    void x_1(Smoke::Stack x) {
	// init(int, int)
	this->QTableSelection::init((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_2(Smoke::Stack x) {
	// expandTo(int, int)
	this->QTableSelection::expandTo((int)x[1].s_int,(int)x[2].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_3(Smoke::Stack x) const {
	// operator==(const QTableSelection&)
	bool xret = this->QTableSelection::operator==(*(const QTableSelection *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_4(Smoke::Stack x) const {
	// operator!=(const QTableSelection&)
	bool xret = this->QTableSelection::operator!=(*(const QTableSelection *)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_5(Smoke::Stack x) const {
	// topRow()
	int xret = this->QTableSelection::topRow();
	x[0].s_int = (int)xret;
    }
    void x_6(Smoke::Stack x) const {
	// bottomRow()
	int xret = this->QTableSelection::bottomRow();
	x[0].s_int = (int)xret;
    }
    void x_7(Smoke::Stack x) const {
	// leftCol()
	int xret = this->QTableSelection::leftCol();
	x[0].s_int = (int)xret;
    }
    void x_8(Smoke::Stack x) const {
	// rightCol()
	int xret = this->QTableSelection::rightCol();
	x[0].s_int = (int)xret;
    }
    void x_9(Smoke::Stack x) const {
	// anchorRow()
	int xret = this->QTableSelection::anchorRow();
	x[0].s_int = (int)xret;
    }
    void x_10(Smoke::Stack x) const {
	// anchorCol()
	int xret = this->QTableSelection::anchorCol();
	x[0].s_int = (int)xret;
    }
    void x_11(Smoke::Stack x) const {
	// isActive()
	bool xret = this->QTableSelection::isActive();
	x[0].s_bool = (bool)xret;
    }
    ~x_QTableSelection() {}
};
void xcall_QTableSelection(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTableSelection *xself = (x_QTableSelection*)obj;
    switch(xi) {
	case 0: x_QTableSelection::x_0(args);	break;
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
	case 12: delete (QTableSelection*)xself;	break;
    }
}
