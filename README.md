# C-question-100
 选择结构和循环结构

2.4 计算一元二次方程

题目描述：
从键盘输入 a, b, c 的值，编程计算并输出一元二次方程 ax2 + bx + c = 0 的根，当 a = 0 时，输出“Not quadratic
equation”，当 a ≠ 0 时，根据△ = b2 - 4*a*c 的三种情况计算并输出方程的根。 

输入描述：
多组输入，一行，包含三个浮点数 a, b, c，以一个空格分隔，表示一元二次方程 ax 2 + bx + c = 0 的系数

输出描述：
针对每组输入，输出一行，输出一元二次方程 ax2 + bx +c = 0 的根的情况。

如果 a = 0，输出“Not quadratic equation”；

如果 a ≠ 0，分三种情况：

△ = 0，则两个实根相等，输出形式为：x1=x2=...。

△ > 0，则两个实根不等，输出形式为：x1=...;x2=...，其中 x1 <= x2。

△ < 0，则有两个虚根，则输出：x1=实部-虚部 i;x2=实部+虚部 i，即 x1 的虚部系数小于等于 x2 的虚部系数，实部

为 0 时不可省略。实部= -b / (2*a),虚部= sqrt(-△ ) / (2*a)
所有实数部分要求精确到小数点后 2 位，数字、符号之间没有空格。

示例：

输入：

2.0 7.0 1.0

0.0 3.0 3.0

1 2 1

2 2 5

1 0 1

输出：

x1=-3.35;x2=-0.15

Not quadratic equation

x1=x2=-1.00

x1=-0.50-1.50i;x2=-0.50+1.50i

x1=0.00-1.00i;x2=0.00+1.00i