QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle
TEMPLATE = app
HEADERS += \
../Converter/pnumber.h
SOURCES += \
  ../Converter/pnumber.cpp \
  tst_test_pnumber.cpp

