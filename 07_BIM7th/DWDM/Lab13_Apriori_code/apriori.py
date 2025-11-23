import pandas as pd
from mlxtend.preprocessing import TransactionEncoder
from mlxtend.frequent_patterns import apriori

# Small dataset containing list of transaction
dataset = [
    ['Bread', 'Milk'],
    ['Bread', 'Diaper', 'Beer'],
    ['Milk', 'Diaper', 'Beer', 'Cola'],
    ['Bread', 'Milk', 'Diaper', 'Beer'],
    ['Bread', 'Milk', 'Diaper', 'Cola']
]

# Converting the transactions to one-hot encoded DataFrame
te = TransactionEncoder()
te_array = te.fit(dataset).transform(dataset)
df = pd.DataFrame(te_array, columns=te.columns_)

# Applying Apriori algo with min support of 2 
min_support = 2 / len(dataset)  # 2 transactions out of 5
frequent_itemsets = apriori(df, min_support=min_support, use_colnames=True)
frequent_itemsets['support_count'] = frequent_itemsets['support'] * len(dataset)

# Display frequent itemsets
print(frequent_itemsets)