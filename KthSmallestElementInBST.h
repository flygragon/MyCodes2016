/// �ҵ������������е�kС��Ԫ��
/// ʹ�õݹ�
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
    void FindkthNode(TreeNode* root,int k) {			///	�ݹ���ҵ�kС��Ԫ�ؽڵ�
		if (count <k) {
        if (root ->left) FindkthNode(root ->left,k);	/// �����뵽��С��Ԫ�ؽڵ㼴����ߵĽڵ�
        if (count ==k) return;							///	����ݹ��������Ѿ��ҵ������˳��ݹ�
        if ((++count) ==k) {							///	����ýڵ�Ԫ��ǡ��Ϊ��kС��
            temp =root;									/// ��ָ��ָ��ýڵ㲢�˳��ݹ�
            return;
        }
        if (root ->right) FindkthNode(root ->right,k);	///	���򣬼�������������
    }
	}
public:
    int kthSmallest(TreeNode* root, int k) {
        FindkthNode(root,k);							/// ���ò��Һ���FindkthNode
        return temp ->val;
    }