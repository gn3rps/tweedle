These are the default QMK files that the Tweedle comes pre-flashed with. By default, the Tweedle is configured for **MacOS and two encoders**; you may need to modify the keymap to suit your use.

## How to flash new QMK files (such as keymaps) to the Tweedle:

The Tweedle is configured to use QMK's bootmagic lite feature for easy flashing. Follow these steps after you've modified the QMK files and are ready to flash them to the Tweedle. Note: if editing the keymap, I recommend editing the default keymap in the via keymap folder(.

### Step 1
>Ensure QMK is installed and up to date on your computer (see the [QMK Getting Started documentation](https://github.com/qmk/qmk_firmware/blob/master/docs/newbs_getting_started.md)).
  
### Step 2
>With the Tweedle unplugged from the computer press and hold the upper outer-most key on one half (typically ESC on the left half and Backspace on the right half), then plug a USB-C data cable that is connected to the host computer into the controller on that half of the Tweedle.
  
### Step 3
>Continue to hold the bootmagic key down for 3-5 seconds after the controller is plugged in and the green LED on the controller illuminates. Release the key; the controller should now be in bootloader mode and should be visible as a drive in your file explorer (Finder on MacOS).
  
### Step 4
>Open the Command Line Interface (CLI) on your computer, navigate to the same directory where you've saved the Tweedle QMK files, then run the following command:
>
>**For left half:**
```qmk flash -kb tweedle -km via -bl uf2-split-left```
>
>**For right half:**
```qmk flash -kb tweedle -km via -bl uf2-split-right```

### Step 5
>Repeat steps 2-4 for the other half of the Tweedle, then enjoy typing!



## How to use VIA with the Tweedle:

### Step 1
>Open a new browser tab to go to the [VIA web application](https://usevia.app/)

### Step 2
>Click on the gear ([settings](https://usevia.app/settings)) icon at the top of the VIA page.

### Step 3
>Click the slider next to ```Show Design tab```, then click the paintbrush ([design](https://usevia.app/design)) icon that appears at the top of the page next to the gear ([settings](https://usevia.app/settings)) icon.

### Step 4
>Click the ```Load``` button next to ```Load Draft Definition``` then navigate to the ```via.json``` file in the Tweedle's QMK files and click ```Open```.

### Step 5
>Choose whether or not you have encoders on your Tweedle by clicking the drop-down menus next to ```Left half``` and ```Right half``` then click the keyboard ([configure](https://usevia.app/)) icon at the top of the page.

### Step 6
>Click the ```Authorize device +``` button, then select ```sprengBoard Tweedle``` in the popup and click ```Connect```

### Step 7
>Modify the Tweedle's keymap to your heart's content!
