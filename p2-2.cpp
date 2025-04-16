//نام و نام خانوادگی و سن 10 نفر را از کاربر بگیر و سپس میانگین سن هارا حساب کن
#include <iostream>
#include <string>
using namespace std;
class students {
private:
string firstname , lastname;
int age ;
//مقدار دهی اولیه
public:
students():firstname("") , lastname("") , age(0){}
void setDetails(const string& x, const string& y, int z) {
        firstName = x;
        lastName = y;
        age = z;
    }
   int getAge() const {
        return age;}
    void showDetails() const {
        cout << "Full Name: " << firstName << "\t " << lastName << " \t Age: " << age << endl; }};
int main() {
    const int peopleCount = 10; // تعداد افراد
    students group[peopleCount];
  for (int i = 0; i < peopleCount; ++i) {
        string firstName, lastName;
        int age;
        cout << "First Name: ";
        cin >> firstName;
        cout << "Last Name: ";
        cin >> lastName;
        cout << "Age: ";
        cin >> age;
      group[i].setDetails(firstName, lastName, age);}//ذخیره اطلاعات فرد
 int sumAges = 0;
    for (int i = 0; i < peopleCount; ++i) {
        sumAges = sumAges + group[i].getAge(); } // جمع کردن سن ها
 float avgAge = static_cast<float>(sumAges) / peopleCount;
    cout << "Average age among all individuals: " << avgAge << endl; // چاپ میانگین سن
    return 0 ;}
//finish
