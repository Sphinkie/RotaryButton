# API description

-----
```c++
Rotary::Rotary(int pin1, int pin2, int pin3=0, int pin4=0)
```

Constructor for button with  4 positions max.

-----
```c++
int Rotary::readPosition()
```

Read the position of the button. Should return a value from 1 to 4. Returns 0 if failed.

-----
```c++
int Rotary::getValue()
```

Returns the most recent value read.

-----
```c++
int Rotary::getLastValue()
```

Returns the previous value read.

-----
```c++
bool Rotary::hasChanged()
```

Returns _True_ if the position has changed since the last call to the function.



Available on GitHub @Sphinkie/RotaryButton