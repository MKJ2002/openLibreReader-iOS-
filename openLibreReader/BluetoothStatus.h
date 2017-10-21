//
//  BluetoothService.m
//  openLibreReader
//
//  Copyright © 2017 Sandra Keßler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

#define BLUETOOTH_SERVICE_NORDIC_UART       @"6E400001-B5A3-F393-E0A9-E50E24DCCA9E"
#define BLUETOOTH_SERVICE_NORDIC_UART_TX    @"6E400002-B5A3-F393-E0A9-E50E24DCCA9E"
#define BLUETOOTH_SERVICE_NORDIC_UART_RX    @"6E400003-B5A3-F393-E0A9-E50E24DCCA9E"

//Buetooth notifications
#define BLUETOOTH_RESTORE_DEVICE    @"BLUETOOTH_RESTORE_DEVICE"     //NSUUID from CBPeripheral.identifier
#define BLUETOOTH_START_SCAN        @"BLUETOOTH_START_SCAN"         //
#define BLUETOOTH_STOP_SCAN         @"BLUETOOTH_STOP_SCAN"          //
#define BLUETOOTH_DISCOVER_DEVICE   @"BLUETOOTH_DISCOVER_DEVICE"    //CBPeripheral to discover
#define BLUETOOTH_CONNECT_DEVICE    @"BLUETOOTH_CONNECT_DEVICE"     //CBPeripheral to conenct to
#define BLUETOOTH_DISCONNECT_DEVICE @"BLUETOOTH_DISCONNECT_DEVICE"  //CBPeripheral to disconnect from
#define BLUETOOTH_DISCONNECT_ALL_DEVICES     @"BLUETOOTH_DISCONNECT_ALL_DEVICES"      //
#define BLUETOOTH_REQUEST_STATE     @"BLUETOOTH_REQUEST_STATE"      //
#define BLUETOOTH_SEND_DATA         @"BLUETOOTH_SEND_DATA"          //{data:NSData, characteristic:CBCharacteristic}


//Sent notifications
#define BLUETOOTH_RESTORED_DEVICE   @"BLUETOOTH_RESTORED_DEVICE"    //CBPeripheral or nil
#define BLUETOOTH_STATUS            @"BLUETOOTH_STATUS"             //BluetoothStatus
#define BLUETOOTH_DEVICE_DISCOVERED @"BLUETOOTH_DEVICE_DISCOVERED"  //CBPeripheral
#define BLUETOOTH_DEVICE_CONNECTED  @"BLUETOOTH_DEVICE_CONNECTED"   //CBPeripheral
#define BLUETOOTH_DEVICE_FAILED     @"BLUETOOTH_DEVICE_FAILED"      //{peripheral:CBPeripheral, error:error}
#define BLUETOOTH_DEVICE_DISCONNECTED   @"BLUETOOTH_DEVICE_DISCONNECTED"    //CBPeripheral
#define BLUETOOTH_DEVICE_DISCOVERED_SERVICE @"BLUETOOTH_DEVICE_DISCOVERED_SERVICE" //CBPeripheral
#define BLUETOOTH_DEVICE_DISCOVERED_SERVICE_CHARACTERISTICS @"BLUETOOTH_DEVICE_DISCOVERED_SERVICE_CHARACTERISTICS" //{peripheral:CBPeripheral, }
#define BLUETOOTH_DEVICE_CHARACTERISTIC_CHANGED @"BLUETOOTH_DEVICE_CHARACTERISTIC_CHANGED" //{peripheral:CBPeripheral, characteristic:CBCharacteristic}


@interface BluetoothStatus : NSObject
    @property CBManagerState state;
@end
