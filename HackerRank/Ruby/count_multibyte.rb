def count_multibyte_char(money)
    puts money.each_char.count { |c| c.bytesize > 1 }
end

count_multibyte_char('¥1000')