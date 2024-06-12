#include <iostream>

using namespace std;

// تعریف تابع inRange
template <typename T>
int inRange(T x, T low, T high) {
    if (x >= low && x <= high) { // بررسی اینکه آیا عدد x در محدوده [low, high] قرار دارد یا نه
        return 0; // اگر x در محدوده قرار دارد، مقدار 0 برگشت داده می‌شود
    }
    else if (x < low) { // بررسی اینکه آیا عدد x کمتر از low است یا نه
        return -1; // اگر x کمتر از low باشد، مقدار -1 برگشت داده می‌شود
    }
    else { // در غیر این صورت، x باید بزرگتر از high باشد
        return 1; // اگر x بزرگتر از high باشد، مقدار 1 برگشت داده می‌شود
    }
}

int main() {
    int x_int = 5; // مقدار ورودی نمونه از نوع عدد صحیح
    char x_char = 'c'; // مقدار ورودی نمونه از نوع کاراکتر
    int low_int = 2; // حد پایین محدوده
    char low_char = 'a'; // حد پایین محدوده به صورت کاراکتری
    int high_int = 8; // حد بالا محدوده
    char high_char = 'f'; // حد بالا محدوده به صورت کاراکتری

    // فراخوانی تابع inRange برای ورودی‌های صحیح و چاپ نتیجه
    cout << "Result for integer input: " << inRange(x_int, low_int, high_int) << endl;

    // فراخوانی تابع inRange برای ورودی‌های کاراکتر و چاپ نتیجه
    cout << "Result for character input: " << inRange(x_char, low_char, high_char) << endl;

    return 0;
}
