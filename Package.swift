// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterPathOfExile",
    products: [
        .library(name: "TreeSitterPathOfExile", targets: ["TreeSitterPathOfExile"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterPathOfExile",
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
            name: "TreeSitterPathOfExileTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterPathOfExile",
            ],
            path: "bindings/swift/TreeSitterPathOfExileTests"
        )
    ],
    cLanguageStandard: .c11
)