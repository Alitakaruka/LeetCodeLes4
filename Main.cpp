#include<iostream>
#include<vector>
#include<algorithm>

double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
	for (int element : nums1) {
		nums2.push_back(element);
	}
	std::sort(nums2.begin(), nums2.end(), [](int a, int b) {return a < b; });
	auto size = nums2.size();
	if (size % 2 == 0) {
		return (double)(nums2[size / 2] + nums2[(size / 2) - 1]) / 2;
	}

	return nums2[size / 2];
}

int main() {
	std::vector<int> num1 = {1,3};
	std::vector<int> num2 = {2};
	double resault = findMedianSortedArrays(num1,num2);
}