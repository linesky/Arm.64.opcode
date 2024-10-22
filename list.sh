cat $1 | grep -v "rror" | grep -v "message"| grep -v "nfo"| grep -v "not found" |grep -v "No such file" | grep -v -e '^$'
