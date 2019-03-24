class Queen():
    def __init__(self, n):
        self.n_queen = n
        self.counter = 0
        self.chess_row = [-1]*n

    def check(self, row):
        for i in range(row):
            if self.chess_row[i] == self.chess_row[row] or abs(i-row)==abs(self.chess_row[i]-self.chess_row[row]):
                return False
        return True

    def queen(self, row):
        if row > self.n_queen - 1:
            for i in range(self.n_queen):
                print(self.chess_row[i]+1,end='')
            print()
            self.counter += 1
        else:
            for i in range(self.n_queen):
                self.chess_row[row] = i
                if self.check(row):
                    self.queen(row+1)


if __name__=='__main__':
    quee = Queen(n=8)
    quee.queen(row=0)
    print(quee.counter)
