# Your code here
def serial_average(str)
    x = str[4,5].to_f.round(2)
    puts x
    y = str[10, 5].to_f.round(2)
    puts y
    z = ((x + y)/2).round(2)
   	z = '%.2f' % z
    puts z
    str = str[0, 4]
    str[4, 5] = z.to_s
    puts str
end

serial_average("002-10.00-20.00")
serial_average("001-12.43-56.78")