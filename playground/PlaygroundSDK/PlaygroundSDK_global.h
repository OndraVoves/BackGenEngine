#ifndef PLAYGROUNDSDK_GLOBAL_H
#define PLAYGROUNDSDK_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PLAYGROUNDSDK_LIBRARY)
#  define PLAYGROUNDSDKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PLAYGROUNDSDKSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PLAYGROUNDSDK_GLOBAL_H