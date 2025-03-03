#include <string>

// buffered output to reduce syscalls
void bufferOutput(LL<int>& l)
{
    string buffer = {};
    for (auto it = l.begin(); it != nullptr; it++)
    {
        //default size is ~1 mil chars
        if (buffer.size() >= 1000000)
        {
            cout << buffer;
            buffer.clear();
        }
        buffer.insert(buffer.size(), to_string(*it));

        // switch this for '\n' if you want... 
        // it will take longer to print tho
        buffer += ' ';
    }
    // print any remaining 
    cout << buffer;
    return;
}