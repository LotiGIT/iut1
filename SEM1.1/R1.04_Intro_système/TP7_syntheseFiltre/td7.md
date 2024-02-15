
# Q4
cut -d ' ' -f 4 < access.log | cut -d ':' -f 2,3 | egrep '18:[0-2][0-9]' | wc -l 

# Q5 
cut -d ' ' -f 4 < access.log | cut -d ':' -f 2,3,4 | egrep '09:([0-2][0-9]:[0-5][0-9]|30:00)' | wc -l : Q5

# Q6
cut -d ' ' -f 4 < access.log | cut -d ':' -f 1 | sort | uniq | wc -l


