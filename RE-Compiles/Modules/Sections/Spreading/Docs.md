# Detection of Removable Media

        WM_DEVICECHANGE
        
        Value 	Meaning

        DBT_CONFIGCHANGECANCELED
        0x0019

          A request to change the current configuration (dock or undock) has been canceled.

        DBT_CONFIGCHANGED
        0x0018

          The current configuration has changed, due to a dock or undock.

        DBT_CUSTOMEVENT
        0x8006

          A custom event has occurred.

        DBT_DEVICEARRIVAL
        0x8000

          A device or piece of media has been inserted and is now available.

        DBT_DEVICEQUERYREMOVE
        0x8001

          Permission is requested to remove a device or piece of media. Any application can deny this request and cancel the removal.

        DBT_DEVICEQUERYREMOVEFAILED
        0x8002

          A request to remove a device or piece of media has been canceled.

        DBT_DEVICEREMOVECOMPLETE
        0x8004

          A device or piece of media has been removed.

        DBT_DEVICEREMOVEPENDING
        0x8003

          A device or piece of media is about to be removed. Cannot be denied.

        DBT_DEVICETYPESPECIFIC
        0x8005

          A device-specific event has occurred.

        DBT_DEVNODES_CHANGED
        0x0007

          A device has been added to or removed from the system.

        DBT_QUERYCHANGECONFIG
        0x0017

          Permission is requested to change the current configuration (dock or undock).

        DBT_USERDEFINED
        0xFFFF

          The meaning of this message is user-defined.

### Ref:

https://docs.microsoft.com/en-us/windows/win32/devio/wm-devicechange?redirectedfrom=MSDN
