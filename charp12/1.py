#定义python中的类
class Student:
    native_pass='四川'#直接定义在类之中的变量，称为类属性
    def score(self):#定义在类之中的函数叫--实例方法，定义在类之外的则称为函数
        print('满分')
    #静态方法
    @staticmethod
    def method():
        print('静态方法')
        #类方法
    @classmethod
    def method1(cls):
       print('类方法')
    def __init__(self,name,age):#初始化方法
        self.name=name#赋值操作
        self.age=age#self.age--实例属性
print(type(Student))
print(id(Student))
print(Student)
print(Student.method1())
print(Student.method())
print(Student.native_pass)
print(Student.score(1))

#创建Student()类的实例对象
stu1=Student('张三',18)
print(type(stu1))#类对象的地址
print(id(stu1))#2128189407088--十六进制=1EF81F93F70
print(stu1)
print('----------------')
print(id(Student))#类的地址
print(type(Student))
print(Student)
print('----------------')
print(stu1.name)
print(stu1.age)
print(stu1.score())
stu1.score()#对象名.方法名
print(stu1.method())
print(stu1.method1())
Student.score(stu1)#==stu1.score()--类名.方法名(类的对象)