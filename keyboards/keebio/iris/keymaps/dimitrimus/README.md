# Compile and flash
```
qmk compile
qmk flash
```

# Useful commands
Generate json with layouts from keymap.c source file to visualize at web constructor https://config.qmk.fm
```
qmk c2json -km QWERTY -kb keebio/iris/rev4 keymap.c > dimitrimus_iris.json
```

Generate keymap.c source file from json with layouts downloaded from web constructor https://config.qmk.fm
```
qmk json2c dimitrimus_iris.json > keymap.c
```

# Useful links
Here is documentation for key codes for keymap.c: https://docs.qmk.fm/#/keycodes
