class Solution:
    def suggestedProducts(self , products, searchWord) :
        res = []
        products . sort ()
        
        for i , word in enumerate (searchWord) : 
            products =  [prod for prod in products if len (prod)  >  i and prod [i]== word ]
            res .append (products [:3])
        return res

