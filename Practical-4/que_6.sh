file=$1
lines=`wc -l $file | awk '{ print $1 }'`
echo "Lines: $lines"