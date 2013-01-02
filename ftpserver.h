#ifndef FTPSERVER_H
#define FTPSERVER_H

#include <QObject>

class QTcpServer;

class FtpServer : public QObject
{
    Q_OBJECT
public:
    explicit FtpServer(QObject *parent, const QString &rootPath, int port = 21, const QString &userName = QString(), const QString &password = QString());
    bool isListening();

signals:
    
private slots:
    void acceptConnection();

private:
    QString userName;
    QString password;
    QString rootPath;
    QTcpServer *server;
};

#endif // FTPSERVER_H
