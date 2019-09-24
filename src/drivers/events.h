#ifndef EVENTS_H_
#define EVENTS_H_

// ID
#define LORA_ID 5

// Lengths
#define READ_LENGTH    0        // Because the ID get's removed
#define SIZE_OF_BINARY_BROADCAST_PROTOCOL 36

// Protocols
#define PROTOCOL_PRINT_STATUS                   '0'
#define PROTOCOL_READ_WRITE_WIFI                'O'
#define PROTOCOL_READ_WRITE_BROADCAST_FREQ      'F'
#define PROTOCOL_READ_MEASURES                  '0'
#define PROTOCOL_BROADCAST                      'Q'
#define PROTOCOL_RESET_BOARD                    'R'

#define MAP_BROADCAST_FREQUENCY "frequency"
#define MAP_CURRENT "current"
#define MAP_VOLTAGE "voltage"
#define MAP_FREQUENCY "frequency"
#define MAP_POWER_FACTOR "power_factor"
#define MAP_APPARENT_POWER "apparent_power"
#define MAP_ACTIVE_POWER "active_power"
#define MAP_REACTIVE_POWER "reactive_power"

#endif