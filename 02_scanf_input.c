#include <stdio.h> // เรียกใช้ไลบรารีสำหรับ printf() และ scanf()

int main(void) // จุดเริ่มต้นของโปรแกรม
{
    int age; // ตัวแปรเก็บอายุแบบจำนวนเต็ม
    float height; // ตัวแปรเก็บส่วนสูงแบบทศนิยม
    char initial; // ตัวแปรเก็บอักษรตัวแรกของชื่อ

    printf("Enter age height initial: "); // แจ้งรูปแบบข้อมูลที่ต้องกรอก
    scanf("%d %f %c", &age, &height, &initial); // รับ int, float และ char จากแป้นพิมพ์

    printf("Age = %d\n", age); // แสดงค่า age
    printf("Height = %.1f cm\n", height); // แสดง height เป็นทศนิยม 1 ตำแหน่ง
    printf("Initial = %c\n", initial); // แสดงตัวอักษร 1 ตัว

    return 0; // จบโปรแกรมอย่างสำเร็จ
}

/* ลองกรอก: 18 165.5 M
   &age, &height และ &initial คือที่อยู่ของตัวแปรที่ scanf() จะนำข้อมูลไปเก็บ */
