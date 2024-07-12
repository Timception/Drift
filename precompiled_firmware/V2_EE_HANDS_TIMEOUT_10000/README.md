# Firmware only for Drift Keyboards without switches or jumpers near the 3.5mm connector jack.

=========================================================

Split Keyboard's with the RP2040-Zero microcontroller all have the issue where the keyboard may not be detected after a cold boot when using EE_HANDS versions of the firmware.

This version of the firmware should allow your EE_HANDS Drift Keyboard to work without having to unplug and replug the keyboard after a cold boot.

The only drawback is that you will have to wait 10 seconds before the keyboard will be usable after you plug it in.

The reason for this is because the computer cannot know which side is the master when it is booting up, so the 10-second wait solves this.

Some of the previous versions of the drift had a switch that allowed you to set one side to master and the other to slave,

but it was a hard concept to grasp for beginners of the hobby and as you can imagine, some people damaged their keyboard because they

adjusted the switches while the keyboard was powered and left it plugged in (cooked mcu as a result).

However the benefits that this chip has over the ancient Pro Micro was the reason I chose the RP2040-Zero for this board.


[Reference to the firmware modification](https://www.reddit.com/r/ErgoMechKeyboards/comments/11qxmn2/comment/jc6up8w/)


=========================================================
