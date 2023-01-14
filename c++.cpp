c++
struct BaseClass {
       ...whatever
};

struct DerivedClass {
    struct BaseClass base;
    ... derived class additions
};
struct BaseClass;
struct BaseMetaclass {
    void (*method1)(struct BaseClass *);
    int (*method2)(struct BaseClass *, int);
};
struct BaseClass {
    struct BaseMetaclass *isa;
    ....
};
  base_obj->isa->method1(base_obj);
