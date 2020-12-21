#动态绑定属性和方法
class Student:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def eat(self):#类方法
        print(self.name+'在吃饭')
stu1=Student('张三',20)
stu2=Student('里斯',18)
stu1.gender='男'#动态的给stu1绑定了个性别为男的属性
print(stu1.gender)
stu1.eat()
stu2.eat()

print('*******动态绑定方法********')
def show():
    print('在类方法之外，称之为函数')
stu1.show=show
stu1.show()#动态绑定方法
stu2.show=show()
stu2.show()