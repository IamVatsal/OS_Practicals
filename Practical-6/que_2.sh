parent_pross_name=$(ps -p $PPID -o comm=)


if [ "$parent_pross_name" = "sh" ]; then
    sorted_args=$(echo "$@" | tr ' ' '\n' | sort -r | tr '\n' ' ')
    echo "Child Process:"
    echo "Reversely Sorted Coins are: $sorted_args"
else
    sorted_args=$(echo "$@" | tr ' ' '\n' | sort | tr '\n' ' ')
    echo "Parent Process:"
    echo "Sorted Coins are: $sorted_args"
    sh "$0" "$@"
fi

# echo "Current Process Name: $0"
# echo "Parent Process Name: $parent_pross_name"
# sh "$0" "$@"
# echo "Parent Process Name: $parent_pross_name"