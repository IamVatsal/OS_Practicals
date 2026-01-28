echo "Enter Two Numbers: "
read num1 
read num2

if [ $num1 -eq $num2 ]; then
    echo "Both numbers are Equal"
elif [ $num1 -gt $num2 ]; then
    echo "$num1 is Greater than $num2"
else
    echo "$num2 is Greater than $num1"
fi