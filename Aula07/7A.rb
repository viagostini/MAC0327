n = gets.chomp.to_i
arr = gets.chomp.split(' ').map(&:to_i)

even = arr.select{|x| x.even?}
odds = arr.select{|x| x.odd?}

if even.size == 1
  puts arr.index(even[0]) + 1
else
  puts arr.index(odds[0]) + 1
end

