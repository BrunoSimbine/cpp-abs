#include <iostream>
#include <string>
using namespace std;

class Z {
protected:
    string nome;
    string endereco;
public:
    Z(string n, string e) : nome(n), endereco(e) {}
};

class ContaCartao : public Z {
private:
    string numero_conta;
    float saldo;
public:
    ContaCartao(string n, string num, float s) : Z(n), numero_conta(num), saldo(s) {}

    void mostrarInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Número da Conta: " << numero_conta << endl;
        cout << "Saldo: " << saldo << endl;
    }
};

class Funcionario : public Z {
private:
    string cargo;
    float salario;
public:
    Funcionario(string n, string c, float sal) : Z(n), cargo(c), salario(sal) {}

    void mostrarInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Salário: " << salario << endl;
    }
};

class Supervisor : public Funcionario {
private:
    string departamento;
public:
    Supervisor(string n, string c, float sal, string dept) : Funcionario(n, c, sal), departamento(dept) {}
};

class Tecnico : public Funcionario {
private:
    string equipe;
public:
    Tecnico(string n, string c, float sal, string eq) : Funcionario(n, c, sal), equipe(eq) {}
};

int main() {
    ContaCartao contaCartao("João", "123456", 1000.0);
    Funcionario funcionario("Maria", "Analista", 3000.0);
    Supervisor supervisor("Carlos", "Supervisor", 5000.0, "TI");
    Tecnico tecnico("Ana", "Técnico", 2500.0, "Suporte");

    cout << "Informações da Conta Cartão:" << endl;
    contaCartao.mostrarInformacoes();
    cout << "\nInformações do Funcionário:" << endl;
    funcionario.mostrarInformacoes();
    cout << "\nInformações do Supervisor:" << endl;
    supervisor.mostrarInformacoes();
    cout << "\nInformações do Técnico:" << endl;
    tecnico.mostrarInformacoes();

    return 0;
}
