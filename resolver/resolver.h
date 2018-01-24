#ifndef SRUBY_RESOLVER_RESOLVER_H
#define SRUBY_RESOLVER_RESOLVER_H

#include "ast/ast.h"
#include <memory>

namespace ruby_typer {
namespace resolver {

class Resolver final {
public:
    static std::vector<std::unique_ptr<ast::Expression>> run(core::Context ctx,
                                                             std::vector<std::unique_ptr<ast::Expression>> trees);
    Resolver() = delete;

private:
    static void finalizeResolution(core::GlobalState &gs);
};

} // namespace resolver
} // namespace ruby_typer

#endif
