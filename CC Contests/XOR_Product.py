# Python3 implementation of the above approach

# Function to return the
# maximum xor
def max_xor( arr , n):
	
	maxx = 0
	mask = 0;

	se = set()
	
	for i in range(30, -1, -1):
		
		# set the i'th bit in mask
		# like 100000, 110000, 111000..
		mask |= (1 << i)
		newMaxx = maxx | (1 << i)
	
		for i in range(n):
			
			# Just keep the prefix till
			# i'th bit neglecting all
			# the bit's after i'th bit
			se.add(arr[i] & mask)

		for prefix in se:
			
			# find two pair in set
			# such that a^b = newMaxx
			# which is the highest
			# possible bit can be obtained
			if (newMaxx ^ prefix) in se:
				maxx = newMaxx
				break
				
		# clear the set for next
		# iteration
		se.clear()
	return maxx


t = int(input())

while(t):

    n = int(input())

    arr = list(map(int, input().split()))

    print(max_xor(arr,n))

    t -= 1


# ---> NEVER GIVE UP
#                        ▬▬▬▬▬▬▬▬▬▬▬.◙.▬▬▬▬▬▬▬▬▬▬▬
#                                ▂▄▄▓▄▄▂             
#                              ◢◤██▀▀████▄▄▄▄▄▄▄▄▄▄◢◤
#                             █▄████▄ ███▀▀▀▀▀▀▀▀▀▀╬
#                              ◥█████◤
#                              ══╩══╩══
#                                ╬═╬
#                                ╬═╬
#                                ╬═╬
#                                ╬═╬
#                                ╬═╬ 
#                                ╬═╬
#                                ╬═╬
#                                ╬═╬  ☻/🏓Have a nice Day !!!!!!!🏓
#                                ╬═╬ /▌
#                                ╬═╬ / \