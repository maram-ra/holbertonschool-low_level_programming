#include <unistd.h>

/**
 * _putchar - طباعة حرف واحد إلى المخرجات القياسية
 * @c: الحرف المراد طباعته
 * Return: 1 عند النجاح، أو -1 عند الفشل
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
