/****************************************************************************
** Meta object code from reading C++ file 'dataprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../dataprocessor.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_DataProcessor_t {
    uint offsetsAndSizes[46];
    char stringdata0[14];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[18];
    char stringdata5[12];
    char stringdata6[18];
    char stringdata7[19];
    char stringdata8[10];
    char stringdata9[17];
    char stringdata10[13];
    char stringdata11[12];
    char stringdata12[5];
    char stringdata13[17];
    char stringdata14[15];
    char stringdata15[8];
    char stringdata16[14];
    char stringdata17[11];
    char stringdata18[5];
    char stringdata19[11];
    char stringdata20[11];
    char stringdata21[13];
    char stringdata22[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DataProcessor_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DataProcessor_t qt_meta_stringdata_DataProcessor = {
    {
        QT_MOC_LITERAL(0, 13),  // "DataProcessor"
        QT_MOC_LITERAL(14, 20),  // "processedDataChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 8),  // "emitData"
        QT_MOC_LITERAL(45, 17),  // "listLengthChanged"
        QT_MOC_LITERAL(63, 11),  // "listChanged"
        QT_MOC_LITERAL(75, 17),  // "resultListChanged"
        QT_MOC_LITERAL(93, 18),  // "currentTimeChanged"
        QT_MOC_LITERAL(112, 9),  // "emptyList"
        QT_MOC_LITERAL(122, 16),  // "handleProcessing"
        QT_MOC_LITERAL(139, 12),  // "dataTransfer"
        QT_MOC_LITERAL(152, 11),  // "processData"
        QT_MOC_LITERAL(164, 4),  // "data"
        QT_MOC_LITERAL(169, 16),  // "resultListLength"
        QT_MOC_LITERAL(186, 14),  // "fillResultList"
        QT_MOC_LITERAL(201, 7),  // "average"
        QT_MOC_LITERAL(209, 13),  // "processedData"
        QT_MOC_LITERAL(223, 10),  // "listLength"
        QT_MOC_LITERAL(234, 4),  // "list"
        QT_MOC_LITERAL(239, 10),  // "QList<int>"
        QT_MOC_LITERAL(250, 10),  // "resultList"
        QT_MOC_LITERAL(261, 12),  // "QList<float>"
        QT_MOC_LITERAL(274, 11)   // "currentTime"
    },
    "DataProcessor",
    "processedDataChanged",
    "",
    "emitData",
    "listLengthChanged",
    "listChanged",
    "resultListChanged",
    "currentTimeChanged",
    "emptyList",
    "handleProcessing",
    "dataTransfer",
    "processData",
    "data",
    "resultListLength",
    "fillResultList",
    "average",
    "processedData",
    "listLength",
    "list",
    "QList<int>",
    "resultList",
    "QList<float>",
    "currentTime"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DataProcessor[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   97, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    6 /* Public */,
       3,    0,   81,    2, 0x06,    7 /* Public */,
       4,    0,   82,    2, 0x06,    8 /* Public */,
       5,    0,   83,    2, 0x06,    9 /* Public */,
       6,    0,   84,    2, 0x06,   10 /* Public */,
       7,    0,   85,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   86,    2, 0x0a,   12 /* Public */,
       9,    1,   87,    2, 0x0a,   13 /* Public */,
      11,    1,   90,    2, 0x0a,   15 /* Public */,
      13,    0,   93,    2, 0x0a,   17 /* Public */,
      14,    1,   94,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Float,   15,

 // properties: name, type, flags
      16, QMetaType::Float, 0x00015103, uint(0), 0,
      17, QMetaType::Int, 0x00015103, uint(2), 0,
      18, 0x80000000 | 19, 0x0001510b, uint(3), 0,
      20, 0x80000000 | 21, 0x0001510b, uint(4), 0,
      22, QMetaType::QString, 0x00015103, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataProcessor.offsetsAndSizes,
    qt_meta_data_DataProcessor,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DataProcessor_t,
        // property 'processedData'
        QtPrivate::TypeAndForceComplete<float, std::true_type>,
        // property 'listLength'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'list'
        QtPrivate::TypeAndForceComplete<QList<int>, std::true_type>,
        // property 'resultList'
        QtPrivate::TypeAndForceComplete<QList<float>, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataProcessor, std::true_type>,
        // method 'processedDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'listLengthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'listChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resultListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emptyList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleProcessing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'processData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resultListLength'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fillResultList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>
    >,
    nullptr
} };

void DataProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataProcessor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->processedDataChanged(); break;
        case 1: _t->emitData(); break;
        case 2: _t->listLengthChanged(); break;
        case 3: _t->listChanged(); break;
        case 4: _t->resultListChanged(); break;
        case 5: _t->currentTimeChanged(); break;
        case 6: _t->emptyList(); break;
        case 7: _t->handleProcessing((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->processData((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: { int _r = _t->resultListLength();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->fillResultList((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::processedDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::emitData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::listLengthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::listChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::resultListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataProcessor::*)();
            if (_t _q_method = &DataProcessor::currentTimeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<float> >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DataProcessor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->processedData(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->listLength(); break;
        case 2: *reinterpret_cast< QList<int>*>(_v) = _t->list(); break;
        case 3: *reinterpret_cast< QList<float>*>(_v) = _t->resultList(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->currentTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DataProcessor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProcessedData(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setListLength(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setList(*reinterpret_cast< QList<int>*>(_v)); break;
        case 3: _t->setResultList(*reinterpret_cast< QList<float>*>(_v)); break;
        case 4: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DataProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataProcessor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void DataProcessor::processedDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataProcessor::emitData()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataProcessor::listLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DataProcessor::listChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DataProcessor::resultListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DataProcessor::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
