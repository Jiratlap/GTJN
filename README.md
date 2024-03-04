[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/FF7X1qRy)
# Lab4 : Node and Linked List
## Objectives
ในแลปนี้จะให้ลองสร้าง Data Structure เบื้องต้น นั่นคือ Node และ Linked List โดยสิ่งที่จะต้องทำให้ได้คือ
1. สร้าง Node struct ที่จะแสดงถึง item ชิ้นหนึ่งภายในลิสต์และมีฟังก์ชั่นสนับสนุนการใช้งาน
2. สร้าง Linked List class และ fuction ต่างๆ
3. ทดสอบและประยุกต์ใช้งาน Linked List

## Prelab:
- สามารถลองเล่นและทำความเข้าใจ function ต่างๆ ของ linked list ได้[ที่นี่](https://visualgo.net/en/list)
- ดู slide อาจารย์โซ่ในเรื่อง linked list
- ศึกษาเรื่อง new operator [ที่นี่](https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/)

## In-Lab
### Part 1.1: Node struct and Print
เราจะใช้ struct กันในการแทนค่า Node ซึ่งจะมีสมาชิกสองตัวคือ val กับ next (ประกาศมาให้แล้ว) ให้น้องๆช่วยกันเขียน function Print เพื่อแสดงค่า val ที่อยู่ใน Node และเขียน code ใน main.cpp เพื่อแสดงค่าให้ทีเอดูหน่อย

### Part 1.2: CreateNode and FreeNode
เราจะมาเรียนรู้การประกาศค่าตัวแปรรูปแบบใหม่ด้วยคีย์เวิร์ด `new` ซึ่งเป็นคำสั่งเฉพาะสำหรับตัวแปร pointer กัน โดยให้น้องๆช่วยกันเขียน 2 functions คือ
1. CreateNode ซึ่งจะสร้าง Node ใหม่ขึ้นมาและคืนค่าเป็น pointer ที่ชี้ไปที่ Node นั้น
2. FreeNode ซึ่งจะทำการฟรี memory ที่อยู่ใน Node นั้นๆ
part นี้จะทดสอบโดยการใช้ unit testing ที่จะเพิ่มมาภายหลัง

### Part 2: LinkedList class
ที่นี้เรามาจะมาสร้างคลาสชื่อ LinkedList กัน โดยใช้ร่วมกับ struct Node ที่เขียนกันใน part 1. โดย class LinkedList ควรจะมีฟังก์ชั่นทั้งหมดดังนี้
1. constructor `LinkedList()` สำหรับสร้าง object ใหม่ประเภท LinkedList ที่ยังไม่มี Node ใดๆ
2. destructor `~LinkedList()` สำหรับการทำลาย object ประเภท LinkedList ที่ถูกต้อง
3. function `Size()` สำหรับแสดงค่าจำนวน Node ที่อยู่ใน LinkedList
4. function `GetMutableNode(int pos)` สำหรับการเอาค่า pointer ของ Node ที่ตำแหน่ง pos ซึ่งค่าที่คืนให้สามารถนำไปแก้ไขข้อมูลใน Node ได้
5. function `GetNode(int pos)` สำหรับการอ่านค่าของ Node ที่ตำแหน่ง pos โดยค่าที่คืนให้จะสามารถอ่านได้อย่างเดียว
6. function `Count(int val)` สำหรับนับจำนวน val ที่อยู่ใน LinkedList
7. function `Append(int val)` สำหรับการเพิ่ม Node ใหม่ที่มีค่า val เข้าไปที่ท้าย LinkedList
8. function `Print()` สำหรับการแสดงผลค่า Node ทั้งหมดใน LinkedList ตามลำดับจาก root.
9. function `Insert(int val, int pos)` สำหรับการเพิ่ม Node ใหม่ที่มีค่า val เข้าไปที่ตำแหน่งที่ระบุ
10. function `EraseAt(int pos)` สำหรับการลบ Node ที่ตำแหน่ง pos
11. function `Erase(int val)` สำหรับการลบ Node แรกใน LinkedList ที่มีค่าเท่ากับ val

Part 2.1: การประยุกต์ใช้ linked list ให้ทำใน main.cpp
1. จงสร้าง LinkedList ที่มีสมาชิก 9 ตัวโดยมีค่า 1->2->3->4->5->4->3->2->1 และแสดงผลออกมาทางหน้าจอ
2. เปลี่ยน LinkedList ดังกล่าวให้มีค่าเท่ากับ 9->1->3->5->3->1->9 และแสดงผมออกมาทางหน้่าจอ
Part 2.2: รัน unit testing ที่จะเพิ่มมาภายหลัง

### How to run code/tests
- Step 1: Create build folder under lab4 folder.
```
mkdir build
```
- Step 2: generate Makefiles using cmake. 
```
cmake -S . -B build
```
ถ้าใครใช้ Windows, ให้ใช้
```
cmake -S . -B build -G "MinGW Makefiles"
```

- Step 3: Compile the code
```
cmake --build build
```
- Step 4: Run main
```
./build/src/main
```

Note:
- ปกติแล้วทำ step1-2 เพียงรอบเดียวพอ ถ้ามีการแก้ไขโค้ดเพิ่มเติมโดยไม่ได้เพิ่มไฟล์ให้รันแค่ step 3-4 อีกครั้ง
- testing จะมีการเพิ่มให้ทีหลังโดยรันคำสั่งเหมือนกับ lab3
