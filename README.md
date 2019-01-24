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

