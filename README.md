# KaldiDroidDemo

The scaffold project for Android apps to explore [Kaldi](http://kaldi-asr.org/).

Currently, the `jniLibs` folder contains all the dynamic link libraries target
on ARM. You can simply prune them as needed.

For more info about compiling those libraries on Android, please check 
[here](https://www.jianshu.com/p/a896bc4c3c14) and [the official doc](https://github.com/kaldi-asr/kaldi/wiki).



Note: 
In order to generate the related signature for the native methods, please 
go to folder `app/build/intermediates/javac/debug/compileDebugJavaWithJavac/classes` ,
run from command line :
```
javah `full-path-to-your-class`
```