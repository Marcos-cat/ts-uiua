// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterUiua",
    products: [
        .library(name: "TreeSitterUiua", targets: ["TreeSitterUiua"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterUiua",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterUiuaTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterUiua",
            ],
            path: "bindings/swift/TreeSitterUiuaTests"
        )
    ],
    cLanguageStandard: .c11
)
