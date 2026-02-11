def greet_user():
    print("🤖 Chatbot: Hello! I am your chatbot.")
    print("🤖 Chatbot: Ask me something or type 'bye' to exit.\n")
def load_qa_file(filename):
    qa_dict = {}
    try:
        file = open(filename, "r")
        for line in file:
            line = line.strip()
            if "|" in line:
                question, answer = line.split("|", 1)
                qa_dict[question.lower()] = answer
        file.close()
    except FileNotFoundError:
        print("⚠️ qa.txt file not found. File-based answers will not work.")

    return qa_dict
def get_response(user_input, qa_dict):

    if user_input in qa_dict:
        return qa_dict[user_input]
    if "hello" in user_input or "hi" in user_input:
        return "Hello! How can I help you?"
    elif "how are you" in user_input:
        return "I'm doing great! Thanks for asking 😊"
    elif "your name" in user_input:
        return "I am a simple Python chatbot."
    elif "bye" in user_input:
        return "Goodbye! Have a nice day 👋"
    else:
        return "Sorry, I don't understand that. Please try another question."


def main():
    greet_user()

    qa_dict = load_qa_file("qa.txt")

    while True:
        user_input = input("You: ").lower().strip()

        response = get_response(user_input, qa_dict)
        print("🤖 Chatbot:", response)

        if user_input == "bye":
            break
main()
