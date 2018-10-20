#include "SecretCombinationView.h"
#include "../util/IO.h"
#include "CombinationView.h"

namespace views {

SecretCombinationView::SecretCombinationView(const models::SecretCombination& secret) :
	secret(secret)
{
}

void SecretCombinationView::write() {
	util::IO::writeRule('#');
#ifdef NDEBUG
	util::IO::writeSecret(secret.getCombination().size());
#else
	CombinationView(secret).write();
	util::IO::writeln("");
#endif
	util::IO::writeRule('-');
}


}
