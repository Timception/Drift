## Drift Keyboard V2 by Timception  

- For those interested: [Drift Keyboard V3](https://github.com/Timception/zmk-config-drift-v3-editor) is now available  

- These can be shipped internationally - DM me on [INSTAGRAM](https://www.instagram.com/majin.keyboards/)  
<br/>  

### Contents:  

- [Specifications](#specifications) - Some details about the Drift Keyboard  

- [Basics](#basics) - How to use / Basics  

- [Versions](#versions) - Versions of the Drift Keyboard  

- [Updating Early Versions](#updating-earlier-versions) - How to update earlier versions with newer firmware  
<br/>  


### A Hearty 68-Key Split Keyboard using [Vial-QMK](https://github.com/vial-kb/vial-qmk) firmware  
=========================================================  
*Can fully support the Thai Alphabet (สปลิทคีย์บอร์ดสำหรับคนไทย)  

This keyboard was designed for users who prefer a familiar typing experience of a 65% keyboard  
without having to learn new shortcuts — while enjoying the ergonomic benefits of a split layout.  

[Adobe .ai files](/Plate/) to lasercut your own acrylic plates  
<br/>  


![Drift_Violet_Alert](https://github.com/user-attachments/assets/d189a734-1031-49f4-bbe0-3047e1bf285d)  

![Drift_Cyan_Purple](https://github.com/Timception/Drift/assets/84595044/90241f5b-bc75-43a6-833a-c3984175a96c)  


### Specifications:
---------------------------------------------------------------------------------

MCU: RP2040-ZERO  

Switch Support: 5-Pin or 3-Pin Cherry MX switches - the PCB has hotswap sockets.  

OLED: (Horizontal) SSD1306 128x64  

Encoder: The Limited Panasonic EVQWGD001 Roller Encoder and the EC11 Encoder  

Serial Connector Cable: Either TRS or TRRS 3.5mm audio jacks can be used  

Dimensions: Width: 128mm, Length: 196mm  

> [!Important]  
> ⚠️ Important Safety Notice for Split Keyboard Users  
>  
> - Never plug in or disconnect the 3.5 mm audio connector while your keyboard is connected via USB-C. Doing so can permanently damage the keyboard.  
>  
> - When unsure, simply unplug USB-C first. This quick habit will save you trouble every time.  
>  
>  
> ✅ Why 3.5 mm is the safer choice  
> From experience and community knowledge, 3.5 mm audio connectors are far more reliable than USB-C for split keyboards.  
> They’re durable, easy to replace, and don’t require advanced soldering skills if something ever goes wrong. Many builders learn this the hard way once they’ve used or repaired split keyboards.  
>  
>  
> 🛠️ In case of mistakes  
> If damage ever occurs, the MCU can be replaced using a heat gun, but it’s a time-consuming process (and definitely not fun).
> Always remember to flash the firmware onto the replacement MCU before installing it.  
>  
>  
> 📌 Flashing firmware on RP2040-Zero  
>  
> 1. Hold the BOOT button before plugging in the USB cable.  
> 2. A new drive will appear on your computer.  
> 3. Drag and drop the .uf2 firmware file onto it.  
> 4. Flash one side at a time (unplug the 3.5 mm connector between sides).  
>  
>  
> 🔒 Additional tips  
>  
> Disconnect or power off your keyboard when not in use.  
>  
> Keep it out of reach of children to avoid accidents.  
<br/>  


### Basics  
---------------------------------------------------------------------------------

- You can [download the Vial App](https://get.vial.today/download/) to see where all your keys are, this is a must.  
  
- To turn off the beeping sounds you can press "Audio Toggle" found on the last layer (the left encoder).  

- This keyboard also has a [Music Mode](https://docs.qmk.fm/features/audio#music-mode) (an interesting feature that could be implemented and therefore, was implemented).  

  - By pressing the left encoder on the default layer you will toggle [Music Mode](https://docs.qmk.fm/features/audio#music-mode). Your keyboard is now a musical instrument and unusable until you press "Music Toggle" again.  

   - These audio toggles can be found in the Quantum section of the vial app.  

- The three curved keys on the bottom of each half are called the "Thumb Cluster". By default, the middle key of the thumb cluster on each half is the spacebar.

- It is highly recommended that you understand [LAYERS](https://get.vial.today/manual/layers.html) - when a momentary layer key is assigned "MO(layer number)", the keys on the layers above it should be set to transparent (KC_TRANS), the triangle symbol in the Vial App.

  - This keyboard has 4 layers and the first layer is layer 0 (Zero), so this is the order: Layer 0, Layer 1, Layer 2 and Layer 3.
<br/>  

### Versions  
---------------------------------------------------------------------------------

- Version 4 (Drift Keyboard V4) - A 3D-Printer-friendly, smaller, 64-key version (ready soon!)  

- Version 3 [(Drift Keyboard V3) Wireless](https://github.com/Timception/zmk-config-drift-v3-editor) - Drift V2, but with a [Bluetooth Enabled MCU / Nice!Nano](https://typeractive.xyz/products/nice-nano) using ZMK firmware  

- Version 3 [(Drift Keyboard V3) Wired](https://github.com/Timception/Drift-v3-vial) - Drift V3, but with an RP2040 Promicro MCU using Vial-QMK firmware  

- Version 2 (Drift Keyboard V2) - The original Drift Keyboard by Timception, with an [RP2040-Zero MCU](https://docs.nordicsemi.com/bundle/ncs-latest/page/zephyr/boards/waveshare/rp2040_zero/doc/index.html) running Vial-QMK  

- Early Versions - These versions have a master (MSTR) and slave (SLV) switch beside the OLEDs  
<br/>  

### Updating Earlier Versions  
---------------------------------------------------------------------------------

If your Drift Keyboard has switches on the side that determine the master and the slave, you can update your firmware and forget about those switches forever.  

- You will have to update one half at a time, so do not insert the 3.5mm audio jack.  

- Starting with the left half, set the switch to Master (MSTR) then plug the USB-C into your computer.  

  - You can hold the MO(1) key then hit the RESET button on the top left of the keyboard to enter bootloader mode.  

  - You can drag and drop the [.uf2 firmware file](https://github.com/Timception/Drift/tree/main/precompiled_firmware/V2_Everything_Unlocked) for the *LEFT* side into the drive that shows up after entering bootloader mode.  
 
  - After the firmware has completed loading, the drive should disappear then you can unplug the keyboard and set the side switch to slave (SLV) and never care about it again.  
 
- Do the same with the right half: Set to Master, press RESET to enter bootloader mode - Hold MO(2) and press the top right button.    

  - Drag and drop the [.uf2 firmware file](https://github.com/Timception/Drift/tree/main/precompiled_firmware/V2_Everything_Unlocked) for the *RIGHT* side into the drive that shows up after entering bootloader mode.  
 
  - After the firmware is done loading, you can unplug the keyboard and set the side switch to slave (SLV) and never care about it again.  
 
- After these steps have been done successfully - you could even snap the switches off with some cutting pliers to prevent yourself from accidentally switching them on in the future.  
<br/>  

---------------------------------------------------------------------------------  
![Drift_KBDFANS_EVA08_1920x1080](https://github.com/Timception/Drift/assets/84595044/8d15f7ea-c605-4f26-971c-0087e263e1d2)



Pixel Art by [OLIVlOUS](https://www.instagram.com/keebpixel) | [KO-FI](https://ko-fi.com/olivious)
---------------------------------------------------------------------------------

![DRIFT_Keyboard_EV01psd](https://github.com/Timception/Drift/assets/84595044/a8ad2528-249f-4310-a324-4c62dbdfb540)

![DRIFT_Keyboard_Kaiju](https://github.com/Timception/Drift/assets/84595044/a0f79aaa-8451-4e9c-bb01-142a24413e9a)



----====![ZANNIKB_LOGO](https://github.com/Timception/Drift/assets/84595044/16948fb5-0360-4244-a7d2-38ecee8af839)====----

I owe [ZANNIKB](https://www.instagram.com/zannikb/) a HUGE thanks for Cooler Animated versions of Firmware!
---------------------------------------------------------------------------------

![IMG_3612](https://github.com/Timception/Drift/assets/84595044/4112aebc-5a67-485c-86f4-9d734125b426)



Cool Wallpaper by my pal [Danm.edits](https://www.instagram.com/danm.edits)
---------------------------------------------------------------------------------
![DRIFT_DANMEDITS](https://github.com/Timception/Drift/assets/84595044/f156adec-f6c8-4baf-ab20-4583fb48fca4)



Special Thanks to [Tecsmith](https://github.com/Tecsmith) for making this keyboard even possible since the start, and for helping with the keyboard layout code.

Special Thanks to [TweetyDaBird](https://github.com/TweetyDaBird) for patiently helping with some issues when RP2040-Zero was still a new mcu for QMK.  

Inspired by Foostan's [Corne Keyboard](https://github.com/foostan/crkbd)  

The reversible pcb design from the [Sofle Keyboard](https://josefadamcik.github.io/SofleKeyboard/) was also an inspiring factor  
