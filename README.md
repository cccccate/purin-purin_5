# c++对c的扩展
### 一个简单的c++程序
[一个简单的c++程序与c对比](hello_.cpp)  
例题：求圆的周长和面积，均用实型数表示（输入：圆的半径，输出：圆的周长）  
两种编程方式：  
1 [面向过程的方法](circle_1.cpp)  
2 [面向对象的方法](circle_2.cpp)  
面向过程加工的是一个个函数，面向对象加工的是一个个类  
面向对象的方法思路：    
1 类的抽象（成员变量，成员函数）；  
2 实例化（用类定义变量——对象）；  
3 求周长和面积  
总结：明确类，对象，成员变量（属性），成员函数（方法），输入输出流的概念  
思考问题：定义类的时候会分配内存吗？  
类是一个数据类型，定义一个类，是一个抽象的概念，不会分配内存，定义变量（对象）的时候才会分配内存  

## 初学者常犯错误
理解为什么需要成员函数：在类中定义成员变量r，并没有赋值，同时定义成员变量s=3.14*r*r（而不是成员函数），当在主函数中创建类对象，对r赋值求s时，会出现乱码的情况  

## 命名空间  
作用：避免命名冲突  
using namespace std;这一语句涵盖了std命名空间中的所有标识符，头文件iostream文件中定义的所有变量、函数等都位于std命名空间中  

##  register关键字增强  
register关键字：请求编译器让变量a直接放在寄存器里面，速度快  
c语言中无法取得register变量地址，c++中可以  
c++编译器有自己的优化方式，不使用register时也可能会进行优化，例如当出现循环语句（for i = 0; i < 100 ; i++）时，c++编译器会自动把i视作register变量放到寄存器中  

## 变量检测增强  
```
int i;
int i = 100;
```
上述语句在c语言中是合法的，允许定义多个同名的全局变量，这些变量最终都链接到同一个地址空间上  
在c++中则出错，不允许定义多个同名的全局变量  

## c++中所有的变量和函数都必须有类型
c++中对变量和函数的要求很严格，返回值类型，参数类型，参数个数都需要定义明白，否则会报错  

## 新增布尔Bool类型关键字  
```
bool b1 = true;
```
c++中布尔类型的值为true和false，在编译器内部分别用1和0表示
布尔类型占一个字节的内存空间sizeof（bool）=1  
c++编译器会在赋值时将非0值转换成true，0值转换为false，如下  
```
bool b1 = 10;
bool b2 = -20;
bool b3 = 0;
//输出b1，b2，b3的值分别为1,1,0
```

## 三目运算符功能增强  
c语言中，表达式不能做左值  
c语言中三目运算符是一个表达式，返回的是变量的值，但是在c++中，三目运算符返回的是变量本身  
```
a = 10;
b = 20;
(a<b?a:b) = 30;
//在c语言中运行出错，因为左边的三目运算符是一个表达式，返回变量的值，不能给一个值进行赋值  
//在c++中，返回a变量本身，然后将30赋给a变量，最终a变为30，b为20
```

## c/c++中的const  

```
const int a;
const int b;//两种写法一样

const int *c;//指针c所指向的内存空间不能被修改
int *const d;//指针变量d本身不能被修改
const int *const e;//均不能被修改
```
const的作用：提高代码的可读性，减少bug  

## c中的冒牌货  
同样的一段程序，在c语言与c++中的运行结果完全不同  
```
int main()
const int a = 10;
int *p = (int*)&a;
printf("a=%d\n",a);
*p = 11;
printf("a=%d\n",a);
return o;
```
在c语言中，运行结果为10，11  
在c++中，运行结果为10，10  
这涉及到c++的const符号表的原理：在编译时若发现对const使用了&操作符，则给对应的常量分配存储空间，但不会使用其存储空间中的值，因此a的值仍然是10，若想使用这个值，在上述程序中输出xp即可，所以说c++比c要严谨的多  









