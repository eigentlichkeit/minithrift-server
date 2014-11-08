TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    CalculatorHandler.cpp \
    calculator_types.cpp \
    calculator_constants.cpp \
    Calculator.cpp

OTHER_FILES += \
    calculator.thrift

HEADERS += \
    CalculatorHandler.hpp \
    calculator_types.h \
    calculator_constants.h \
    Calculator.h


unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += thrift
