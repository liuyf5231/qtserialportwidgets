/****************************************************************************
**
** Copyright (C) 2018 Miklos Marton <martonmiklosqdev@gmail.com>
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
****************************************************************************/
#ifndef SERIALPORTCOMBOBOX_H
#define SERIALPORTCOMBOBOX_H

#include <QComboBox>
#include <QSerialPort>

class SerialPortComboBox : public QComboBox
{
    Q_OBJECT
public:
    SerialPortComboBox(QWidget *parent = nullptr);
    bool selectPort(const QString &portName);
    void showPopup();
    enum SerialPortPropertyRole {
        Description = Qt::UserRole + 1,
        Manufacturer,
        SerialNumber,
        Location,
        VendorIdentifier,
        ProductIdentifier
    };
    Q_ENUM(SerialPortPropertyRole)

private:
    void refreshPorts();
};

#endif // SERIALPORTCOMBOBOX_H
