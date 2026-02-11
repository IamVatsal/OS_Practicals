echo "Enter Three Numbers: "
read num1 
read num2
read num3

if [ $num1 -eq $num2 ] && [ $num2 -eq $num3]; then
    echo "All are Equal"
elif [ $num1 -gt $num2 ] && [ $num1 -gt $num3 ]; then
    echo "$num1 is Greater than $num2 & $num3"
elif [ $num2 -gt $num1 ] && [ $num2 -gt $num3 ]; then
    echo "$num2 is Greater than $num1 & $num3"
else
    echo "$num3 is Greater than $num1 & $num2"
fi