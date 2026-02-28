str=$1
len=${#str}
rev=''
for ((i=$len-1; i>=0; i--))
do
 rev=$rev${str:$i:1}
done

if [ $str = $rev ];
then
        echo "$str is Palindrome."
else
        echo "$str is not Palindrome."
fi