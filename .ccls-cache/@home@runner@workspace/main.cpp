#include <iostream>
using namespace std;

class Personi {
private:
  int mosha;
  int viti_lindjes;

public:
  string emri;
  string mbiemri;
  // Funksion për të vendosur emrin dhe moshën
  void vendosTeDhena(string e, int m) {
    emri = e;
    mosha = m;
  }

  // Funksion për të marrë emrin
  string merrEmrin() { return emri; }

  // Funksion për të marrë moshën
  int merMoshen() { return mosha; }

  // Funksion vetem i deklaruar
  void merrVitinLindjes(int viti);

  // Funksion që shtyp një mesazh
  void pershendetje() {
    cout << "Pershendetje! Une jam " << merrEmrin() << " dhe jam " << mosha
         << " vjeç "
         << "i lindur ne" << viti_lindjes << endl;
  }
};
void Personi::merrVitinLindjes(int viti) { viti_lindjes = viti; }
int main() {
  // Krijojmë një objekt të klasës Personi
  Personi p1;

  // Vendosim të dhënat për personin
  p1.vendosTeDhena("Ardi", 25);
  p1.emri = "Arbini";

  p1.merrVitinLindjes(1998);
  // Thërrasim funksionin pershendetje
  p1.pershendetje();

  return 0;
}
