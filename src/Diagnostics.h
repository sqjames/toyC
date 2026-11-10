/**
 * src/diagnostics/Diagnostics.h
 * 
 */
#ifndef TOYLUA_DIAGNOSTICS_H_
#define TOYLUA_DIAGNOSTICS_H_
#include <concepts>
#include <cstdint>
#include <string_view>

namespace toyc {

    struct SourceLocation {
        uint32_t file, line, column;
    };

    template <typename D>
    concept DiagnosticSink = requires(D& d, const D& cd, SourceLocation loc, std::string_view msg) {
        { d.Error(loc, msg) } -> std::same_as<void>;
        { d.Warn(loc, msg) } -> std::same_as<void>;
        { cd.HasErrors() } -> std::convertible_to<bool>;
    };

}

#endif  // TOYLUA_DIAGNOSTICS_H_
