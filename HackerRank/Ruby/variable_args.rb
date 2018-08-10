def full_name(*names)
	x = ""
	names.each do |name|
		x = x + " " + name
	end
	puts x.strip
end

full_name("Sudhanva")
full_name("Sudhanva", "Narayana")