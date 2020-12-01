// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeGateway_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_AdobeGateway_Large.EngramEntry_AdobeGateway_Large_C.ExecuteUbergraph_EngramEntry_AdobeGateway_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_AdobeGateway_Large_C::ExecuteUbergraph_EngramEntry_AdobeGateway_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_AdobeGateway_Large.EngramEntry_AdobeGateway_Large_C.ExecuteUbergraph_EngramEntry_AdobeGateway_Large");

	UEngramEntry_AdobeGateway_Large_C_ExecuteUbergraph_EngramEntry_AdobeGateway_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
