import math
class Circle(object):
    def __init__(self,r):
        self.r=r
    def get_area(self):#求圆的面积的类属性
        return math.pi*pow(r,2)
    def get_perimeter(self):
        return 2*r*math.pi
r=int(input('请输入圆的半径：'))
c=Circle(r)
print(f'圆的面积为：{c.get_area()}')
print(f'圆的周长为：{c.get_perimeter()}')
print('结果保留两位小数!')
print('圆的面积为：{0:.2f}'.format(c.get_area()))
print('圆的周长为：{0:.2f}'.format(c.get_perimeter()))