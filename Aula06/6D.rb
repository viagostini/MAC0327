n = gets.chomp.to_i

s1, s2 = 0, 0

g1 = []
arr = [*1..n]

arr.reverse.each do |x|
  if s1 <= s2
    s1 += x
    g1 << x
  else
    s2 += x
  end
end

puts (s1-s2).abs
puts g1.size.to_s + " " + g1.join(' ')
