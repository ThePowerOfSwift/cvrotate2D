cvrotate2D
==========

The library **cvrotate2D** is an OpenCV library for rotating a matrix without cropping.

How to use
----------

<i>void rotate2D(InputArray <b>src</b>, OutputArray **dst**, double <b>degrees</b>)</i>

Example
-------

Compile the test with the following command:

```
g++ test.cpp cvrotate2D.cpp -lopencv_core -lopencv_highgui -lopencv_imgproc
```

And then execute ```./a.out``` to obtain a file with the image rotated.
