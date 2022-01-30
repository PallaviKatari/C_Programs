#include <stdio.h>

int main(void)
{
int curr, second, first;
scanf("%d", &curr);
second = curr;
first = curr;
while (1) {
scanf("%d", &curr);
if (curr == -1) {
break;
}
if (curr > first) {
second = first;
first = curr;
}
else if (curr > second) {
second = curr;
}
}
printf("%d\n",second);
return 0;
}
