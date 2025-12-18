// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "fingerprintjs",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "fingerprintjs",
            targets: ["fingerprintjs"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "fingerprintjs",
            path: "./fingerprintjs.xcframework"
        ),
    ]
)
