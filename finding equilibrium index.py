def find_equilibrium_index(nums):
    total_sum = sum(nums)  # Calculate the total sum of the array
    left_sum = 0  # Initialize the left sum
    
    for i in range(len(nums)):
        total_sum -= nums[i]  # Reduce the total sum by the current element
        if left_sum == total_sum:
            return i  # Found equilibrium index
        left_sum += nums[i]  # Add the current element to the left sum
    
    return -1  # No equilibrium index found

# Example usage
nums = [1, 2,7, 3, 0]
result = find_equilibrium_index(nums)
print("Leftmost equilibrium index:", result)  # Output: 2
