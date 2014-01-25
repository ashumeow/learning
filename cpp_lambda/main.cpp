
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
    using namespace std;

    vector<const char *> x = {
        "Hello",
        "Goodbye",
        "Adiue",
        "Vvat",
        "Say",
        "Therefore"
    };

    auto comp = [](const char *a, const char *b) -> int { return a[1] < b[1]; };
    sort(x.begin(), x.end(), comp);

    copy(x.begin(), x.end(), ostream_iterator<const char *>(cout, " "));
    cout << "\n" << endl;
    return 0;
}

