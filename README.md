# Text Editor

A text-editing app developed in QT, which allows you to  Bold / Unbold, Subscript and superscript to an individual text.

  - Input a text.
  - Use the features to edit the text.

### GNU/Linux and Qt version

  - Compiled and Tested on Manjaro 21.2.2 with Qt 5.15.2.

### Installation
* Install qt5:
```sh
$ pacman -Sy qt5
```
* Go to folder "QT_Text_Editor", use qmake and make to create executable:
```sh
$ cd QT_Text_Editor
$ qmake QT_Text_Editor.pro
$ make
```

### How to run the code?

* Execute the executable file created above
```sh
$ ./QT_Text_Editor
```

### What has been done?

* A TextEdit is used that occupies the whole screen of the widget. 
* Four QActions have been implemented for the following actions:
    * Bold 
    * Unbold
    * Subscript
    * SuperScript

### Issues / Challenges ? 

1. Subscript / SuperScript only modify the selected text and render the remaining text as plain text.

### Features 

1. Bold / unbold selected text.
2. Subscript and superscript selected text.
3. Displays the Resume in the default PDF Viewer of the Desktop.