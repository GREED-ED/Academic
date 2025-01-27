def get_user_input():
    print("Please answer the following questions with 'yes' or 'no'.")

    fever = input("Do you have a fever? (yes/no): ").lower() == 'yes'
    cough = input("Do you have a cough? (yes/no): ").lower() == 'yes'
    fatigue = input("Do you feel fatigued? (yes/no): ").lower() == 'yes'
    travel_history = input("Have you recently traveled to a COVID-19 hotspot? (yes/no): ").lower() == 'yes'
    contact_with_positive = input("Have you been in contact with someone who has tested positive for COVID-19? (yes/no): ").lower() == 'yes'
    age = int(input("What is your age? "))
    chronic_conditions = input("Do you have any chronic conditions (e.g., respiratory issues)? (yes/no): ").lower() == 'yes'

    return {
        "fever": fever,
        "cough": cough,
        "fatigue": fatigue,
        "travel_history": travel_history,
        "contact_with_positive": contact_with_positive,
        "age": age,
        "chronic_conditions": chronic_conditions
    }

def predict_covid_risk(user_data):
    risk_score = 0

    if user_data['fever'] and user_data['cough'] and user_data['contact_with_positive']:
        risk_score += 3
    
    if user_data['travel_history']:
        risk_score += 2
    
    if user_data['age'] > 65 and user_data['chronic_conditions']:
        risk_score += 2

    if user_data['fatigue'] and user_data['fever']:
        risk_score += 1

    if risk_score >= 5:
        return "High Risk - Please consider getting tested for COVID-19."
    elif risk_score >= 3:
        return "Moderate Risk - Monitor symptoms and consider testing."
    else:
        return "Low Risk - Continue observing health and take precautions."

def main():
    user_data = get_user_input()
    result = predict_covid_risk(user_data)
    print(result)

if __name__ == "__main__":
    main()
