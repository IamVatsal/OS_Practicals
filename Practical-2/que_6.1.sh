echo "Enter Two Numbers: "
read num1
read num2
sum=`expr $num1 + $num2`
sub=`expr $num1 - $num2`
mul=`expr $num1 \* $num2`
div=`expr $num1 / $num2`
mod=`expr $num1 % $num2`
echo "Sum: $sum"
echo "Subtraction: $sub"
echo "Multiplication: $mul"
echo "Division: $div"
echo "Modulus: $mod"