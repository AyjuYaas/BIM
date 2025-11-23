import pandas as pd
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import classification_report, accuracy_score

# Loading the data data
df = pd.read_csv("contact_lenses.csv")

# Droping the ID column because it is not useful
df = df.drop(columns=['id'])

# Encoding the categorical columns into numeric
encoder = LabelEncoder()
for col in df.columns:
    df[col] = encoder.fit_transform(df[col])

# Splitting into features and class
X = df.drop('contact-lenses', axis=1)
y = df['contact-lenses']

# Train and test split
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)

# KNN Model where k is set to 3
knn = KNeighborsClassifier(n_neighbors=3)
knn.fit(X_train, y_train)

# Predictions of the test data
y_pred = knn.predict(X_test)

# Evaluation and report of the prediction
print("Accuracy:", accuracy_score(y_test, y_pred))
print("\nClassification Report:\n", classification_report(y_test, y_pred))

# Showing some of the sample predictions
pred_samples = pd.DataFrame({
    "Actual": y_test.values[:10],
    "Predicted": y_pred[:10]
})
print(pred_samples)
