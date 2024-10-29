#include "datagenerator.h"
#include "dataprocessor.h"
#include <QTimer>
#include <QRandomGenerator>

DataGenerator:: DataGenerator(QObject *parent) : QObject(parent), m_timer(new QTimer(this)), m_data(0)
{
    connect(m_timer, &QTimer::timeout,this, &DataGenerator::generate);
}

DataGenerator::~DataGenerator()
{
}

int DataGenerator::data()
{
    return m_data;
}

void DataGenerator::setData(int random_data)
{
    if(m_data == random_data)
        return;
    m_data = random_data;
    Q_EMIT dataChanged();
}

int DataGenerator::interval()
{
    return m_timer->interval();
}

void DataGenerator::setInterval(int msec)
{
    if(m_timer->interval() == msec)
        return;
    m_timer->setInterval(msec);
    emit intervalChanged();
}

bool DataGenerator::isActive()
{
    return m_timer->isActive();
}

void DataGenerator::generateData()
{
    QRandomGenerator *generator = QRandomGenerator::global();
    int random_data = generator->bounded(1, 101);
    setData(random_data);
    emit newDataGenerated(random_data);
}

void DataGenerator::start()
{
    if(m_timer->isActive())
        return;
    m_timer->start();
    emit activeChanged();
}

void DataGenerator::stop()
{
    if(!m_timer->isActive())
        return;
    m_timer->stop();
    emit activeChanged();
}

DataProcessor *DataGenerator::processor() const
{
    return m_processor;
}

void DataGenerator::setProcessor(DataProcessor *newProcessor)
{
    if (m_processor == newProcessor)
        return;
    m_processor = newProcessor;
    connect(this, &DataGenerator::newDataGenerated, m_processor, &DataProcessor::handleProcessing);
    emit processorChanged();
}
