#include <iostream>
#include <vector>
#include <algorithm> // 用于std::max_element

int main() {
    // 创建一个int类型的vector
    std::vector<int> numbers;

    // 向vector中添加一些元素
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // 打印vector中的所有元素
    std::cout << "Vector elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 计算vector中所有元素的总和
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    std::cout << "Sum of elements: " << sum << std::endl;

    // 查找vector中的最大值
    int max_value = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "Max value in vector: " << max_value << std::endl;

    // 清空vector
    numbers.clear();

    // 检查vector是否为空
    if (numbers.empty()) {
        std::cout << "Vector is empty." << std::endl;
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    return 0;
}