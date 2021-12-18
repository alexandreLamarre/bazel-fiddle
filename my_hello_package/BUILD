cc_binary(
    name="hello_world",
    srcs = ["hello.cpp"],
    deps = [":greet"],
)

cc_library(
    name = "greet",
    srcs = ["greeter.cpp"],
    hdrs = ["greeter.hpp"],
)

cc_test(
    name = "hello_test",
    size ="small",
    srcs = ["hello_test.cpp"],
    deps = ["@com_google_googletest//:gtest_main"],
)