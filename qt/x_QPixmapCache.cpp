//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qpixmapcache.h>

class x_QPixmapCache : public QPixmapCache {
public:
    static void x_0(Smoke::Stack x) {
	// QPixmapCache()
	x_QPixmapCache* xret = new x_QPixmapCache();
	x[0].s_class = (void*)xret;
    }
    x_QPixmapCache() : QPixmapCache() {
    }
    static void x_1(Smoke::Stack x) {
	// cacheLimit()
	int xret = QPixmapCache::cacheLimit();
	x[0].s_int = (int)xret;
    }
    static void x_2(Smoke::Stack x) {
	// setCacheLimit(int)
	QPixmapCache::setCacheLimit((int)x[1].s_int);
	x[0].s_int = x[0].s_int; // noop
    }
    static void x_3(Smoke::Stack x) {
	// find(const QString&)
	QPixmap* xret = QPixmapCache::find(*(const QString *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_4(Smoke::Stack x) {
	// find(const QString&, QPixmap&)
	bool xret = QPixmapCache::find(*(const QString *)x[1].s_class,*(QPixmap *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    static void x_5(Smoke::Stack x) {
	// insert(const QString&, QPixmap*)
	bool xret = QPixmapCache::insert(*(const QString *)x[1].s_class,(QPixmap*)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    static void x_6(Smoke::Stack x) {
	// insert(const QString&, const QPixmap&)
	bool xret = QPixmapCache::insert(*(const QString *)x[1].s_class,*(const QPixmap *)x[2].s_class);
	x[0].s_bool = (bool)xret;
    }
    static void x_7(Smoke::Stack x) {
	// clear()
	QPixmapCache::clear();
	x[0].s_int = x[0].s_int; // noop
    }
    ~x_QPixmapCache() {}
};
void xcall_QPixmapCache(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QPixmapCache *xself = (x_QPixmapCache*)obj;
    switch(xi) {
	case 0: x_QPixmapCache::x_0(args);	break;
	case 1: x_QPixmapCache::x_1(args);	break;
	case 2: x_QPixmapCache::x_2(args);	break;
	case 3: x_QPixmapCache::x_3(args);	break;
	case 4: x_QPixmapCache::x_4(args);	break;
	case 5: x_QPixmapCache::x_5(args);	break;
	case 6: x_QPixmapCache::x_6(args);	break;
	case 7: x_QPixmapCache::x_7(args);	break;
	case 8: delete (QPixmapCache*)xself;	break;
    }
}
