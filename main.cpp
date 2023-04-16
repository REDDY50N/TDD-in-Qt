#include <QCoreApplication>
#include <QDebug>
#include <QTest>

#include "test_tcpserver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Running main() loop ...";

    // Run all test cases:
    int status = QTest::qExec(new TestTcpServer, argc, argv);
    return status;


    return a.exec();
}
