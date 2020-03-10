/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c NMDeviceWifi -p NMDeviceWifi -N -i NetworkManagerConnection.h nm-device-wifi.xml
 *
 * qdbusxml2cpp is Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NMDEVICEWIFI_H_1359245778
#define NMDEVICEWIFI_H_1359245778

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "NetworkManagerConnection.h"

/*
 * Proxy class for interface org.freedesktop.NetworkManager.Device.Wireless
 */
class NMDeviceWifi: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.NetworkManager.Device.Wireless"; }

public:
    NMDeviceWifi(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~NMDeviceWifi();

    Q_PROPERTY(QDBusObjectPath ActiveAccessPoint READ activeAccessPoint)
    inline QDBusObjectPath activeAccessPoint() const
    { return qvariant_cast< QDBusObjectPath >(property("ActiveAccessPoint")); }

    Q_PROPERTY(uint Bitrate READ bitrate)
    inline uint bitrate() const
    { return qvariant_cast< uint >(property("Bitrate")); }

    Q_PROPERTY(QString HwAddress READ hwAddress)
    inline QString hwAddress() const
    { return qvariant_cast< QString >(property("HwAddress")); }

    Q_PROPERTY(uint Mode READ mode)
    inline uint mode() const
    { return qvariant_cast< uint >(property("Mode")); }

    Q_PROPERTY(QString PermHwAddress READ permHwAddress)
    inline QString permHwAddress() const
    { return qvariant_cast< QString >(property("PermHwAddress")); }

    Q_PROPERTY(uint WirelessCapabilities READ wirelessCapabilities)
    inline uint wirelessCapabilities() const
    { return qvariant_cast< uint >(property("WirelessCapabilities")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QList<QDBusObjectPath> > GetAccessPoints()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetAccessPoints"), argumentList);
    }

    inline QDBusPendingReply<> RequestScan(StringVariantMap options)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(options);
        return asyncCallWithArgumentList(QLatin1String("RequestScan"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AccessPointAdded(const QDBusObjectPath &access_point);
    void AccessPointRemoved(const QDBusObjectPath &access_point);
    void PropertiesChanged(StringVariantMap properties);
};

#endif
