echo "Enter Two Numbers: "
read num1
read num2
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
echo "5. Modulus"
echo "Enter Your Choice (1-5): "
read choice

if [ $choice = 1 ]; then
    sum=`expr $num1 + $num2`
    echo "Sum: $sum"
elif [ $choice = 2 ]; then
    sub=`expr $num1 - $num2`
    echo "Subtraction: $sub"
elif [ $choice = 3 ]; then
    mul=`expr $num1 \* $num2`
    echo "Multiplication: $mul"
elif [ $choice = 4 ]; then
    div=`expr $num1 / $num2`
    echo "Division: $div"
elif [ $choice = 5 ]; then
    mod=`expr $num1 % $num2`
    echo "Modulus: $mod"
fi
