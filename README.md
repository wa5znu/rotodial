# rotodial

Uses SparkFun MicroView dial widget and a Quadrature encoder

# Resources

- https://www.sparkfun.com/products/12923
- https://www.sparkfun.com/products/9117
- https://github.com/sparkfun/MicroView

- encoder code from http://www.circuitsathome.com/mcu/reading-rotary-encoder-on-arduino with fixes
(handles pins other than the first ones on a port, and doesn't double step)

Edit rotodial.ino and change the values of ENC_A ENC_B ENC_PORT ENC_SHIFT for your encoder pins.
The sketch as is uses pin 2 and 3, which are on Atmega 328 PORT B, and need SHIFT=2 to shift down to bit zero from bit 2.

# License

There was no license on http://www.circuitsathome.com/mcu/reading-rotary-encoder-on-arduino
but assuming it's MIT, license, this is too:

Copyright (C) 2014 Leigh L. Klotz Jr, WA5ZNU

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
