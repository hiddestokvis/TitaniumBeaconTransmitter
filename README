# BleTransmitter

this is a small Titanium module that enables Android 5.0+ phones to transmit a beacon signal. It's a very early version of the module and it currently doesn't support ranging or advertising extra services. It's just a beacon signal advertised. The module is very much inspired by [aBeacon].

The use is very simple:

```
AndroidBeacon = require('com.neverhide.bletransmitter');
```

AndroidBeacon than has two methods: BeaconMe(params) and StopBeaconingMe()

An example of Beacon me is:

```
AndroidBeacon.BeaconMe({
	uuid: '01020304-0506-0708-1112-131415161718',
    major: 312,
    minor: 245,
    txpower: -75 // Currently not yet supported by the module
});
```

This will start sending the beacon signal. You can stop the signal by calling:

```
AndroidBeacon.StopBeaconingMe();
```

[aBeacon]: https://github.com/youten/aBeacon