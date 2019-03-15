n, k = gets.chomp.split(' ').map(&:to_i)

divs_to_sqrt = (1..Integer.sqrt(n)).select {|x| n % x == 0}

if k > divs_to_sqrt.size * 2
  puts '-1'
else
  other_divs = divs_to_sqrt.map{|x| n/x if x < Integer.sqrt(n)}.compact
end

divs = (divs_to_sqrt << other_divs).flatten

print divs[k-1]
puts ""
