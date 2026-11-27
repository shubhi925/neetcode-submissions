/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */


func inorder(curr *TreeNode, items *[]int) {
	if curr == nil {
		return
	}

	inorder(curr.Left, items)
	*items = append(*items, curr.Val)
	inorder(curr.Right, items)	
}

func inorderTraversal(root *TreeNode) []int {
	res := []int{}
	inorder(root, &res)
	return res
}
