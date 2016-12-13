# imgtool
imgtool for Mac

List of changes and instructions:

-- ---INSTRUCTIONS OF USE ------

0) git clone git@github.com:glukicov/imgtool.git

1) make cleaen

2) make Board=FC7_0

3) cd bin


3) Insert and unmount the SD card first 
 ```c++
diskutil list (to find e.g. dev/disk2 for the SD card) 
```
 ```c++
diskutil unmountDisk /dev/disk2
```
4) 
 ```c++

sudo ./imgtool /dev/disk2 format GoldenImage.bin
```

5) 
 ```c++
sudo ./imgtool /dev/disk2 add GoldenImage.bin GoldenImage.bin
```


------------- LIST OF CHANGES MADE -------------

A) Changes to imgetool.c in imgtool/src/common


[line 10] 
```c++
 #include <sys/disk.h> //Mac specific
```
[line 561-562] 
 ```c++
 //xRet = ioctl ( gFD, BLKGETSIZE64, &xImageSz );       //Linux
  xRet = ioctl(gFD, DKIOCGETBLOCKCOUNT, &pSize);  //Mac: 
```

[line 566]
 ```c++
 //*pSize = xImageSz / BLK_SIZE;  // Linux: no need to divide here
```

B) Changes to Makefile (to use gcc instead of clang)  gcc-> gcc.49; make sure you have gcc-4.9 installed with 
brew install gcc49
 ```c++
CC=gcc-4.9 


