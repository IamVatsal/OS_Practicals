echo "Enter String"
read str1
jan="January"
if [[ "$jan" = *"$str1"* ] ]
then
    echo "$jan"
fi