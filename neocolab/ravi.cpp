#include <iostream>
#include <stack>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> s = {"cat", "bat", "apple", "dog"};
    std::stack<std::string> st;
    for (const std::string& word : st) {
        while (!st.empty() && st.top() > word) {
            std::string topWord = st.top();
            st.pop();
            
            st.push(topWord);
        }
        st.push(word);
    }

    std::vector<std::string> result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    std::cout << "Words in lexicographical order: " << std::endl;
    for (const std::string& word : result) {
        std::cout << word << std::endl;
    }

    return 0;
}
