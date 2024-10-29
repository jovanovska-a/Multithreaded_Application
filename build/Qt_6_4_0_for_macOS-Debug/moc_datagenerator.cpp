/****************************************************************************
** Meta object code from reading C++ file 'datagenerator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Multithreaded_Application 2/datagenerator.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datagenerator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DataGenerator_t {
    uint offsetsAndSizes[34];
    char stringdata0[14];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[14];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[12];
    char stringdata8[17];
    char stringdata9[6];
    char stringdata10[5];
    char stringdata11[13];
    char stringdata12[5];
    char stringdata13[7];
    char stringdata14[9];
    char stringdata15[10];
    char stringdata16[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DataGenerator_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DataGenerator_t qt_meta_stringdata_DataGenerator = {
    {
        QT_MOC_LITERAL(0, 13),  // "DataGenerator"
        QT_MOC_LITERAL(14, 8),  // "generate"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 11),  // "dataChanged"
        QT_MOC_LITERAL(36, 13),  // "activeChanged"
        QT_MOC_LITERAL(50, 15),  // "intervalChanged"
        QT_MOC_LITERAL(66, 16),  // "newDataGenerated"
        QT_MOC_LITERAL(83, 11),  // "random_data"
        QT_MOC_LITERAL(95, 16),  // "processorChanged"
        QT_MOC_LITERAL(112, 5),  // "start"
        QT_MOC_LITERAL(118, 4),  // "stop"
        QT_MOC_LITERAL(123, 12),  // "generateData"
        QT_MOC_LITERAL(136, 4),  // "data"
        QT_MOC_LITERAL(141, 6),  // "active"
        QT_MOC_LITERAL(148, 8),  // "interval"
        QT_MOC_LITERAL(157, 9),  // "processor"
        QT_MOC_LITERAL(167, 14)   // "DataProcessor*"
    },
    "DataGenerator",
    "generate",
    "",
    "dataChanged",
    "activeChanged",
    "intervalChanged",
    "newDataGenerated",
    "random_data",
    "processorChanged",
    "start",
    "stop",
    "generateData",
    "data",
    "active",
    "interval",
    "processor",
    "DataProcessor*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DataGenerator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   79, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    5 /* Public */,
       3,    0,   69,    2, 0x06,    6 /* Public */,
       4,    0,   70,    2, 0x06,    7 /* Public */,
       5,    0,   71,    2, 0x06,    8 /* Public */,
       6,    1,   72,    2, 0x06,    9 /* Public */,
       8,    0,   75,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   76,    2, 0x0a,   12 /* Public */,
      10,    0,   77,    2, 0x0a,   13 /* Public */,
      11,    0,   78,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00015103, uint(1), 0,
      13, QMetaType::Bool, 0x00015001, uint(2), 0,
      14, QMetaType::Int, 0x00015103, uint(3), 0,
      15, 0x80000000 | 16, 0x0001590b, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataGenerator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataGenerator.offsetsAndSizes,
    qt_meta_data_DataGenerator,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DataGenerator_t,
        // property 'data'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'active'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'interval'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'processor'
        QtPrivate::TypeAndForceComplete<DataProcessor*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataGenerator, std::true_type>,
        // method 'generate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'intervalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newDataGenerated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'processorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generateData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DataGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataGenerator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->generate(); break;
        case 1: _t->dataChanged(); break;
        case 2: _t->activeChanged(); break;
        case 3: _t->intervalChanged(); break;
        case 4: _t->newDataGenerated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->processorChanged(); break;
        case 6: _t->start(); break;
        case 7: _t->stop(); break;
        case 8: _t->generateData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataGenerator::*)();
            if (_t _q_method = &DataGenerator::generate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataGenerator::*)();
            if (_t _q_method = &DataGenerator::dataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataGenerator::*)();
            if (_t _q_method = &DataGenerator::activeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataGenerator::*)();
            if (_t _q_method = &DataGenerator::intervalChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataGenerator::*)(int );
            if (_t _q_method = &DataGenerator::newDataGenerated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataGenerator::*)();
            if (_t _q_method = &DataGenerator::processorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataProcessor* >(); break;
        }
    }
else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DataGenerator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->interval(); break;
        case 3: *reinterpret_cast< DataProcessor**>(_v) = _t->processor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DataGenerator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setData(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setInterval(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setProcessor(*reinterpret_cast< DataProcessor**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *DataGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataGenerator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DataGenerator::generate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataGenerator::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DataGenerator::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DataGenerator::intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DataGenerator::newDataGenerated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataGenerator::processorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
