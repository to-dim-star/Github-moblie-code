// 前情回顾小知识点之编译器帮你类造的一些函数: 
//   创建一个类后编译器自身提供默认构造和默认析构和默认拷贝函数。
//1.有自定义有参构造后，编译器不提供默认构造函数，但析构和拷贝还在。
//2.黑马: 有自定义拷贝构造函数后，编译器不提供其他构造函数。 so 析构还有么？其他构造函数是值什么？

// 本节探究深拷贝与浅拷贝(那不就是自定义拷贝与默认拷贝嘛) 
class Person{
public:
	Person () {
		a=1;exent=new  ????
	}
	
	Person(const Person& a){ // 深拷贝：成员变量有指针且开辟有空间时，要深拷贝自定义拷贝构造函数，以防析构重复释放内存 
		exent=new      ?????
	}
prviate:
	int a;
	int* exent;
}; 
