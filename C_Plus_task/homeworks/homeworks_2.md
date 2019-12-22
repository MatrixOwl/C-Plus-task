# HOMEWORKES

* 9.1
    (a) 由于单词定量，所以list更合适
    (b) 由于需要头尾操作，deque更适合
    (c) 数量未知且要排序，vector更合适

* 9.20
    ``` C++
    #include <iostream>
    #include <list>
    #include <deque>

    int main() {
        std::list<int> all_list = {1, 2, 3, 4, 5, 6};
        std::deque<int> o_deque, j_deque;
    
        for (auto iter = all_list.cbegin(), iter != all_list.cend(), iter++){
            if (*iter % 2 == 0) {
                o_deque.push_back(*iter);
            } else {
                j_deque.push_back(*iter);
            }
        }
        return 0;
    }
    ```
* 9.29
    vec.resize(100) 会在vec末尾补充75个元素
    vec.resize(10)  会删除末尾的90个元素

* 9.43
    ``` C++
    #include <iostream>
    #include <vector>
    #include <string>
    
    void work(std::string &s, std::string &oldVal, std::string &newVal) {
        auto iter = s.begin();
        while (iter <= s.end()) {
            auto iter1 = iter;
            auto iter2 = oldVal.begin();
	    while (iter2 != oldVal.end() && *iter2 == *iter1) {
	    	iter1++; iter2++;
    	    }
	    if (iter2 == oldVal.end()) {
	    	iter = s.erase(iter, iter1);
		iter2 =  newVal.end();
		do {
		    iter2--;
		    iter = s.insert(iter, *iter2);
		} while (iter2 > newVal.begin());
		iter += newVal.size();
	    } else { iter++; }
        }
    }
    ```

* 10.3
   ```C++
   #include <iostream>
   #include <fstream>
   #include <algorithm>
   #include <vector>
   
   void work (){
        std::vector<int> num = {1, 2, 3};
	std::cout << std::accumulate(num.begin(), num.end(), 0) << std::endl;
   } 
   ```

* 10.15
    ```C++
    #include <iostream>
    
    void add (int a, int b) {
        auto sum = [a] (int b) { return a + b; };
 	std::cout << sum(b) << std::endl;
    }
    ```

* 10.34
    ```C++
    #include <iostream>
    #include <fstream>
    #include <vector>
    #include <algorithm>
    #include <string>
    int main() {
        std::vector<int> vec;
	int num;
	std::string filename;
	ifstream file (filename);
	while (file >> num) {
	    vec.push_back(num);
	}
	for (auto iter = vec.begin(); iter != vec.end(); iter++) {
	    std::cout << *iter << std::endl;
	}
    }
    ```

* 11.12
    ```C++
    #include <iostream>
    #include <fstream>
    #include <vector>
    #include <algorithm>
    #include <string>
    #include <utility>

    int main() {
       	std::string filename;
	std::cin >> filename;
	ifstream file (filename);
	std::vector<std::pair<std::string, int>> in;
	std::string str;
	int num;
	while (file >> str && file >> num) {
	    in.push_back(std::pair<std::string, int> (str, num));
	}
    }
    ```

* 11.17
    一和二的调用使用了迭代器向get中加入vector中的元素，非法
    三和四合法

* 11.38
```C++
#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

int main(int argc, char *argv[]) {
    ifstream in (argv[1])
    std::unordered_map<string, size_t> count;
    std::string w;
    while (in >> w) {
        count[w]++;
    }
    return 0;
}
```

* 13.12
    三次析构，item1，item2，accum被析构

* 13.18
```C++
#include <iostream>
#include <string>

class Employee {
 private:
    static int num = 0;
    string name;
    int ID;
 public:
    Employee () {ID = num++;}
    Employee (const string &n) {name = n; ID = num++;}
}
```

* 13.58
```C++
#include <iostream>
#include <vector>
#include <algorithm>

class Foo {
 private:
    std::vector<int> data;
 public:
    Foo sorted() const &;
    Foo sorted() &&;
}

Foo Foo::sorted() const & {
    return Foo(*this).sorted();
}

Foo Foo::sorted() && {
    sort(data.begin(), data.end());
    return *this;
}
```

* 14.3
(1) string
(2) string
(3) vector
(4) string

* 14.20
```C++
#include <iostream>

class sales_data {
 public:
    sales_data operator+(const sales_data &a, const sales_data &b) {
        sales_data c = a;
	a += b;
	return c;
    }
    
    sales_data operator+=(const sales_data &a) {
    	*this += a;
	return *this;
    }
}
```

* 14.38
```C++
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

class Work {
 private:
    int d;
 public:
    bool match (std::string to_match);
    void count (std::string file);
}

bool Work::match (std::string to_match) {
    if (to_match.len() == Work::d) { return True; }
    return False;
}

void Work::count (std::string file) {
    ifstream in (flie);
    std::string word;
    int con[11] = {0};
    while (in >> word) {
    	con[word.len()]++; 
    }
    for (i=1; i<=10; i++) {
    	std::cout<<i<<"   "<<con[i]<<std::endl;
    }
}
```

* 14.52
    使用了longdouble的+

* 15.12
    有必要，使用override可以保证覆盖原有虚函数，定义final后可以避免被其他派生类覆盖

* 15.16
```C++

class Limited_quote: public Disc_quote {
 public:
    Disc_quote(book, price, qty, rate) {}
}

```
