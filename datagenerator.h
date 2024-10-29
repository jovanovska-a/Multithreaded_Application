#ifndef DATAGENERATOR_H
#define DATAGENERATOR_H
#include "dataprocessor.h"

#include<QObject>

QT_FORWARD_DECLARE_CLASS(QTimer)

class DataGenerator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int data READ data WRITE setData NOTIFY dataChanged)
    Q_PROPERTY(bool active READ isActive NOTIFY activeChanged)
    Q_PROPERTY(int interval READ interval WRITE setInterval NOTIFY intervalChanged)
    Q_PROPERTY(DataProcessor* processor READ processor WRITE setProcessor NOTIFY processorChanged FINAL)

public:

    explicit DataGenerator(QObject *parent = Q_NULLPTR);
    ~DataGenerator();
    void setData(int random_data);
    void setInterval(int msec);
    int data();
    int interval();
    bool isActive();
    DataProcessor *processor() const;
    void setProcessor(DataProcessor *newProcessor);

public Q_SLOTS:
    void start();
    void stop();
    void generateData();

Q_SIGNALS:
    void generate();
    void dataChanged();
    void activeChanged();
    void intervalChanged();
    void newDataGenerated(int random_data);
    void processorChanged();

private:
    QTimer *m_timer;
    int m_data;
    int m_result;
    DataProcessor *m_processor = nullptr;
};

#endif
