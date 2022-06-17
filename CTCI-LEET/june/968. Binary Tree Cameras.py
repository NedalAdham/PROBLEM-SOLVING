class Solution:
    def minCameraCover(self, root: Optional[TreeNode]) -> int:
        self . cams = 0
        covered = {None}
        
        def DFS (node , par = None):
            if node :
                DFS(node.left , node)
                DFS(node.right , node)
                
                if (par is None and node not in covered or node.left not in covered or node.right not in covered):
                    self.cams += 1
                    covered . update ({node , par , node.left , node.right})
                    
        DFS(root)
        return self .cams
        