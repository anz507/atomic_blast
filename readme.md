# Atomic Blast

![Atomic Blast](https://anz507.sirv.com/Images/IMG_3020_thumb.jpg)

![Atomic Blast Back](https://anz507.sirv.com/Images/IMG_2990_thumb.jpg)

*A short description of the keyboard/project*

An ortholinear keyboard with planck like keymaps with extra gimmicks.

Included prebuilt firmware: `atomic_blast_anz507.uf2` or you can compile using comand below.

* Keyboard Maintainer: [Ahmad Anshori](https://github.com/anz507)
* Hardware Supported:
    - Handwired
    - RP2040 microcontroller
* Hardware Availability (if you are around my country, just follow the link):
    - 1x [Raspberry Pi Pico RP2040](https://tokopedia.link/spW8kgkinEb)
    - 1x [EC-11 Rotary Encoder EC11 Audio Digital Potensiometer 5p D Handle 20mm](https://tokopedia.link/CeBLnGPR1Rb)
    - 52x [Diode 1N4148](https://tokopedia.link/2BAQzdzinEb)
    - 52x Any MX switches [SWITCH - AKKO MATCHA GREEN TEA - 3 PIN - 50g - PCB MOUNT - LINEAR](https://tokopedia.link/CP3IZIVR1Rb)
    - 52x Any keycaps [Keycap XDA Profile](https://tokopedia.link/f4nmNosjnEb)
    - 1x [Toggle Switch](https://tokopedia.link/jHQY0fgS1Rb)
    - 1x [LED Diode 5mm](https://tokopedia.link/T6JThjlS1Rb)
    - 1x [1k ohm resistor](https://tokopedia.link/MuabOSrS1Rb)
    - 1x [Female USB type C 4 pin](https://tokopedia.link/PVAogwBS1Rb)
    - 1x [Male USB type C 4 pin](https://tokopedia.link/hYexBECS1Rb)
    - [Jumper cables](https://tokopedia.link/h2Ytq9SinEb)
    - [18 gauge copper wire](https://tokopedia.link/tYikGZ7inEb)
    - [Shrink tube](https://tokopedia.link/kHjJH4bjnEb)
    - [USB C cable](https://tokopedia.link/q7gD8YnjnEb)
    - 3D Printed Plate (download them here: [Thingiverse](https://www.thingiverse.com/thing:6978466))


Make example for this keyboard (after setting up your build environment) using qmk:

    qmk compile -kb atomic_blast -km anz507

Flashing example for this keyboard:

     Hold BOOT button on RP2040 and plug in usb c cable
     Device will be detected like a USB flash drive on computer
     Copy and paste atomic_blst_anz507.uf2 to RP2040

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
