def double_then_sum(array)
    doubled_array = []

    array.each do |number|
        doubled_array << number *= 2
    end

    sum = 0

    doubled_array.each do |number|
        sum += number
    end

    return sum
end
