/*
 * Copyright (c) 2014, 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */
#if defined(ARDUINO_ARCH_AVR)
#include "swcontrolserialport.h"
#include "debug.h"

enum {SW_RX_PIN = PIN_10, SW_TX_PIN = PIN_11};

SWControlSerialPort::SWControlSerialPort(void):
    sw_serial_port(new SoftwareSerial(SW_RX_PIN, SW_TX_PIN))
{
    sw_serial_port->begin(getSpeed());
    sw_serial_port->flush();
}
#endif
