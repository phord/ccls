struct Foo {};

template<class T>
Foo::Foo() {}

/*
EXTRA_FLAGS:
-fms-compatibility
-fdelayed-template-parsing

OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "usr2func": [{
      "usr": 17319723337446061757,
      "detailed_name": "Foo::Foo()",
      "qual_name_offset": 0,
      "short_name": "Foo",
      "kind": 9,
      "storage": 0,
      "declarations": [],
      "spell": "4:6-4:9|15041163540773201510|2|2",
      "extent": "4:1-4:11|0|1|0",
      "declaring_type": 15041163540773201510,
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }],
  "usr2type": [{
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "qual_name_offset": 0,
      "short_name": "Foo",
      "kind": 23,
      "declarations": ["4:6-4:9|0|1|4"],
      "spell": "1:8-1:11|0|1|2",
      "extent": "1:1-1:14|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [],
      "types": [],
      "funcs": [17319723337446061757],
      "vars": [],
      "instances": [],
      "uses": ["4:6-4:9|0|1|4", "4:1-4:4|0|1|4"]
    }],
  "usr2var": []
}
*/
