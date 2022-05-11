/*
https://fullstackuser.com/questions/138379/what-is-the-best-modern-c-approach-to-construct-and-manipulate-a-2d-array
https://stackoverflow.com/questions/53038457/what-is-the-best-modern-c-approach-to-construct-and-manipulate-a-2d-array
https://stackoverflow.com/a/53038618
*/
#include <vector>

template<typename T>
class Matrix2D
{
private:
    std::vector<T> v;
    std::size_t stride;
public:
    Matrix2D(std::size_t row, std::size_t col)
        : v(row * col), stride(col) {}
    
    T& operator()(std::size_t row, std::size_t col)
        { return v[(row * stride) + col]; }

    T const& operator()(std::size_t row, std::size_t col) const
        { return v[(row * stride) + col]; }

    std::size_t col_size() const { return stride; }
    std::size_t row_size() const { return v.size() / stride; }

    auto begin() { return std::begin(v); }
    auto end() { return std::end(v); }

    auto begin() const { return std::begin(v); }
    auto end() const { return std::end(v); }

    auto cbegin() const { return std::cbegin(v); }
    auto cend() const { return std::cend(v); }
};
