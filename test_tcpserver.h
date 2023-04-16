#ifndef TESTTCPSERVER_H
#define TESTTCPSERVER_H

#include <QObject>
#include <QtTest/QTest>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>

class TestTcpServer : public QObject
{
    Q_OBJECT
public:
    //TestTcpServer();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void testTcpServer();
};

#endif // TESTTCPSERVER_H
