HaloPadFoo
==========

The HaloPad is built using 1 half of a foobar and a custom macropad keymap dedicated to playing the Halo masterchief colection on the pc. 

![This was an Image of the HaloPadFoo build](https://github.com/adam-p/markdown-here/raw/master/src/common/images/icon48.png "HaloPadFoo Image")

### why? 
It started that I just wanted to kill some time and build something with some spares while I ponder on other quandries. It ended up becoming way more useful and fun to use than I imagined. The layout made playing the mcc way more comfortable and enjoyable compared to using the laptop keyboard or a controller. It packs up smaller than both and gaming with a half decent switch just feels damn good.

### Layout
```
Layer 0
,----------------------------------.
| ESC  |   1  |   2  |   3  |   4  |
|------+------+------+------+------|
|   R  |   Q  |   W  |   E  |   F  |
|------+------+------+------+------|
|LCTRL |   A  |   S  |   D  |SPACE |
`----------------------------------'

Layer 1 (LCTRL hold to access)
,----------------------------------.
|      |      |      |      |      |
|------+------+------+------+------|
|      |      |  UP  |      |      |
|------+------+------+------+------|
|      | LEFT | DOWN | RIGHT|      |
`----------------------------------'

```

### Parts List

+ 1 x Foo Bar PCB
+ 1 x Foo Bar top plate
+ 1 x Foo Bar Butt plate
+ 1 x Pro Micro or compatable controller with atmega32u4 chipset
+



```
-kb 40percentclub/foobar
```

built using QMK Firmware 0.9.15

> Note: Currently when flashing all 40percentclub boards. the keymap is reversed on the board. I have accomidated for this in the keymap.c instead of fixing the issue. This issue may be fixed in later versions of the QMK.

### Thanks to:

### Ref