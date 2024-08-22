class Solution:
    def sampleStats(self, count: List[int]) -> List[float]:
        n = sum(count)  # Total number of elements
        total_sum = sum(i * count[i] for i in range(256))  # Total sum of elements

        # Minimum
        minimum = next(i for i in range(256) if count[i] > 0)

        # Maximum
        maximum = next(i for i in range(255, -1, -1) if count[i] > 0)

        # Mean
        mean = total_sum / n

        # Median
        mid = n // 2
        if n % 2 == 0:
            median_low = median_high = None
            count_sum = 0
            for i in range(256):
                count_sum += count[i]
                if median_low is None and count_sum > mid - 1:
                    median_low = i
                if count_sum > mid:
                    median_high = i
                    break
            median = (median_low + median_high) / 2
        else:
            count_sum = 0
            for i in range(256):
                count_sum += count[i]
                if count_sum > mid:
                    median = i
                    break

        # Mode
        mode = max(range(256), key=lambda x: count[x])

        return [float(minimum), float(maximum), float(mean), float(median), float(mode)]     