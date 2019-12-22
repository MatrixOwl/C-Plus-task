# practice 2.3.2

* 2.23
可以用try语句，在try语句中放入'if(p)...'
若程序执行，则p指向合法对象；
若出现catch的内容，则p指向非法对象

* 2.24
p合法，因为‘void *'可以存放任意对象地址
但'long *'只能存放长整型，i为普通整型，i,lp类型不同

***

# practice 2.5.2

* 2.35
j 是整型
k 是整型常量
p 是整型常量的指针
j2　是整型
k2 是整型
code:

```C++
#include <iostream>
#include <typeinfo>

int main() {
    const int i = 42;
    auto j = i; auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;
    std::cout << "i : " << typeid(i).name() << std::endl;
    std::cout << "j : " << typeid(j).name() << std::endl;
    std::cout << "k : " << typeid(k).name() << std::endl;
    std::cout << "p : " << typeid(p).name() << std::endl;
    std::cout << "j2: " << typeid(j2).name() << std::endl;
    std::cout << "k2: " << typeid(k2).name() << std::endl;
    return 0;
}
```

***

# practice 3.2.2

* 3.4

code:

```C++
#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    if (a == b) {
        std::cout << "same" << std::endl;
    } else if (a > b) {
        std::cout << "a biger than b" << std::endl;
    } else {
        std::cout << "b biger than a" << std::endl;
    }
    return 0;
}
```

```C++
#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    auto a = s1.size();
    auto b = s2.size();
    if (a == b) {
        std::cout << "same" << std::endl;
    } else if (a > b) {
        std::cout << s1 << std::endl;
    } else {
        std::cout << s2 << std::endl;
    }
    return 0;
}
```

* 3.5

code:

```C++
#include <iostream>
#include <string>

int main() {
    std::string s, res;
    while (std::cin >> s){
        res += s;
    }
    std::cout << res <<std::endl;
    return 0;
}
```

```C++
#include <iostream>
#include <string>

int main() {
    std::string s, res;
    while (std::cin >> s) {
        if (res.size()) {
            res += res + " " + s;
        } else {
            res += s;
        }
    }
    std::cout << res <<std::endl;
    return 0;
}
```

***

# practice 6.2.1

* 6.10
  
code:

```C++
#include <iostream>

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(){
    int a = 1, b = 2;
    int *i = &a, *j = &b;
    swap(i, j);
    std::cout << a << b << std::endl;
    return 0;
}
```

***

# practice 6.2.3

* 6.19

a: 不合法，调用时参数过多
b: 合法
c: 合法
d: 合法


# practice 7.2

* 7.16

可以包含多个访问说明符，位置无规定
构造函数和陈元函数应该在public后
数据和部分实现函数应该在private后

***

# practice 7.5.4

* 7.49

a: 正确执行
b: 报错
c: 报错

***

# practice 7.6
* 7.58

错误：
1. rate和vec的初始化错误，不是静态常量成员
2. example.C的文件有错误，应该给出静态成员的初始数值
