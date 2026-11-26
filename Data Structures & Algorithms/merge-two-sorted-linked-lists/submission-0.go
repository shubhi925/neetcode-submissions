/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

func mergeTwoLists(list1 *ListNode, list2 *ListNode) *ListNode {
    merged := &ListNode{}
	curr := merged

	curr1 := list1
	curr2 := list2

	for curr1 != nil && curr2 != nil {
		if curr1.Val <= curr2.Val {
			merged.Next = curr1
			curr1 = curr1.Next
		} else {
			merged.Next = curr2
			curr2 = curr2.Next
		}
		merged = merged.Next
	}

	if curr1 != nil {
		merged.Next = curr1
	}

	if curr2 != nil {
		merged.Next = curr2
	}


	return curr.Next
}
