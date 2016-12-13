# imgtool
imgtool for Mac

List of changes and structions to run:

0) git clone git@github.com:glukicov/imgtool.git

1) Changes imgetool.c in imgtool/src/common

```javascript
var s = "JavaScript syntax highlighting";
alert(s);
```

[line 10] ADD
 #include <sys/disk.h> //Mac specific

[line 561-562] COMMENT OUT and ADD
 //xRet = ioctl ( gFD, BLKGETSIZE64, &xImageSz );       //Linux
  xRet = ioctl(gFD, DKIOCGETBLOCKCOUNT, &pSize);  //Mac: 

[line 566] COMMENT OUT
 //*pSize = xImageSz / BLK_SIZE;  // Linux: no need to divide here

2) Changes to Makefile (to use gcc instead of clang)  gcc-> gcc.49; make sure you have gcc-4.9 installed with 
brew install gcc49

CC=gcc-4.9

3) Insert and unmount the SD card first 
diskutil list (to find e.g. dev/disk2 for the SD card) 

diskutil unmountDisk /dev/disk2

4) sudo ./imgtool /dev/disk2 format GoldenImage.bin

5) sudo ./imgtool /dev/disk2 add GoldenImage.bin GoldenImage.bin

Done. 
