int main(){
    hardware hw1 = {"16GB", "RTX", "i9", "1000W", "Corsair", "Asus", "1TB", "Corsair", {'m', 'k', 'r', 'j', 'l'}};
    hardware hw2 = {"16GB", "RTX", "i9", "1000W", "Corsair", "Asus", "1TB", "Corsair", {'m', 'k', 'r', 'j', 'l'}};
    Computer computer1(hw1);
    Computer computer2(hw2);

    computer1.ligar();
    computer1.executar(2);
    computer1.executar(1);
    computer1.executar(3);
    computer1.inputs("Teclado");
}