# Практична 6
ТВ-31 Троцюк Андрій

Варіант 17

17.Test Case #3: Напишіть програму з write overflow в динамічному масиві.
![image](https://github.com/user-attachments/assets/47188289-adfc-4333-9e7d-44d049617006)
![image](https://github.com/user-attachments/assets/04fc291a-89d1-462c-ad32-27b8641d84f6)

Запуск з valgrind

![image](https://github.com/user-attachments/assets/ec7136dd-9471-43fd-a690-3fffa909469a)


У цьому завданні я навмисно створив ситуацію з write overflow у динамічному масиві, виділивши пам’ять лише для 5 елементів, але записавши 10 ,тобто вийшов за межі масиву. Незважаючи на те, що програма вивела всі значення без помилки, це не означає, що вона працює правильно. Така поведінка є невизначеною згідно зі стандартом мови C. Інструмент valgrind показав помилки типу "Invalid write" та "Invalid read", що підтверджує порушення меж пам’яті. Це приклад прихованої помилки, яка може не проявлятися явно, але становить серйозну загрозу для стабільності та безпеки програми
