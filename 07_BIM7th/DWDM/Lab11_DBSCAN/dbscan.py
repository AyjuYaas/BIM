import pandas as pd
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import DBSCAN
import matplotlib.pyplot as plt

# Loading the dataset
df = pd.read_csv("./customer_data.csv");

# Select the columns from the csv
X = df[["Age", "AnnualIncome", "SpendingScore"]]

# Standardize the data
scaler = StandardScaler();
X_scaled = scaler.fit_transform(X)

# Applying the DBSCAN Algo
algo = DBSCAN(eps=0.7, min_samples=3)
labels = algo.fit_predict(X_scaled)

# Adding the labels for cluster to the dataframe
df["Clusters"] = labels

# Displaying the points, and the cluster they are in
for cluster_id in sorted(df['Clusters'].unique()):
    print(f"\nCluster {cluster_id}:")
    print(df[df['Clusters'] == cluster_id])

# Visualizing using the scatter plot
plt.figure(figsize=(10, 7))
scatter = plt.scatter(df['AnnualIncome'], df['SpendingScore'], c=df['Clusters'], s=70)

# Add text labels to each point
for i in range(len(df)):
    plt.text(df['AnnualIncome'][i] + 0.1, 
             df['SpendingScore'][i] + 0.5, 
             str(df['Clusters'][i]), 
             fontsize=9)

plt.xlabel("Annual Income")
plt.ylabel("Spending Score")
plt.title("DBSCAN Clustering")
plt.show()