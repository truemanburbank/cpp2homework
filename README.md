# 도전 과제 2

## 필수 과제

- Animal이라는 기본 클래스를 정의한다.
    - Animal 클래스에는 `makeSound()`라는 순수 가상 함수를 포함한다.
- Animal 클래스를 상속받아 다양한 동물 클래스를 생성한다.
    - 예) Dog, Cat, Cow
        - 각 동물 클래스에서 makeSound()함수를 재정의하여 해당 동물의 소리를 출력한다.

## 도전 과제

- 필수 기능 가이드에 있는 요구사항을 만족하는 코드를 구현했다면 아래 코드 스니펫을 보고 요구사항대로 `Zoo` 클래스를 정의하자.
- 랜덤으로 동물 객체를 반환하는 `createRandomAnimal()`함수를 구현하라. 자세한 사항은 아래 코드 스니펫을 참조하라.

![image](https://github.com/user-attachments/assets/f3191347-1810-4f32-bc8b-134714fc6e3c)


## 참고 코드 스니펫

```cpp
class Zoo {
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
public:
    // 동물을 동물원에 추가하는 함수
    // - Animal 객체의 포인터를 받아 포인터 배열에 저장합니다.
    // - 같은 동물이라도 여러 번 추가될 수 있습니다.
    // - 입력 매개변수: Animal* (추가할 동물 객체)
    // - 반환값: 없음
    void addAnimal(Animal* animal);

    // 동물원에 있는 모든 동물의 행동을 수행하는 함수
    // - 모든 동물 객체에 대해 순차적으로 소리를 내고 움직이는 동작을 실행합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    void performActions();

    // Zoo 소멸자
    // - Zoo 객체가 소멸될 때, 동물 벡터에 저장된 모든 동물 객체의 메모리를 해제합니다.
    // - 메모리 누수를 방지하기 위해 동적 할당된 Animal 객체를 `delete` 합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    ~Zoo();
};
```

```cpp
#include <cstdlib>
#include <ctime>

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal();

```

## 결과

![image](https://github.com/user-attachments/assets/cdf531d5-95f3-4560-a250-07f06dd2e98a)

### 궁금했던 것

```cpp
    virtual ~Animal() = default;
```

은 무엇을 의미하는지 궁금했다.

### 1. **`virtual`**:

`virtual`은 이 소멸자가 **가상 함수**임을 나타낸다. 부모 클래스에서 가상 소멸자를 정의하면, 파생 클래스의 객체가 삭제될 때, 부모 클래스의 포인터를 사용해도 **올바른 파생 클래스의 소멸자가 호출된다.**

### 2. **`= default;`**:

`= default`는 **디폴트로 생성된 함수**를 사용하겠다는 의미이다. 이 구문은 **컴파일러가 자동으로 생성하는 기본 소멸자를 사용**하겠다고 명시하는 것이다. 만약 소멸자에 특별한 처리가 필요 없다면, 이렇게 `= default`로 선언하여 컴파일러가 기본적인 소멸자 로직을 자동으로 생성하도록 할 수 있다.

### 왜 `virtual`이 필요한가?

`Animal` 클래스를 상속받은 파생 클래스들(Dog, Cat, Cow 등)이 있을 때, 부모 클래스의 포인터나 참조를 통해 파생 클래스의 객체를 삭제하려면 **가상 소멸자가 필요**합니다. 만약 가상 소멸자가 없으면, 부모 클래스의 소멸자가 호출되고, 파생 클래스에서 할당한 리소스를 제대로 해제하지 못할 수 있다.
