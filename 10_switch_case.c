#include <stdio.h> // เรียกใช้ไลบรารีสำหรับ printf()

int main(void) // จุดเริ่มต้นของโปรแกรม
{
    char menu = 'B'; // กำหนดตัวเลือกเมนูตัวอย่าง

    switch (menu) // เปรียบเทียบค่าของ menu กับแต่ละ case
    {
        case 'A': // กรณี menu มีค่าเป็น A
            printf("Apple\n"); // แสดงชื่อเมนู A
            break; // ออกจาก switch เพื่อไม่ให้ทำ case ถัดไป
        case 'B': // กรณี menu มีค่าเป็น B
            printf("Banana\n"); // แสดงชื่อเมนู B
            break; // ออกจาก switch
        case 'C': // กรณี menu มีค่าเป็น C
            printf("Coconut\n"); // แสดงชื่อเมนู C
            break; // ออกจาก switch
        default: // กรณีที่ไม่ตรงกับทุก case
            printf("Invalid menu\n"); // แจ้งเมื่อเลือกเมนูไม่ถูกต้อง
    }

    return 0; // จบโปรแกรมอย่างสำเร็จ
}

/* ลองเปลี่ยน menu เป็น 'A', 'C' หรือ 'X'
   หากลืม break โปรแกรมจะทำงานต่อไปยัง case ถัดไป (fall-through) */
