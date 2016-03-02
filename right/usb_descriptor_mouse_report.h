#ifndef __USB_DESCRIPTOR_MOUSE_REPORT_H__
#define __USB_DESCRIPTOR_MOUSE_REPORT_H__

// Macros:

    #define USB_MOUSE_REPORT_DESCRIPTOR_LENGTH (121U)

    #define USB_MOUSE_REPORT_DESCRIPTOR_MIN_AXIS_VALUE -4096
    #define USB_MOUSE_REPORT_DESCRIPTOR_MAX_AXIS_VALUE 4096
    #define USB_MOUSE_REPORT_DESCRIPTOR_MIN_AXIS_PHYSICAL_VALUE -4096
    #define USB_MOUSE_REPORT_DESCRIPTOR_MAX_AXIS_PHYSICAL_VALUE 4096
    #define USB_MOUSE_REPORT_DESCRIPTOR_BUTTONS 8

    #define USB_MOUSE_REPORT_DESCRIPTOR_BUTTONS_PADDING ((USB_MOUSE_REPORT_DESCRIPTOR_BUTTONS % 8) \
                ? (8 - (USB_MOUSE_REPORT_DESCRIPTOR_BUTTONS % 8)) \
                : 0)

// Variables:

    extern uint8_t UsbMouseReportDescriptor[USB_MOUSE_REPORT_DESCRIPTOR_LENGTH];

#endif
