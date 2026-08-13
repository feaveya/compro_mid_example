#include <stdio.h> // เรียกใช้ไลบรารีสำหรับ printf()

int main(void) // จุดเริ่มต้นของโปรแกรม
{
    char grade = 'A'; // ประกาศตัวแปรอักขระ 1 ตัว
    int age = 18; // ประกาศตัวแปรจำนวนเต็ม
    float height = 165.5f; // ประกาศตัวแปรทศนิยมแบบ float
    char name[] = "Mali"; // ประกาศข้อความแบบ array ของ char

    printf("Name: %s\n", name); // %s แสดงข้อความ
    printf("Age: %d years\n", age); // %d แสดงจำนวนเต็ม
    printf("Height: %.1f cm\n", height); // %.1f แสดงทศนิยม 1 ตำแหน่ง
    printf("Grade: %c\n", grade); // %c แสดงอักขระ 1 ตัว

    return 0; // จบโปรแกรมอย่างสำเร็จ
}

/* ลองปรับค่า: เปลี่ยน name, age, height และ grade แล้วสังเกตผลลัพธ์
   ข้อควรจำ: ข้อความใช้ "double quote" แต่ char 1 ตัวใช้ 'single quote' */
