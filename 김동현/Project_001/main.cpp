#include <iostream>
#include <string>
using namespace std;

// 전역 변수
string my_folder[100];      // 폴더 이름
int parent_data[100];       // 부모 인덱스
int root_idx = 1;           // 다음 저장 위치
int current_idx = 0;        // 현재 위치

// 기능 함수
string input_command();
string former_string(string input);
string letter_string(string input);
void view_current_folder();
void view_menu(string f_str, string l_str);

// 명령어 함수
void func_view();
void func_birth(string l_str);
void func_show();
void func_enter(string l_str);
void func_return();

int main()
{
   my_folder[0] = "home";
   parent_data[0] = -1;     //디렉토리 구조에서 0번째 idx가 home 값을 가지지 않게 하기 위해 -1로 선언

   while (true)
   {
       view_current_folder();

       string command = input_command();
       string former_str = former_string(command);
       string letter_str = letter_string(command);

       if (former_str == "shutdown")
           break;

       view_menu(former_str, letter_str);
   }

   return 0;
}

string input_command()
{
   string i_command;
   getline(cin, i_command);     //공백을 인식하여 라인을 받아올 때, 사용
   return i_command;
}

// 공백 이전 string
string former_string(string input)
{
   int size = input.length();
   string f_string = "";

   for (int i = 0; i < size; i++)
   {
       if (input[i] == ' ')
           break;

       f_string += input[i];
   }

   return f_string;
}

// 공백 이후 string
string letter_string(string input)
{
   int pos = input.find(' ');

   if (pos == -1)
       return "";

   string l_string = input.substr(pos + 1);

   if (l_string == "")
       return "input error";

   if (l_string.find(' ') != -1)
       return "input error";

   if (l_string.length() > 20)
       return "input error";

   return l_string;
}

void view_current_folder()
{
   cout << my_folder[current_idx] << " >> ";
}

void view_menu(string c_str, string a_str)
{
   if (c_str == "view")
   {
       func_view();
   }
   else if (c_str == "birth")
   {
       func_birth(a_str);
   }
   else if (c_str == "show")
   {
       func_show();
   }
   else if (c_str == "enter")
   {
       func_enter(a_str);
   }
   else if (c_str == "return")
   {
       func_return();
   }
   else
   {
       cout << "not command\n";
   }
}

void func_view()
{
   cout << "===== COMMAND LIST =====\n";
   cout << "view : Show command list\n";
   cout << "birth [region] : Create a new region\n";
   cout << "show : Show child regions\n";
   cout << "enter [region] : Move to child region\n";
   cout << "return : Move to parent region\n";
   cout << "shutdown : Exit program\n";
}

void func_birth(string l_str)
{
   if (l_str == "input error" || l_str == "")
   {
       cout << "command error\n";
       return;
   }

   if (root_idx >= 100)
   {
       cout << "index out of range\n";
       return;
   }

   for (int i = 0; i < root_idx; i++)
   {
       if (parent_data[i] == current_idx && my_folder[i] == l_str)
       {
           cout << "Already Exists\n";
           return;
       }
   }

   my_folder[root_idx] = l_str;
   parent_data[root_idx] = current_idx;
   root_idx++;

   cout << l_str << " Created\n";
}

void func_show()        //bool func_show()로 선언을 하게 된다면, return 값을 true, false로 반환할 수 있다.
{
   bool check = false;

   for (int i = 0; i < root_idx; i++)
   {
       if (parent_data[i] == current_idx)
       {
           cout << my_folder[i] << '\n';
           check = true;
       }
   }

   if (check == false)
   {
       cout << "EMPTY\n";
   }
}

void func_enter(string l_str)
{
   if (l_str == "input error" || l_str == "")
   {
       cout << "command error\n";
       return;
   }

   for (int i = 0; i < root_idx; i++)
   {
       if (parent_data[i] == current_idx && my_folder[i] == l_str)
       {
           current_idx = i;
           return;
       }
   }

   cout << "Location Not Found\n";
}

void func_return()
{
   if (current_idx == 0)
   {
       cout << "Already Root\n";
       return;
   }

   current_idx = parent_data[current_idx];
}