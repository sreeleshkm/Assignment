#ifndef INCREMENT_H_
#define INCREMENT_H_

#include <iostream>

using namespace std;

template<class T>
class MyIncrement
{
private:
    T value;
public:
    MyIncrement(T val);
    void toIncrement();
    T getValue();
};

template<class T>
inline MyIncrement<T>::MyIncrement(T val)
{
    value = val;
}

template<class T>
inline void MyIncrement<T>::toIncrement()
{
    value++;
}

template<class T>
inline T MyIncrement<T>::getValue()
{
    return value;
}


#endif /* INCREMENT_H_ */
