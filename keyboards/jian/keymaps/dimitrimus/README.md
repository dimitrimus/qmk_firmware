# Compile and flash
```
qmk compile -kb jian/rev2 -km dimitrimus
qmk flash -kb jian/rev2 -km dimitrimus
```

# Useful commands
Generate json with layouts from keymap.c source file to visualize at web constructor https://config.qmk.fm
```
qmk c2json -km QWERTY -kb jian/rev2 keymap.c > dimitrimus_jian.json
```

Generate keymap.c source file from json with layouts downloaded from web constructor https://config.qmk.fm
```
qmk json2c dimitrimus_jian.json > keymap.c
```

# Useful links
Here is documentation for key codes for keymap.c: https://docs.qmk.fm/#/keycodes
