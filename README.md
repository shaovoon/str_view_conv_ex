# C++17 string_view to integer/float example

**Note:** using boost::string_ref instead

```cpp
#include <iostream>
#include <boost/spirit/include/qi.hpp>
#include <boost/utility/string_ref.hpp> 

bool str_to_value(const boost::string_ref& src, double& dest)
{
    namespace qi = boost::spirit::qi;

    return qi::parse(src.cbegin(), src.cend(), qi::double_, dest);
}

bool str_to_value(const boost::string_ref& src, int& dest)
{
    namespace qi = boost::spirit::qi;

    return qi::parse(src.cbegin(), src.cend(), qi::int_, dest);
}

int main(int argc, char *argv [])
{
    boost::string_ref srn("123");
    int n = 0;
    if (str_to_value(srn, n))
    {
        std::cout << n << std::endl;
    }

    boost::string_ref srd("123.456");
    double d = 0.0;
    if (str_to_value(srd, d))
    {
        std::cout << d << std::endl;
    }
    return 0;
}
```
