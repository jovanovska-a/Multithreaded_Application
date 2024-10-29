#include "dataprocessor.h"
#include<QtConcurrent>
#include<QFile>

DataProcessor::DataProcessor(QObject *parent) : QObject(parent), m_data(0)
{
    m_file.setFileName("test.txt");
    if(!m_file.open(QIODevice::Append | QIODevice::Text))
        return;
}

DataProcessor::~DataProcessor()
{
    m_file.close();
}

float DataProcessor::processedData()
{
    return m_data;
}

int DataProcessor::listLength()
{
    return m_listLength;
}

QList<int> DataProcessor::list()
{
    return m_list;
}

QList<float> DataProcessor::resultList()
{
    return m_resultList;
}

QString DataProcessor::currentTime()
{
    return m_time;
}

void DataProcessor::setProcessedData(float data)
{
    if(m_data == data)
        return;
    m_data = data;
    fillResultList(m_data);
    emit processedDataChanged();
}

void DataProcessor::setListLength(int length)
{
    if(m_listLength == length)
        return;
    m_listLength = length;
    emit listLengthChanged();
}

void DataProcessor::setList(QList<int> &list)
{
    if (m_list != list) {
        m_list = list;
        setListLength(m_list.size());
        emit listChanged();
    }
}

void DataProcessor::setResultList(QList<float> &list)
{
    if (m_resultList != list) {
        m_resultList = list;
    }emit resultListChanged();
}

void DataProcessor::setCurrentTime(QString time)
{
    if(m_time != time){
        m_time = time;
        emit currentTimeChanged();
    }
}

void DataProcessor::emptyList()
{
    m_list.clear();
    emit listChanged();
}

void DataProcessor::handleProcessing(int dataTransfer)
{
    QtConcurrent::run([this, dataTransfer]() {
        processData(dataTransfer);
    });
}

void DataProcessor::processData(int data)
{

    m_list.append(data);
    setList(m_list);
    setListLength(m_list.length());
    emit listLengthChanged();
    if(m_list.length() >= 10)
    {
        float result = 0;
        if(!m_file.isOpen())
            return;
        m_file.write("Data: ");
        for(int i = m_list.length() - 10; i < m_list.length(); ++i)
        {
            result += m_list[i];
            qDebug()<<i<<" : "<<m_list[i];
            QString data=QString::number(m_list[i]);
            m_file.write(data.toUtf8());
            m_file.write(" ");
        }
        m_file.write("\n");
        m_file.write("Average: ");
        result /= 10;
        QString resultStr=QString::number(result);
        m_file.write(resultStr.toUtf8());
        m_file.write("\n");
        QString time=QTime::currentTime().toString("HH:mm:ss");
        qDebug()<<"Time when created "<<time;
        setCurrentTime(time);
        setProcessedData(result);
    }
}

int DataProcessor::resultListLength()
{
    int length=m_resultList.length();
    return length;
}

void DataProcessor::fillResultList(float average)
{
    m_resultList.append(average);
    setResultList(m_resultList);
}


