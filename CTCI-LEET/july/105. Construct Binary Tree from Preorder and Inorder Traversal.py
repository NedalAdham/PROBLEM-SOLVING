#Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
class Solution:
    def buildTree(self, preorder, inorder) :
        p = collections.deque(preorder)
        N = len(preorder)

        Lookup = { v:i for i , v in enumerate (inorder)}

        def build (start , end):
            if start > end :return None
            now = p .popleft()
            root = TreeNode(now)
            mid = Lookup[now]
            root.left = build(start , mid - 1)
            root.right = build(mid + 1, end)
            return root

        return build(0 , N-1)


"""X = Solution()
preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
print(X.buildTree(preorder,inorder))
"""