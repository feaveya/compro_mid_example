#include <stdio.h> // เรียกใช้ไลบรารีสำหรับ printf()

int main(void) // จุดเริ่มต้นของโปรแกรม
{
    int x = 10; // กำหนดค่าเริ่มต้นให้ x
    int y = 3; // กำหนดค่าเริ่มต้นให้ y

    printf("x + y = %d\n", x + y); // + คือการบวก
    printf("x - y = %d\n", x - y); // - คือการลบ
    printf("x * y = %d\n", x * y); // * คือการคูณ
    printf("x / y = %d\n", x / y); // / ของ int คือการหารจำนวนเต็ม
    printf("x %% y = %d\n", x % y); // %% ใน printf แสดง % และ % ใน expression คือหาเศษ

    x += 5; // x = x + 5 คือ assignment operator แบบย่อ
    printf("After x += 5, x = %d\n", x); // แสดงค่า x หลังเพิ่ม 5

    return 0; // จบโปรแกรมอย่างสำเร็จ
}

/* ลองปรับค่า: เปลี่ยน x และ y เช่น x = 17, y = 5 แล้วสังเกต / และ %
   Expression คือนิพจน์ที่คำนวณค่าได้ เช่น x + y หรือ x * y */
