//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qstringlist.h>
#include <qsessionmanager.h>

class x_QSessionManager {
private:
    QSessionManager *xthis;
public:
    x_QSessionManager(void *x) : xthis((QSessionManager*)x) {}
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QSessionManager::RestartIfRunning;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QSessionManager::RestartAnyway;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QSessionManager::RestartImmediately;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QSessionManager::RestartNever;
    }
    void x_4(Smoke::Stack x) const {
	// sessionId()
	QString xret = xthis->QSessionManager::sessionId();
	x[0].s_class = (void*)new QString(xret);
    }
    void x_5(Smoke::Stack x) {
	// allowsInteraction()
	bool xret = xthis->QSessionManager::allowsInteraction();
	x[0].s_bool = (bool)xret;
    }
    void x_6(Smoke::Stack x) {
	// allowsErrorInteraction()
	bool xret = xthis->QSessionManager::allowsErrorInteraction();
	x[0].s_bool = (bool)xret;
    }
    void x_7(Smoke::Stack x) {
	// release()
	xthis->QSessionManager::release();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_8(Smoke::Stack x) {
	// cancel()
	xthis->QSessionManager::cancel();
	x[0].s_int = x[0].s_int; // noop
    }
    void x_9(Smoke::Stack x) {
	// setRestartHint(QSessionManager::RestartHint)
	xthis->QSessionManager::setRestartHint(*(QSessionManager::RestartHint *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_10(Smoke::Stack x) const {
	// restartHint()
	QSessionManager::RestartHint xret = xthis->QSessionManager::restartHint();
	x[0].s_class = (void*)new QSessionManager::RestartHint(xret);
    }
    void x_11(Smoke::Stack x) {
	// setRestartCommand(const QStringList&)
	xthis->QSessionManager::setRestartCommand(*(const QStringList *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_12(Smoke::Stack x) const {
	// restartCommand()
	QStringList xret = xthis->QSessionManager::restartCommand();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_13(Smoke::Stack x) {
	// setDiscardCommand(const QStringList&)
	xthis->QSessionManager::setDiscardCommand(*(const QStringList *)x[1].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_14(Smoke::Stack x) const {
	// discardCommand()
	QStringList xret = xthis->QSessionManager::discardCommand();
	x[0].s_class = (void*)new QStringList(xret);
    }
    void x_15(Smoke::Stack x) {
	// setManagerProperty(const QString&, const QString&)
	xthis->QSessionManager::setManagerProperty(*(const QString *)x[1].s_class,*(const QString *)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_16(Smoke::Stack x) {
	// setManagerProperty(const QString&, const QStringList&)
	xthis->QSessionManager::setManagerProperty(*(const QString *)x[1].s_class,*(const QStringList *)x[2].s_class);
	x[0].s_int = x[0].s_int; // noop
    }
    void x_17(Smoke::Stack x) const {
	// isPhase2()
	bool xret = xthis->QSessionManager::isPhase2();
	x[0].s_bool = (bool)xret;
    }
    void x_18(Smoke::Stack x) {
	// requestPhase2()
	xthis->QSessionManager::requestPhase2();
	x[0].s_int = x[0].s_int; // noop
    }
    ~x_QSessionManager() {}
};
void xcall_QSessionManager(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QSessionManager xtmp(obj), *xself = &xtmp;
    switch(xi) {
	case 0: x_QSessionManager::x_0(args);	break;
	case 1: x_QSessionManager::x_1(args);	break;
	case 2: x_QSessionManager::x_2(args);	break;
	case 3: x_QSessionManager::x_3(args);	break;
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
    }
}
