>>> def palindromo(n):
	if n<=9 or n<=99:
		if n<=9:
			return "palindromo"
		if int(str(n)[0]) == int(str(n)[1]):
			return "palindromo"
		return "no palindromo"
	if int(str(n)[0]) == int(str(n)[-1]):
		return palindromo(int(str(n)[1:-1]))
	return "no palindromo"