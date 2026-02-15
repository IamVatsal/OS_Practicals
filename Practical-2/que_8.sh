echo "Enter Number1:"
read a
echo "Enter Number2:"
read b
echo "Enter Number3:"
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo "$a is greatest"
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo "$b is greatest"
elif [ $c -gt $a ] && [ $c -gt $b ]
then
    echo "$c is greatest"

elif [ $a -eq $b ] && [ $a -gt $c ]
then
    echo "$a and $b are equal and greatest"
elif [ $a -eq $c ] && [ $a -gt $b ]
then
    echo "$a and $c are equal and greatest"
elif [ $b -eq $c ] && [ $b -gt $a ]
then
    echo "$b and $c are equal and greatest"

elif [ $a -eq $b ] && [ $b -eq $c ]
then
    echo "All three numbers are equal"
fi