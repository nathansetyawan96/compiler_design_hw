void codegen();
void codegen()
{
    int a = 1 + 2 * 1;
    int b = (a + 3) / 2;
    digitalWrite(26, 1);
    delay(a * 1000);
    digitalWrite(26, 0);
    delay(b * 1000);
}
