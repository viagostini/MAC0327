def sieve (n)
    prime = [true] * (n+1)
    p = 2
    while p*p <= n do
        if prime[p]
            i = p*2
            while i <= n do
                prime[i] = false
                i += p
            end
        end
        p += 1
    end
    [prime, prime.each_index.select{|i| prime[i] == true}.drop(1)]
end

n, k = gets.chomp.split(' ').map(&:to_i)

pmask, primes = sieve(n)

i, ans = 0, 0
while i < primes.size - 1 do
    x = primes[i] + primes[i+1] + 1
    if pmask[x] == true
        ans += 1
    end
    i += 1
end

if ans == k or k == 0
    puts 'YES'
else
    puts 'NO'
end

