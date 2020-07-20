'''
Prison Cells After N Days

Solution
There are 8 prison cells in a row, and each cell is either occupied or vacant.

Each day, whether the cell is occupied or vacant changes according to the following rules:

If a cell has two adjacent neighbors that are both occupied or both vacant, then the cell becomes occupied.
Otherwise, it becomes vacant.
(Note that because the prison is a row, the first and the last cells in the row can't have two adjacent neighbors.)

We describe the current state of the prison in the following way: cells[i] == 1 if the i-th cell is occupied, else cells[i] == 0.

Given the initial state of the prison, return the state of the prison after N days (and N such changes described above.)


Finding repeatative states as a function of loop len and using recursive function on remaining days.Store all the unique states in a map <str,int> 
Time Complexity -- O(14)
'''

class Solution:
    def prisonAfterNDays(self, cells: List[int], N: int) -> List[int]:
        _map = {}
        self.cells = cells
    
        for i in range(N):
            s = str(cells)
            if s in _map:
                loop_length = i - _map[s]
                remaining_days = (N - i) % loop_length
                return self.prisonAfterNDays(self.cells, remaining_days)
            else:
                _map[s] = i
                prev = self.cells[0]
                for j in range(1,7):
                    curr, next = self.cells[j], self.cells[j+1]
                    self.cells[j] = 1 - (prev ^ next) #!(prev ^ next)
                    prev = curr
            self.cells[0], self.cells[7] = 0,0
        
        return self.cells
