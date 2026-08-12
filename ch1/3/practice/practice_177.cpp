#include <iostream>
using namespace std;

int main() {
    string first_name = "";
    string friend_name = "";
    char friend_sex = 'm';
    int age = -1;
    string me = "";
    cout << "편지 받을 사람 이름 :\n";
    cout << "지인의 이름 :\n";
    cout << "지인의 성별을 m(male), f(female)로 :\n";
    cin >> first_name;
    cin >> friend_name;
    cin >> friend_sex;
    cin >> age;
    cin >> me;
    if (age<0)
        cout << "장난치지 마세요!";
    if (age>100)
        cout << "장난치지 마세요!";
    if (friend_sex == 'm')
        if (age<12)
            cout << "친애하는 " << first_name + ",\n" << "    잘지내시죠? 저는 잘 지냅니다. 보고싶네요.\n" 
            << "요즘" << friend_name << "만난적 있으신가요?\n" 
            << friend_name << "을 보시거든 그에게 저한테 전화해달라고 전해주세요.\n"
            << "얼마전에" << age << "번째 생일을 맞으셨단 이야기를 들었어요.\n" 
            << "내년에는" << age +1 << " 살이 되겠군요.\n"
            << "당신의 친구," << me;
        if (age==17)
            cout << "친애하는 " << first_name + ",\n" << "    잘지내시죠? 저는 잘 지냅니다. 보고싶네요.\n" << "요즘" << friend_name << "만난적 있으신가요?\n" << friend_name << "을 보시거든 그에게 저한테 전화해달라고 전해주세요." << "얼마전에" << age << "번째 생일을 맞으셨단 이야기를 들었어요." << "내년에는 투표를 할 수 있겠네요\n"<< "당신의 친구," << me;
        if (age>70)
            cout << "친애하는 " << first_name + ",\n" << "    잘지내시죠? 저는 잘 지냅니다. 보고싶네요.\n" << "요즘" << friend_name << "만난적 있으신가요?\n" << friend_name << "을 보시거든 그에게 저한테 전화해달라고 전해주세요." << "얼마전에" << age << "번째 생일을 맞으셨단 이야기를 들었어요." << "은퇴 후를 잘 즐기고 계시죠?" << "당신의 친구," << me;
    if (friend_sex == 'f')
        cout << "친애하는 " << first_name + ",\n" << "    잘지내시죠? 저는 잘 지냅니다. 보고싶네요.\n" << "요즘" << friend_name << "만난적 있으신가요?\n" << friend_name << "을 보시거든 그녀에게 저한테 전화해달라고 전해주세요."<< "얼마전에" << age << "번째 생일을 맞으셨단 이야기를 들었어요.";
}