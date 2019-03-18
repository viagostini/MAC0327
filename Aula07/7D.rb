maxi = 2000000000
mini = -maxi

n = gets.chomp.to_i

n.times do
    line = gets.chomp.split(' ')
    s = line[0]
    num = line[1].to_i
    ans = line[2]

    if ans == 'N'
        if s == '>='
            s = '<'

        elsif s == '>'
            s = "<="

        elsif s == '<='
            s = '>'

        elsif s == '<'
            s = '>='
          
        end
    end

    if s == '>='
        mini = [mini, num].max
    elsif s == '>'
        mini = [mini, num+1].max
    elsif s == '<='
        maxi = [maxi, num].min
    elsif s == '<'
        maxi = [maxi, num-1].min
    end
end

if maxi < mini
    puts "Impossible"
else
    puts maxi
end