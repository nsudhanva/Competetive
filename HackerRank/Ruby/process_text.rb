def process_text(texts)  
    x = ""
    texts.each do |text|
    	x = x + " " + text.chomp.strip 
    end
    puts x.strip
end

process_text(["Hi, \n", " Are you having fun?    "])

#texts.map(&:strip).join(' ')