#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

class Observer
{
public:
  virtual ~Observer(){};
  virtual void update() = 0;
};

class Subject
{
public:
  virtual ~Subject(){};
  virtual void subscribe(Observer *observer) = 0;
  virtual void unsubscribe(Observer *observer) = 0;
  virtual void notify() = 0;
};

class War : public Subject
{
public:
  War()
  {
    cout << "War is starting.\n";
  }
  ~War()
  {
    cout << "War is over.\n";
  }

  void subscribe(Observer *observer) override
  {
    observers.push_back(observer);
  }
  void unsubscribe(Observer *observer) override
  {
    observers.remove(observer);
  }
  void notify() override
  {
    cout << "Notifying observers:\n";

    for (auto &&observer : observers)
      observer->update();
  }

  void howManyObservers()
  {
    cout << "There are " << observers.size() << " observers.\n";
  }

  void printCountries()
  {
    cout << "The following countries are involved:\n";
    for (auto &&country : countries)
      cout << country << "\n";
  }
  void addCountryToWar(string in)
  {
    countries.push_back(in);
    cout << in << " has joined the war.\n";

    notify();
  }
  void removeCountryFromWar(string in)
  {
    countries.remove(in);
    cout << in << " has left the war.\n";

    notify();
  }

private:
  list<Observer *> observers;
  list<string> countries{"USA", "Iraq"};
};

class WarringCountryObserver : public Observer
{
public:
  WarringCountryObserver(Subject &inputSubject) : subject(inputSubject)
  {
    this->subject.subscribe(this);
  }
  virtual ~WarringCountryObserver()
  {
  }

  void update() override
  {
    cout << "Observer updated.\n";
  }

  void removeSelfFromList()
  {
    subject.unsubscribe(this);
  }

private:
  Subject &subject;
};

void TestingCode()
{
  War *war = new War;
  WarringCountryObserver *viewer = new WarringCountryObserver(*war);

  war->howManyObservers();

  war->printCountries();

  war->addCountryToWar("Lesotho");

  war->printCountries();

  war->removeCountryFromWar("USA");
  war->removeCountryFromWar("Lesotho");

  war->printCountries();

  delete war;
  delete viewer;
}

int main()
{
  TestingCode();
  return 0;
}