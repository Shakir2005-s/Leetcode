class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        queue<TreeNode *> Q;
        Q.push(root);
        int count{1};
        while (!Q.empty())
        {

            int length = Q.size();
            while (length--)
            {
                TreeNode *parent = Q.front();
                Q.pop();
                if (parent->left)
                {
                    Q.push(parent->left);
                }
                if (parent->right)
                {
                    Q.push(parent->right);
                }
                if (!parent->left && !parent->right)
                {
                    return count;
                }
            }
            count++;
        }
        return 0;
    }
};