#include <iostream>   //brackets
#include <stack>

bool brackets(char arr[], int n)
{
    std::stack<char> st;
    for(int i = 0; i < n; ++i) {
        if(arr[i] == '(' ||
           arr[i] == '[' ||
           arr[i] == '{') {
            st.push(arr[i]);
        } else if((!st.empty() && st.top() == arr[i]-1) ||
                  (!st.empty() && st.top() == arr[i]-2)) {
                st.pop();
        } else return false;
    }

    if(st.empty()) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    char arr[] = {"{[({})]}"};
    int size = (sizeof(arr) / sizeof(arr[0])) - 1;
    if(brackets(arr, size)) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
