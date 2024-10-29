#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H

#include<QObject>
#include<QThread>
#include<QtConcurrent>

class DataProcessor : public QObject
{
    Q_OBJECT
    Q_PROPERTY(float processedData READ processedData WRITE setProcessedData NOTIFY processedDataChanged)
    Q_PROPERTY(int listLength READ listLength WRITE setListLength NOTIFY listLengthChanged)
    Q_PROPERTY(QList<int> list READ list WRITE setList NOTIFY listChanged)
    Q_PROPERTY(QList<float> resultList READ resultList WRITE setResultList NOTIFY resultListChanged)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged)

public:

    explicit DataProcessor(QObject *parent = Q_NULLPTR);
    ~DataProcessor();
    float processedData();
    int listLength();
    QList<int> list();
    QList<float> resultList();
    QString currentTime();

    void setProcessedData(float data);
    void setListLength(int length);
    void setList(QList<int> &list);
    void setResultList(QList<float> &list);
    void setCurrentTime(QString time);

public Q_SLOTS:
    void emptyList();
    void handleProcessing(int dataTransfer);
    void processData(int data);
    int resultListLength();
    void fillResultList(float average);

Q_SIGNALS:
    void processedDataChanged();
    void emitData();
    void listLengthChanged();
    void listChanged();
    void resultListChanged();
    void currentTimeChanged();

private:
    float m_data;
    int m_listLength;
    QList<int> m_list;
    QList<float> m_resultList;   
    QFile m_file;
    QString m_time;
};

#endif
