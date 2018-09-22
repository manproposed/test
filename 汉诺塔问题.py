def hanoi(n,x,y,z):
    if n==1:   #递归回溯点
        print(x,'-->',z)
    else:
        hanoi(n-1,x,z,y)#将前N-1个盘子从X移动到Y上
        print(x,'-->',z)#将最底下的最后一个盘子从X移动到z上
        #将y上的N-1个盘子移动到z上
        hanoi(n-1,y,x,z)

n = int(input('请输入汉诺塔的层数:'))
hanoi(n,'X','Y','Z')
