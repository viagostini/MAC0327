t = gets.chomp.to_i

t.times do
    n = gets.chomp.to_i
    num = 1
    minus = 0
    sum = n * (n + 1) / 2

    while num <= n
        minus += num
        num *= 2
    end
    puts sum - minus*2
end
