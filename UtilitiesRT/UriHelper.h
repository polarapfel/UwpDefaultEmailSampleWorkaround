#pragma once

using namespace Platform;

namespace UtilitiesRT
{
    public ref class UriHelper sealed
    {
    public:
        /// <summary>
        /// Get Uri from IProtocolActivatedEventArgs
        /// </summary>
        /// <param name="aggregateId">Activation Arguments</param>
        /// <returns>Uri as string</returns>
        static String^ GetUriAsString(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs^ args);

    private:
        UriHelper();
    };
}
