//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcolor.h>
#include <qstring.h>
#include <qstylesheet.h>

class x_QStyleSheetItem : public QStyleSheetItem {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::Undefined;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::DisplayBlock;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::DisplayInline;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::DisplayListItem;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::DisplayNone;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::VAlignBaseline;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::VAlignSub;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::VAlignSuper;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::WhiteSpaceNormal;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::WhiteSpacePre;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::WhiteSpaceNoWrap;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginLeft;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginRight;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginTop;
    }
    static void x_14(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginBottom;
    }
    static void x_15(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginFirstLine;
    }
    static void x_16(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginAll;
    }
    static void x_17(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginVertical;
    }
    static void x_18(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::MarginHorizontal;
    }
    static void x_19(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::ListDisc;
    }
    static void x_20(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::ListCircle;
    }
    static void x_21(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::ListSquare;
    }
    static void x_22(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::ListDecimal;
    }
    static void x_23(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::ListLowerAlpha;
    }
    static void x_24(Smoke::Stack x) {
	x[0].s_enum = (long)QStyleSheetItem::ListUpperAlpha;
    }
    static void x_25(Smoke::Stack x) {
	// QStyleSheetItem(QStyleSheet*, const QString&)
	x_QStyleSheetItem* xret = new x_QStyleSheetItem((QStyleSheet*)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleSheetItem(QStyleSheet* x1, const QString& x2) : QStyleSheetItem(x1, x2) {
    }
    static void x_26(Smoke::Stack x) {
	// QStyleSheetItem(const QStyleSheetItem&)
	x_QStyleSheetItem* xret = new x_QStyleSheetItem(*(const QStyleSheetItem *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QStyleSheetItem(const QStyleSheetItem& x1) : QStyleSheetItem(x1) {
    }
    void x_27(Smoke::Stack x) const {
	// name()
	QString xret = this->QStyleSheetItem::name();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_28(Smoke::Stack x) {
	// styleSheet()
	QStyleSheet* xret = this->QStyleSheetItem::styleSheet();
	x[0].s_class = (void*)xret;
    }
    void x_29(Smoke::Stack x) const {
	// styleSheet()
	const QStyleSheet* xret = this->QStyleSheetItem::styleSheet();
	x[0].s_class = (void*)xret;
    }
    void x_30(Smoke::Stack x) const {
	// displayMode()
	QStyleSheetItem::DisplayMode xret = this->QStyleSheetItem::displayMode();
	x[0].s_class = (void*)new QStyleSheetItem::DisplayMode(xret);
    }
    void x_31(Smoke::Stack x) {
	// setDisplayMode(QStyleSheetItem::DisplayMode)
	this->QStyleSheetItem::setDisplayMode(*(QStyleSheetItem::DisplayMode *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_32(Smoke::Stack x) const {
	// alignment()
	int xret = this->QStyleSheetItem::alignment();
	x[0].s_int = (int)xret;
    }
    void x_33(Smoke::Stack x) {
	// setAlignment(int)
	this->QStyleSheetItem::setAlignment((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_34(Smoke::Stack x) const {
	// verticalAlignment()
	QStyleSheetItem::VerticalAlignment xret = this->QStyleSheetItem::verticalAlignment();
	x[0].s_class = (void*)new QStyleSheetItem::VerticalAlignment(xret);
    }
    void x_35(Smoke::Stack x) {
	// setVerticalAlignment(QStyleSheetItem::VerticalAlignment)
	this->QStyleSheetItem::setVerticalAlignment(*(QStyleSheetItem::VerticalAlignment *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_36(Smoke::Stack x) const {
	// fontWeight()
	int xret = this->QStyleSheetItem::fontWeight();
	x[0].s_int = (int)xret;
    }
    void x_37(Smoke::Stack x) {
	// setFontWeight(int)
	this->QStyleSheetItem::setFontWeight((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_38(Smoke::Stack x) const {
	// logicalFontSize()
	int xret = this->QStyleSheetItem::logicalFontSize();
	x[0].s_int = (int)xret;
    }
    void x_39(Smoke::Stack x) {
	// setLogicalFontSize(int)
	this->QStyleSheetItem::setLogicalFontSize((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_40(Smoke::Stack x) const {
	// logicalFontSizeStep()
	int xret = this->QStyleSheetItem::logicalFontSizeStep();
	x[0].s_int = (int)xret;
    }
    void x_41(Smoke::Stack x) {
	// setLogicalFontSizeStep(int)
	this->QStyleSheetItem::setLogicalFontSizeStep((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_42(Smoke::Stack x) const {
	// fontSize()
	int xret = this->QStyleSheetItem::fontSize();
	x[0].s_int = (int)xret;
    }
    void x_43(Smoke::Stack x) {
	// setFontSize(int)
	this->QStyleSheetItem::setFontSize((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_44(Smoke::Stack x) const {
	// fontFamily()
	QString xret = this->QStyleSheetItem::fontFamily();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_45(Smoke::Stack x) {
	// setFontFamily(const QString&)
	this->QStyleSheetItem::setFontFamily(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_46(Smoke::Stack x) const {
	// numberOfColumns()
	int xret = this->QStyleSheetItem::numberOfColumns();
	x[0].s_int = (int)xret;
    }
    void x_47(Smoke::Stack x) {
	// setNumberOfColumns(int)
	this->QStyleSheetItem::setNumberOfColumns((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_48(Smoke::Stack x) const {
	// color()
	QColor xret = this->QStyleSheetItem::color();
	x[0].s_class = (void*)new QColor(xret);
    }
    void x_49(Smoke::Stack x) {
	// setColor(const QColor&)
	this->QStyleSheetItem::setColor(*(const QColor *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_50(Smoke::Stack x) const {
	// fontItalic()
	bool xret = this->QStyleSheetItem::fontItalic();
	x[0].s_bool = (bool)xret;
    }
    void x_51(Smoke::Stack x) {
	// setFontItalic(bool)
	this->QStyleSheetItem::setFontItalic((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_52(Smoke::Stack x) const {
	// definesFontItalic()
	bool xret = this->QStyleSheetItem::definesFontItalic();
	x[0].s_bool = (bool)xret;
    }
    void x_53(Smoke::Stack x) const {
	// fontUnderline()
	bool xret = this->QStyleSheetItem::fontUnderline();
	x[0].s_bool = (bool)xret;
    }
    void x_54(Smoke::Stack x) {
	// setFontUnderline(bool)
	this->QStyleSheetItem::setFontUnderline((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_55(Smoke::Stack x) const {
	// definesFontUnderline()
	bool xret = this->QStyleSheetItem::definesFontUnderline();
	x[0].s_bool = (bool)xret;
    }
    void x_56(Smoke::Stack x) const {
	// isAnchor()
	bool xret = this->QStyleSheetItem::isAnchor();
	x[0].s_bool = (bool)xret;
    }
    void x_57(Smoke::Stack x) {
	// setAnchor(bool)
	this->QStyleSheetItem::setAnchor((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_58(Smoke::Stack x) const {
	// whiteSpaceMode()
	QStyleSheetItem::WhiteSpaceMode xret = this->QStyleSheetItem::whiteSpaceMode();
	x[0].s_class = (void*)new QStyleSheetItem::WhiteSpaceMode(xret);
    }
    void x_59(Smoke::Stack x) {
	// setWhiteSpaceMode(QStyleSheetItem::WhiteSpaceMode)
	this->QStyleSheetItem::setWhiteSpaceMode(*(QStyleSheetItem::WhiteSpaceMode *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_60(Smoke::Stack x) const {
	// margin(QStyleSheetItem::Margin)
	int xret = this->QStyleSheetItem::margin(*(QStyleSheetItem::Margin *)x[1].s_class);
	x[0].s_int = (int)xret;
    }
    void x_61(Smoke::Stack x) {
	// setMargin(QStyleSheetItem::Margin, int)
	this->QStyleSheetItem::setMargin(*(QStyleSheetItem::Margin *)x[1].s_class,(int)x[2].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_62(Smoke::Stack x) const {
	// listStyle()
	QStyleSheetItem::ListStyle xret = this->QStyleSheetItem::listStyle();
	x[0].s_class = (void*)new QStyleSheetItem::ListStyle(xret);
    }
    void x_63(Smoke::Stack x) {
	// setListStyle(QStyleSheetItem::ListStyle)
	this->QStyleSheetItem::setListStyle(*(QStyleSheetItem::ListStyle *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_64(Smoke::Stack x) const {
	// contexts()
	QString xret = this->QStyleSheetItem::contexts();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_65(Smoke::Stack x) {
	// setContexts(const QString&)
	this->QStyleSheetItem::setContexts(*(const QString *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_66(Smoke::Stack x) const {
	// allowedInContext(const QStyleSheetItem*)
	bool xret = this->QStyleSheetItem::allowedInContext((const QStyleSheetItem*)x[1].s_class);
	x[0].s_bool = (bool)xret;
    }
    void x_67(Smoke::Stack x) const {
	// selfNesting()
	bool xret = this->QStyleSheetItem::selfNesting();
	x[0].s_bool = (bool)xret;
    }
    void x_68(Smoke::Stack x) {
	// setSelfNesting(bool)
	this->QStyleSheetItem::setSelfNesting((bool)x[1].s_bool);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_69(Smoke::Stack x) {
	// setLineSpacing(int)
	this->QStyleSheetItem::setLineSpacing((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_70(Smoke::Stack x) const {
	// lineSpacing()
	int xret = this->QStyleSheetItem::lineSpacing();
	x[0].s_int = (int)xret;
    }
    ~x_QStyleSheetItem() {}
};
void xcall_QStyleSheetItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QStyleSheetItem *xself = (x_QStyleSheetItem*)obj;
    switch(xi) {
	case 0: x_QStyleSheetItem::x_0(args);	break;
	case 1: x_QStyleSheetItem::x_1(args);	break;
	case 2: x_QStyleSheetItem::x_2(args);	break;
	case 3: x_QStyleSheetItem::x_3(args);	break;
	case 4: x_QStyleSheetItem::x_4(args);	break;
	case 5: x_QStyleSheetItem::x_5(args);	break;
	case 6: x_QStyleSheetItem::x_6(args);	break;
	case 7: x_QStyleSheetItem::x_7(args);	break;
	case 8: x_QStyleSheetItem::x_8(args);	break;
	case 9: x_QStyleSheetItem::x_9(args);	break;
	case 10: x_QStyleSheetItem::x_10(args);	break;
	case 11: x_QStyleSheetItem::x_11(args);	break;
	case 12: x_QStyleSheetItem::x_12(args);	break;
	case 13: x_QStyleSheetItem::x_13(args);	break;
	case 14: x_QStyleSheetItem::x_14(args);	break;
	case 15: x_QStyleSheetItem::x_15(args);	break;
	case 16: x_QStyleSheetItem::x_16(args);	break;
	case 17: x_QStyleSheetItem::x_17(args);	break;
	case 18: x_QStyleSheetItem::x_18(args);	break;
	case 19: x_QStyleSheetItem::x_19(args);	break;
	case 20: x_QStyleSheetItem::x_20(args);	break;
	case 21: x_QStyleSheetItem::x_21(args);	break;
	case 22: x_QStyleSheetItem::x_22(args);	break;
	case 23: x_QStyleSheetItem::x_23(args);	break;
	case 24: x_QStyleSheetItem::x_24(args);	break;
	case 25: x_QStyleSheetItem::x_25(args);	break;
	case 26: x_QStyleSheetItem::x_26(args);	break;
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
	case 71: delete (QStyleSheetItem*)xself;	break;
    }
}
