#类属性、静态方法、类方法的使用
class Student:
    native_pace='四川'#定义一个类属性
    def __init__(self,name,age):#初始化方法
        self.name=name
        self.age=age
    @classmethod
    def method(cls):
        print('这是一个类方法！')
    @staticmethod
    def method1():
        print('这是一个静态方法')

#类属性的调用
stu1=Student('张三',18)
stu2=Student('里斯',20)
print(stu1.native_pace)
print(stu2.native_pace)
Student.native_pace='重庆'
print(stu1.native_pace)
print(stu2.native_pace)
print('类方法*************')
print(stu1.method())
print('********静态方法')
print(stu2.method1())