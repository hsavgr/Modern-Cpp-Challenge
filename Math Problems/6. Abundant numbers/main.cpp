#include <iostream>
#include <vector>

std::vector<int> get_divisors(int n) {
    std::vector<int> divisors{1}; // 1 is a divisor of every number
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int sum_of_divisors(const std::vector<int>& divisors)
{
    int sum = 0;
    for (int divisor : divisors) {
        sum += divisor;
    }
    return sum;
}

std::vector<int> print_abundant_numbers(int limit)
{
    std::vector<int> sum;
    for (int num = 12; num <= limit; ++num)
    {
        std::vector<int> divisors = get_divisors(num);
        int div_sum = sum_of_divisors(divisors);
        if (div_sum > num) {
            sum.push_back(div_sum);
        }
    }

    return sum;
}

int main()
{
    int limit;
    std::cout << "Enter the upper limit to find abundant numbers:> ";
    std::cin >> limit;
    std::vector<int> abundantNumbersList  = print_abundant_numbers(limit);

    if (!abundantNumbersList.empty())
    {

    } else

    return 0;
}
