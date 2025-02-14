#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief prints the elements in the array and their memory locations
 * 
 * @param size - the number of elements in the array
 */
void printMemVec(vector<int> &vec, int size) {
    for(int i = 0; i < vec.size(); i++) {
        printf("Value :%i at Memory Location: %p\n", vec[i], &vec[i]);
    }

}

void incVecBy10(vector<int> &vec, int size) {
    for(int i = 0; i < size; i++) {
        vec[i] += 10; 
    }
}

int main() {
    const int size = 5;
    vector<int> vec(size);
    for(int i = 0; i < size; i++) {
        vec[i] = 100 + i;
    }
printf("Before Increment------------\n");
printMemVec(vec, size);
incVecBy10(vec,size);
printf("After Increment------------\n");
printMemVec(vec,size);
vec.pop_back();
printf("After Pop------------\n");
printMemVec(vec,size);
vec.push_back(101);
vec.push_back(102);
printf("After Push------------\n");
printMemVec(vec,size);

return 0;
}