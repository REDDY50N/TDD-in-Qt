#include "test_tcpserver.h"

// CTOR
// TestTcpServer::TestTcpServer(){ }

void TestTcpServer::initTestCase()
{
    // add code
    qDebug() << "Init testcase";
}

void TestTcpServer::cleanupTestCase()
{
    // add code
    qDebug() << "Cleanup testcase";
}

void TestTcpServer::testTcpServer()
{
    QTcpServer server;
    // Testcase: Server should listen to LocalHost IP (127.0.0.1) on Port 1234
    QVERIFY(server.listen(QHostAddress::LocalHost, 1234));

}

// use, if there is no main() loop?
//QTEST_GUILESS_MAIN(TestTcpServer) // - for  tests without gui
//QTEST_MAIN(TestTcpServer)

