/// 找到二叉排序树中第k小的元素
/// 使用递归
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    private:
    int count =0;
    TreeNode* temp;
    void FindkthNode(TreeNode* root,int k) {			///	递归查找第k小的元素节点
		if (count <k) {
        if (root ->left) FindkthNode(root ->left,k);	/// 先深入到最小的元素节点即最左边的节点
        if (count ==k) return;							///	如果递归左子树已经找到，则退出递归
        if ((++count) ==k) {							///	如果该节点元素恰好为第k小，
            temp =root;									/// 则将指针指向该节点并退出递归
            return;
        }
        if (root ->right) FindkthNode(root ->right,k);	///	否则，继续查找右子树
    }
	}
public:
    int kthSmallest(TreeNode* root, int k) {
        FindkthNode(root,k);							/// 调用查找函数FindkthNode
        return temp ->val;
    }