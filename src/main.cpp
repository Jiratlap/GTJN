#include "node.h"
#include "linked_list.h"

/*
Part 1.1: การใช้ struct และ function Print
จงสร้าง Node ใหม่ที่มีค่าเท่ากับเลขรหัสสองตัวสุดท้ายของนักศึกษาและปริ้นค่าแสดงผลออกมาทางหน้าจอ

Part 2.1: การประยุกต์ใช้ linked list ให้ทำใน main.cpp
1. จงสร้าง LinkedList ที่มีสมาชิก 9 ตัวโดยมีค่า 1->2->3->4->5->4->3->2->1 และแสดงผลออกมาทางหน้าจอ
2. เปลี่ยน LinkedList ดังกล่าวให้มีค่าเท่ากับ 9->1->3->5->3->1->9 และแสดงผมออกมาทางหน้่าจอ
*/

int main() 
{    
   Node* myID = CreateNode(77);
    Print(*myID);
    FreeNode(myID);

    //Create Pattern 2
    LinkedList list;
    for (int i = 1; i <= 5; ++i) {
        list.Append(i);
    }
    for (int i = 4; i >= 1; --i) {
        list.Append(i);
    }
    list.Print();


    //Delete Pattern 1
    for (int i = 1; i <= 5; ++i) {
        list.Erase(i);
    }
    for (int i = 4; i >= 1; --i) {
        list.Erase(i);
    }

    //Create Pattern 2
    for (int i = 1; i <= 5; i += 2) {
        list.Append(i);
    }
    for (int i = 3; i >= 1; i -= 2) {
        list.Append(i);
    }
    list.Insert(9,0);
    list.Append(9);
    std::cout << std::endl;
    list.Print();

    return 0;
}
