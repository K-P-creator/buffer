#include <sstream>

// buffered output to reduce syscalls
void bufferOutput(LL<int>& l)
{
    ostringstream buffer;
     
    for (auto it = l.begin(); it != nullptr; it++){
        buffer << *it << ' ';
    }
    cout << buffer.str();
}
