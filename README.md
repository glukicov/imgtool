# imgtool
imgtool for Mac

Loads firmware (GoldenImage.bin) to an SD card to be installed on one of the logic boards.

### Instructions:

```
git clone git@github.com:glukicov/imgtool.git
 ```
```
make clean
```

```
make Board=FC7_0
```

```
cd bin
```

Insert and unmount the SD card first 
 ```c++
diskutil list (to find e.g. dev/disk2 for the SD card) 
```
 ```c++
diskutil unmountDisk /dev/disk2
```
 
 ```c++

sudo ./imgtool /dev/disk2 format GoldenImage.bin
```

 
 ```c++
sudo ./imgtool /dev/disk2 add GoldenImage.bin GoldenImage.bin
```


### LIST OF CHANGES MADE

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


