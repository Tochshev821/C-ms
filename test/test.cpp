
#include <iostream>
/// решим квадратное уравнение
unsigned sqrt_int(long L)// вычисление квадратного корня из int переменной
{
	unsigned div = 1, rslt = 0;
	while (L > 0)
	{
		L -= div, div += 2;
		rslt += L < 0 ? 0 : 1;
	}
	return rslt;
}

int f(int& a, int& b, int& c, int& root1, int& root2) { // вычисление дискриминанта, поиск корней
    double d = b*b - 4 * a * c;
    if (d > 0) {
        root1 = ((-1 * b) + sqrt_int(d)) / (2 * a);
        root2 = ((-1 * b) - sqrt_int(d)) / (2 * a);
        return 2;
    }
    if (d == 0) {
        root1 = -1 * (b / (2 * a));
        return 1;
    }
    return 0;
}

int main() {
    int a, b, c;
    a = 2; //первый коэффициент
    b = 5; //второй коэффициент
    c = -3; //свободный член

    int r1, r2; // корни 
    int root_count = f(a, b, c, r1, r2);
    std::cout << root_count;
    return 0;
}
