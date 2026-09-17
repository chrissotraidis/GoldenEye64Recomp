#include "recompiler/live_recompiler.h"

N64Recomp::ShimFunction::ShimFunction(recomp_func_ext_t* to_shim, uintptr_t value)
    : code(nullptr), func(nullptr) {
    (void)to_shim;
    (void)value;
}

N64Recomp::ShimFunction::~ShimFunction() = default;

void N64Recomp::live_recompiler_init() {}

N64Recomp::LiveGeneratorOutput::~LiveGeneratorOutput() = default;

size_t N64Recomp::LiveGeneratorOutput::num_reference_symbol_jumps() const {
    return 0;
}

void N64Recomp::LiveGeneratorOutput::set_reference_symbol_jump(size_t, recomp_func_t*) {}

N64Recomp::ReferenceJumpDetails N64Recomp::LiveGeneratorOutput::get_reference_symbol_jump_details(size_t) {
    return {};
}

void N64Recomp::LiveGeneratorOutput::populate_import_symbol_jumps(size_t, recomp_func_t*) {}
