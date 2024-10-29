QT += quick concurrent core charts

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    datagenerator.cpp \
    dataprocessor.cpp

HEADERS += \
    datagenerator.h \
    dataprocessor.h

RESOURCES += qml.qrc

OTHER_FILES += main.qml

DISTFILES += \
    CustomButton.qml

