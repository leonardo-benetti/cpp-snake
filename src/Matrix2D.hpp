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
};
