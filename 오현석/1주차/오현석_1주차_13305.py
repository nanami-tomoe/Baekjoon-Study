city_num = int(input())
city_len = list(map(int, input().split()))
city_price = list(map(int, input().split()))

min_price = city_price[0]
total_price = 0

for i in range(city_num - 1):
    if city_price[i] < min_price:
        min_price = city_price[i]
    total_price += min_price * city_len[i]

print(total_price)
