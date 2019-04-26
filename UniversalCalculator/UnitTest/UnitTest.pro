QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

HEADERS += \
../Calculator/memory.h \
../Calculator/pnumber.h \
../Calculator/proc.h

SOURCES += \
../UniversalCalculator/pnumber.cpp \
  tst_test_calc.cpp
