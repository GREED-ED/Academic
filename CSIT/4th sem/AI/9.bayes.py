from sklearn import metrics
from sklearn.naive_bayes import GaussianNB
from sklearn.model_selection import train_test_split
from sklearn.datasets import load_iris

iris = load_iris()
X = iris.data 
y = iris.target

trX, teX, trY, teY = train_test_split(X, y, test_size=0.6, random_state=3)

gnb = GaussianNB()
gnb.fit(trX, trY)

predictY = gnb.predict(teX)

print("Model's accuracy is: ", metrics.accuracy_score(teY, predictY)*100)
