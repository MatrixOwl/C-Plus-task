# HOMEWORKS

* 8.4
```C++
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main() {
    std::string filename;
    std::cin >> filename;
    ifstream file (filename);
    std::string line;
    std::vector<std::string> lines;
    while (getline(file, line)) {
    	lines.push_back(line);
    }
    file.close();
    return 0;
}
```

* 8.9
```C++
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

int main() {
    std::string filename;
    std::cin >> filename;
    ifstream file (filename);
    std::string line;
    std::vector<std::string> lines;
    while (getline(file, line)) {
    	lines.push_back(line);
    }
    file.close();
    std::vector<std::string>::const_iterator read = lines.begin();
    while (read != lines.end()) {
	istringstream line_str(*read);
	std::string w;
	while (line_str >> w) {
	    std::cout<<w<<std::endl;
	}
	read++;
    }
    return 0;
}
```

* 16.11
需要实例化List类，即使用class ListListItem<elemType>

* 16.12

* 16.19
```C++
#include <iostream>

using namespace std;

template <typename Type>
int work (const Type &in) {
    for (Type::size_type i=0; i<in.size(); i++) {
    	cout<<in.at(i)<<endl;
    }
}
```

* 16.41
```C++
template <typename type1, typename type2>
auto sum(type1 a, type2 b) -> decltype(a+b) {
    return a+b;
}
```

* 16.62

* 12.10
调用正确

* 12.15

* 12.17
a.错误，不可以用int作为指针
b.正确
c.正确
d.正确
e.正确
f.正确

* 12.18
unique-ptr 不可以拷贝给另外一个对象，所以没有release

* 12.19

* 12.30
