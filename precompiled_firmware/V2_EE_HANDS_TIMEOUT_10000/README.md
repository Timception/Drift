# Firmware only for Drift Keyboards without switches or jumpers near the 3.5mm connector jack.
![EE_HANDS_Firmware](https://github.com/user-attachments/assets/15ca2be5-e0aa-4674-acca-d5c3f329fe20)

=========================================================

Split Keyboard's with the RP2040-Zero microcontroller all have the issue where the keyboard may not be detected after a cold boot when using EE_HANDS versions of the firmware.

This version of the firmware should allow your EE_HANDS Drift Keyboard to work without having to unplug and replug the keyboard after a cold boot.

The only drawback is that you'll have to wait 10 seconds before the keyboard becomes usable after plugging it in. This delay is necessary because the computer cannot immediately determine which side is the master during boot-up, and the 10-second wait resolves this issue.

Previous versions of the Drift keyboard had a switch to set one side as the master and the other as the slave. However, this was confusing for beginners, and some users damaged their keyboards by adjusting the switches while the keyboard was powered, resulting in a cooked MCU.

Despite this minor inconvenience, the benefits of the RP2040-Zero chip over the older Pro Micro were the key reason for its selection in this board.


[Reference to the firmware modification](https://www.reddit.com/r/ErgoMechKeyboards/comments/11qxmn2/comment/jc6up8w/)


=========================================================
