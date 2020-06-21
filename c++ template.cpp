#include  <typeinfo>
// Define specializations for the Traits class template here.
template <class T>
struct Traits
{
    static std::string name(int i)
    {
        switch(static_cast<T>(i))
        {
            case static_cast<T>(0):
                if (typeid(T) == typeid(Color)) return "red";
                else return "apple";
            case static_cast<T>(1):
                if (typeid(T) == typeid(Color)) return "green";
                else return "orange";
            case static_cast<T>(2):
                if (typeid(T) == typeid(Color)) return "orange";
                else return "pear";
        }
        return "unknown";
    }
};
