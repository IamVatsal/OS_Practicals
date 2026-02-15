file=$1
words=`wc -w $file | awk '{ print $1 }'`
echo "Words: $words"