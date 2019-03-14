n = gets.chomp.to_i

s = [0, 0]

g1 = []
arr = [*1..n]

0.upto((n-1)/2) do |i|
    x = arr[i] + arr[n-i-1]
    if i.even?
        puts "i = #{i}"
        g1 << arr[i]
        g1 << arr[n-i-1]
        s[0] += x
    else
        s[1] += x 
    end
end

puts (s[0]-s[1]).abs
puts g1.join(' ')
