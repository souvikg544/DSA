def count(coins,n,sum1):
  ans=[[0 for x in range(n)] for x in range(sum1+1)]
  for i in range(n):
    table[0][i] = 1
  for i in range(1, sum1+1):
    for j in range(n):
      x = table[i - coins[j]][j] if i-coins[j] >= 0 else 0
      y = table[i][j-1] if j >= 1 else 0
      table[i][j] = x + y
 
  return table[sum1][n-1]  
if __name__ == '__main__':
    coins = [1, 2, 3]
    n = len(coins)
    sum1 = 4
    print(count(coins, n, sum1))
      
  
