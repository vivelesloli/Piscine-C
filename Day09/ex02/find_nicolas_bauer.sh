cat phonebook | grep -i  "Nicolas\tBauer" | cut -d '	' -f 3 | sed '/[0-9/][0-9]*$/!d'
