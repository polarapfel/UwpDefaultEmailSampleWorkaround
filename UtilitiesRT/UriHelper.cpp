#include "pch.h"
#include "UriHelper.h"

using namespace UtilitiesRT;
using namespace Platform;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;

String^ UriHelper::GetUriAsString(IProtocolActivatedEventArgs^ args)
{
    Uri^ uri = args->Uri;
    String^ uriAsString = uri->AbsoluteUri;
    String^ unescapedString = Uri::UnescapeComponent(uriAsString);

    return unescapedString;
}
