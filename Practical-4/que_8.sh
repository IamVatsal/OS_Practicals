file=$1
words=`awk '{num+=NF} END{print num+0}' $file`
echo "Words: $words"