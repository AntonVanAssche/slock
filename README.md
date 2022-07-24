# slock - simple screen locker

This is my build of [slock](https://tools.suckless.org/slock/) for X.

## Requirements

In order to build slock you need the Xlib header files.

## Patches

| Name                                                                           | Description                                                                                                                                                                                                                                                                                                  |
| ------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| [Background Image](https://tools.suckless.org/slock/patches/background-image/) | This patch allows you to specify the background image using the `background_image` configuration. The image is drawn separately on every monitor according to its size.                                                                                                                                      |
| [quickcancel](https://tools.suckless.org/slock/patches/quickcancel/)           | Cancel slock by moving the mouse within a certain time-period after slock started. The time-period can be defined in seconds with the setting timetocancel in the config.h. This is useful if you forgot to disable `xautolock` during an activity that requires no input (e.g. reading text, watching video). |

## Installation

Edit [config.mk](./config.mk) to match your local setup (slock is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install slock:

```bash
# For Linux
$ sudo make clean install

# For BSD
$ doas make clean install
```

## Running slock

Simply invoke the 'slock' command. To get out of it, enter your password.
