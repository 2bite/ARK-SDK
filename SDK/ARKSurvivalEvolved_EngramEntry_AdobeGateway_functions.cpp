// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeGateway_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeGateway.EngramEntry_AdobeGateway_C.ExecuteUbergraph_EngramEntry_AdobeGateway
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeGateway_C::ExecuteUbergraph_EngramEntry_AdobeGateway(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeGateway.EngramEntry_AdobeGateway_C.ExecuteUbergraph_EngramEntry_AdobeGateway");

	UEngramEntry_AdobeGateway_C_ExecuteUbergraph_EngramEntry_AdobeGateway_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
