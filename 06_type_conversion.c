#include <stdio.h> // เรียกใช้ไลบรารีสำหรับ printf()

int main(void) // จุดเริ่มต้นของโปรแกรม
{
    int total = 5; // จำนวนรวมแบบ int
    int count = 2; // จำนวนรายการแบบ int
    float average1 = total / count; // หาร int ก่อน จึงได้ 2 แล้วเก็บเป็น 2.0
    float average2 = (float)total / count; // แปลง total เป็น float ก่อนหาร จึงได้ 2.5
    double pi = 3.14159; // ทศนิยมแบบ double
    int whole = (int)pi; // casting เป็น int ทำให้ส่วนทศนิยมถูกตัดทิ้ง

    printf("Without casting = %.1f\n", average1); // แสดง 2.0
    printf("With casting = %.1f\n", average2); // แสดง 2.5
    printf("(int)pi = %d\n", whole); // แสดง 3

    return 0; // จบโปรแกรมอย่างสำเร็จ
}

/* ลองเปลี่ยน total และ count เช่น 7 และ 2 เพื่อเปรียบเทียบผลของ integer division กับ casting */
