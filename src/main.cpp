#include <bits/stdc++.h>
#include "Node.h"
#include "Parser.h"
#include "Evaluator.h"
using namespace std;

void handleTest(string test){
    if (test.empty()) return;
    try {
        Evaluator evaluator;
        Parser parser(test);
        Node *ast = parser.parse();
        if (ast == 0) cout << test << " = Invalid" << endl;
        else cout << test << " = " << evaluator.evaluate(ast) << endl;
    } catch (const char* msg){
        cout << test << " = " << msg << endl;
    }
}

int main() {
    cout << "================= Sample Tests =================" << endl;
    try {
        fstream sample;
        sample.open("test/SampleTests.txt");
        string test;
        while (getline(sample, test)) handleTest(test);
        sample.close();
        cout << endl;

        cout << "================= Hidden Tests =================" << endl;
        fstream hidden;
        hidden.open("test/HiddenTests.txt");
        while(getline(hidden, test)) handleTest(test);
        hidden.close();
    } catch(exception& ex) {
        cout << "Make sure test folder is in the same folder as executables" << endl;
        cout << ex.what() << endl;
    }

    return 0;
}
