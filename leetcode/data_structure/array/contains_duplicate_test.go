package array

import "testing"

type TestCase struct {
	arg1     []int
	expected bool
}

func TestSolution(t *testing.T) {

	var testCases = []TestCase{
		{[]int{1, 2, 3, 4}, false},
		{[]int{1, 2, 3, 1}, true},
	}

	for _, tc := range testCases {
		if result := containsDuplicate(tc.arg1); result != tc.expected {
			t.Errorf("should return %t when input %v", tc.expected, tc.arg1)
		}
	}

}
