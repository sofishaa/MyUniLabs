//Інформаційна модель даних працівника

void Employees(){
    string first_name;
    string last_name;

    cout << "Введіть дані працівника: \n";
    cout << "Прізвище: ";
    cin >> last_name;
    cout << "Ім‘я: ";
    cin >> first_name;
}

void Position(){
    string pos_ition;

    cout << "Посада: ";
    cin >> pos_ition;
}

int main(){
    setlocale(LC_CTYPE, "ukr");
    Employees();
    Position();
}
