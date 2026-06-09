# Drift Keyboard V2

<p align="center">
  <img src="https://github.com/user-attachments/assets/d189a734-1031-49f4-bbe0-3047e1bf285d" alt="Drift_Violet_Alert" width="600"/>
  <br/>
  <em>A hearty 68-key split keyboard powered by <a href="https://github.com/vial-kb/vial-qmk">Vial-QMK</a> firmware.</em>
</p>

> 🎁 **Newer versions available:**  
> - [Drift Keyboard V3 (Wireless)](https://github.com/Timception/zmk-config-drift-v3-editor)  
> - [Drift Keyboard V3 (Wired)](https://github.com/Timception/Drift-v3-vial)  
> - [Drift Keyboard V4 (coming soon)](#)  
>
> 🌐 Shipping internationally — DM me on [Instagram](https://www.instagram.com/majin.keyboards/).

---

## Table of Contents

- [Specifications](#specifications)
- [Getting Started](#getting-started)
- [Versions](#versions)
- [Updating Early Versions](#updating-early-versions)
- [Acknowledgments & Licensing](#acknowledgments--licensing)

---

## Specifications

| Feature            | Details                                                                  |
| ------------------ | ------------------------------------------------------------------------ |
| **MCU**            | RP2040-ZERO                                                              |
| **Switch Support** | 5‑pin or 3‑pin Cherry MX switches (hotswap sockets)                      |
| **OLED**           | SSD1306 128×64 (horizontal)                                              |
| **Encoders**       | Panasonic EVQWGD001 roller encoder & EC11 encoder                        |
| **Serial**         | TRS / TRRS 3.5 mm audio jacks                                            |
| **Layout**         | 68 keys (split)                                                          |
| **Dimensions**     | 128 mm × 196 mm                                                         |
| **Firmware**       | [Vial-QMK](https://github.com/vial-kb/vial-qmk)                          |

### PCB Design Credits

- Reversible PCB design inspired by the [Sofle Keyboard](https://josefadamcik.github.io/SofleKeyboard/).
- Layout code assistance from [Tecsmith](https://github.com/Tecsmith).

### Laser-Cut Files

- [Adobe Illustrator files (.ai)](/Plate/) for custom acrylic plates.

---

## ⚠️ Important Safety Notice

> **Never plug or unplug the 3.5 mm audio cable while the keyboard is connected via USB-C.** Doing so can permanently damage the keyboard.  
> When in doubt, **unplug USB-C first** — this simple habit will keep your hardware safe.

**Why 3.5 mm is preferred over USB-C for splitting:**  
3.5 mm connectors are more durable, easier to replace, and do not require advanced soldering. Many builders learn this the hard way after using or repairing split keyboards. If you still worry about this issue, consider the [wireless version](#) instead.

> **If damage occurs:** the MCU can be replaced with a heat gun, but removing residual solder from pin holes is time-consuming. Always flash the firmware on the replacement MCU *before* installing it.

---

## Getting Started

1. **Download the [Vial App](https://get.vial.today/download/)** — this is essential for viewing and editing your keymap.
2. **Understand layers:** This keyboard has 4 layers (0–3). Layer 0 is the default. Use `MO(layer)` keys to momentarily switch layers; set the corresponding keys above to `KC_TRANS` (the triangle symbol in Vial).
3. **Thumb cluster:** The three curved keys on each half are the thumb cluster. By default, the middle key on each half acts as Space.
4. **Audio toggle:** Press "Audio Toggle" (found on the last layer, then on the left encoder) to enable/disable beeping sounds.
5. **Music Mode:** Press the left encoder on the default layer to toggle [Music Mode](https://docs.qmk.fm/features/audio#music-mode). Your keyboard becomes a musical instrument — press the same encoder again to exit. Audio must be enabled to hear anything. These toggles are accessible in the **Quantum** section of the Vial app. (Disabled by default in newer firmware to avoid accidental activation.)

---

## Flashing Firmware (RP2040-Zero)

> Flash one side at a time — **do not plug in the 3.5 mm cable** during flashing.

1. **Hold the BOOT button** while plugging in the USB cable.
2. A removable drive will appear on your computer.
3. **Drag and drop** the appropriate `.uf2` firmware file onto that drive.
4. The drive will disappear once flashing is complete.

> **Important:** If your keyboard has an unused MCU, flash the firmware **before** soldering it onto the PCB.

---

## Versions

| Version | Description                                                                 | Firmware / MCU                    |
| ------- | --------------------------------------------------------------------------- | --------------------------------- |
| **V4**  | Trackball & dongle-equipped version                                         | [Drift V4](https://github.com/Timception/drift-v4-trackball-dongle) |
| **V3**  | Wireless version with Bluetooth MCU (Nice!Nano) using ZMK firmware          | [ZMK Config](https://github.com/Timception/zmk-config-drift-v3-editor) |
| **V3**  | Wired version with RP2040 Pro Micro using Vial-QMK firmware                 | [Vial-QMK Config](https://github.com/Timception/Drift-v3-vial) |
| **V2**  | Original Drift Keyboard (this model) with RP2040-Zero running Vial-QMK      | [Vial-QMK](https://github.com/vial-kb/vial-qmk) |
| **Early** | Versions with a Master/Slave switch beside the OLEDs                       | See [Updating Early Versions](#updating-early-versions) |

---

## Updating Early Versions

> If your Drift Keyboard has physical **Master (MSTR) / Slave (SLV) switches** beside the OLEDs, you can upgrade the firmware and forget those switches forever.

### Step 1: Left Half
- Set the side switch to **MSTR**.
- Plug in USB-C (no 3.5 mm cable).
- Hold **MO(1)** and press **RESET** (top‑left button) to enter bootloader mode.
- Drag and drop 🠖 `majin_drift_vial-LEFT.uf2`
- After the drive disappears, unplug and set the switch to **SLV**.

### Step 2: Right Half
- Set the side switch to **MSTR**.
- Plug in USB-C.
- Hold **MO(2)** and press **RESET** (top‑right button).
- Drag and drop 🠖 `majin_drift_vial-RIGHT.uf2`
- After the drive disappears, unplug and set the switch to **SLV**.

> You can now safely remove (or even snap off) the switches to prevent accidental switching in the future.

**Pre-compiled firmware files:**
- [Left half](https://github.com/Timception/Drift/blob/main/precompiled_firmware/V2_Smooth_Strafe/majin_drift_vial-LEFT.uf2)
- [Right half](https://github.com/Timception/Drift/blob/main/precompiled_firmware/V2_Smooth_Strafe/majin_drift_vial-RIGHT.uf2)

---

## Media & Gallery

![Drift_Cyan_Purple](https://github.com/Timception/Drift/assets/84595044/90241f5b-bc75-43a6-833a-c3984175a96c)

![DRIFT_Keyboard_EV01psd](https://github.com/Timception/Drift/assets/84595044/a8ad2528-249f-4310-a324-4c62dbdfb540)

![DRIFT_Keyboard_Kaiju](https://github.com/Timception/Drift/assets/84595044/a0f79aaa-8451-4e9c-bb01-142a24413e9a)

![KBDFANS_EVA08](https://github.com/Timception/Drift/assets/84595044/8d15f7ea-c605-4f26-971c-0087e263e1d2)

> Pixel art by [OLIVlOUS](https://www.instagram.com/keebpixel) · [Ko-fi](https://ko-fi.com/olivious)

---

## Acknowledgments & Licensing

This project builds upon the work of several open‑source projects:

- [QMK Firmware](https://qmk.fm/) ([GitHub](https://github.com/qmk/qmk_firmware)) — The foundation of modern custom keyboard firmware.
- [Vial-QMK](https://github.com/vial-kb/vial-qmk) — Extends QMK with real‑time keymap editing.

All third‑party code remains under their respective licenses.

### Special Thanks

- [Tecsmith](https://github.com/Tecsmith) — Layout code and foundational support.
- [TweetyDaBird](https://github.com/TweetyDaBird) — Help with RP2040-Zero early adoption issues.
- [ZANNIKB](https://www.instagram.com/zannikb/) — Cooler animated firmware versions.
- [Danm.edits](https://www.instagram.com/danm.edits) — Wallpaper.
- Foostan ([Corne Keyboard](https://github.com/foostan/crkbd)) — Inspiration.
- Josef Adamcik ([Sofle Keyboard](https://josefadamcik.github.io/SofleKeyboard/)) — Reversible PCB design inspiration.

---

<p align="center">
  <img src="https://github.com/Timception/Drift/assets/84595044/16948fb5-0360-4244-a7d2-38ecee8af839" alt="ZANNIKB Logo" width="100"/>
</p>